#include<bits/stdc++.h>
using namespace std;
map <string, string> dept;
map <string, string> year;
map <string, string> semester;
map <string, string> courseName;
map <string, string> courseType;

void Abbreviates(string str){
	dept["CSE"] = "Computer Science & Engineering, ";

	year["1"] = "1st year, ";
	year["2"] = "2nd year, ";
	year["3"] = "3rd year, ";
	year["4"] = "4th year, ";

	semester["1"] = "1st semester, ";
	semester["2"] = "2nd semester, ";

	courseName["1"] = "System Analysis and Design, ";
	courseName["2"] = "Database Management System, ";
	courseName["3"] = "Digital Signal Processing, ";
	courseName["4"] = "Compiler Design, ";
	courseName["5"] = "Computer Networks, ";

	courseType["1"] = "Theory.";
	courseType["2"] = "Lab.";

	int i = 0;
	string temp;
	while(str[i] != '-'){
		temp = temp + str[i];
		i ++;
	}
	//cout << temp;
	cout << dept[temp];
	i ++;
	temp = str[i];
	cout << year[temp];
	i ++;
	temp = str[i];
	cout << semester[temp];
	i ++;
	temp = str[i];
	cout << courseName[temp];
	i ++;
	temp = str[i];
	cout << courseType[temp] << endl;
}
int main(){
	//string str = "CSE-3141";
	string str;
	cout << "Enter input String: ";
	getline(cin, str);
	Abbreviates(str);
	return 0;
}
