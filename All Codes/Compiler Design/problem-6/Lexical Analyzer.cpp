#include<bits/stdc++.h>
using namespace std;

bool isChar(char ch){
	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
		return true;
	}
	return false;
}

bool isDigit(char ch){
	if(ch >= '0' && ch <= '9'){
		return true;
	}
	return false;
}

bool isBinaryDigit(char ch){
	if(ch == '0' || ch == '1'){
		return true;
	}
	return false;
}

bool isCharVariable(string str){
	if(str[0] == 'c' && str[1] == 'h' && str[2] == '_' && (isChar(str[3]) || isDigit(str[3]))){
		for(int i = 4; str[i] != '\0'; i++){
			if(isDigit(str[i]) || isChar(str[i])){
				continue;
			}
			else
				return false;
		}
		return true;
	}
	return false;
}

bool isBinaryVariable(string str){
	if(str[0] == 'b' && str[1] == 'n' && str[2] == '_' && (isChar(str[3]) || isDigit(str[3]))){
		for(int i = 4; str[i] != '\0'; i ++){
			if(isChar(str[i]) || isDigit(str[i]))
				continue;
			else
				return false;
		}
		return true;
	}
	return false;
}

bool isBinaryNumber(string str){
	if(str[0] == '0' && isBinaryDigit(str[1])){
		for(int i = 2; str[i] != '\0'; i++){
			if(isBinaryDigit(str[i])){
				continue;
			}
			else
				return false;
		}
		return true;
	}
	return false;
}



int main(){
	string str = "ch_0111";
	if(isCharVariable(str)){
		cout << "Character Variable" << endl;
	}
	else if(isBinaryVariable(str)){
		cout << "Binary Variable " << endl;
	}
	else if(isBinaryNumber(str)){
		cout << "Binary Number " << endl;
	}
	else
		cout << "Invalid Input or Undefined" << endl;

	return 0;
}
