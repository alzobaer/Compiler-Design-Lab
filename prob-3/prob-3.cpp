#include<bits/stdc++.h>
using namespace std;
int main(){
	char str[10];
	string c, s, e;
	freopen("input.txt", "r", stdin);
	gets(str);
	int i = 0;
	if(str[i] == 'C' && str[i+1] == 'S' && str[i+2] == 'E' && str[i+3] == '-' && str[i+4] == '3' && str[i+5] == '1' && str[i+6] == '4' && str[i+7] == '1'){
		cout << "Subject Code : " << str << endl;
		cout << endl << "Abbreviation : " << "Computer Science & Engineering, 3rd year, 1st semester, Compiler Design Theory" << endl;
	}
	else
		cout << "Invalid Subject Code" << endl;

}
