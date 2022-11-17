// Shift Reduce Parser
#include<bits/stdc++.h>
using namespace std;
ifstream readFIle("input.txt");
ofstream writeFile("output.txt");

vector <char> st;
vector <char> input_str_copy;

void printStackAndInp(){
    cout << "\n$";
    for(auto x : st)
        cout << x;
    cout << "\t\t";
    for(auto x : input_str_copy)
        cout << x;
    cout << "$";
}

void checkReduced(){
    for(int i = 0; i < st.size(); i ++){
        if(st[i] == 'a' || st[i] == '2' || st[i] == '3' || st[i] == '4'){
            st[i] = 'E';
            printStackAndInp();
            cout << "\t\tReduce E->a";
            checkReduced();
        }
        else if(i+2 < st.size() && st[i] == 'E' && (st[i+1] == '+' || st[i+1] == '*' || st[i+1] == '-' || st[i+1] == '/') && st[i+2] == 'E'){
            st.pop_back();
            st.pop_back();
            printStackAndInp();
            if(st[i+1] == '+')
                cout << "\t\tReduce E->E+E";
            else if(st[i+1] == '-')
                cout << "\t\tReduce E->E-E";
            if(st[i+1] == '*')
                cout << "\t\tReduce E->E*E";
            else if(st[i+1] == '/')
                cout << "\t\tReduce E->E/E";
            checkReduced();
        }
        else if(i+2 < st.size() && st[i] == '(' && st[i+1] == 'E' && st[i+2] == ')'){
            st.pop_back();
            st.pop_back();
            st.pop_back();
            st.push_back('E');
            printStackAndInp();
            cout << "\t\tReduce E->(E)";
            checkReduced();
        }
    }
}
int main(){
        cout << "Grammar is: \n E -> E + E \n E -> E - E \n E -> E * E \n E -> E / E \n E -> (E) \n E -> a|2|3|4\n"; //Context Free Grammar
        string inp_str = "2+(3*(4+2))";
        //cin >> inp_str;
        for(int i = 0; i < inp_str.size(); i++)
            input_str_copy.push_back(inp_str[i]);

        cout << "Input string: " << inp_str;
        cout << "\n\nStack\t\tInput\t\tAction";

        for(int i = 0; i < input_str_copy.size(); i++){
            st.push_back(input_str_copy[i]);
            input_str_copy[i] = ' ';
            printStackAndInp();
            cout << "\t\tShift E->" << st.back();
            checkReduced();
        }
        cout << "\nResult:  ";
        if(st.size() == 1 && st[0] == 'E')
            cout << "String is Accepted";
        else
            cout << "Rejected";
        cout << endl;
    return 0;
}
