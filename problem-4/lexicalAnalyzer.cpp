#include<bits/stdc++.h>
using namespace std;

bool isDigit(char ch){
	if(ch >= '0' && ch <= '9'){
		return true;
	}
	return false;
}
bool isAllDigit(string str){
	for(int i = 0; i < str.size(); i++){
		if(isDigit(str[i])){
			continue;
		}
		else
			return false;
	}
	return true;
}
bool isChar(char ch){
	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
		return true;
	}
	return false;
}
bool isOther(string str){
	for(int i = 0; i < str.size(); i++){
		if(isDigit(str[i]) || isChar(str[i])){
			//cout << str.size();
			continue;
		}
		else{
			return true;
		}
	}
	return false;
}
int main(){
	string str = "990354";
	if(isOther(str)){
		cout << "Undefined" << endl;
	}
	else if((str[0] >= 'i' && str[0] <= 'n') || (str[0] >= 'N' && str[0] <= 'N')){
		cout << "Integer Variable" << endl;
	}
	else if((isAllDigit(str) && str[0] != '0')  && str.size() <= 4){
		cout << "ShortInt Number " << endl;
	}
	else if(isAllDigit(str) && str[0] != '0' && str.size() > 4){
		cout << "LongInt Number" << endl;
	}
	else
		cout << "Invalid Input" << endl;

}
