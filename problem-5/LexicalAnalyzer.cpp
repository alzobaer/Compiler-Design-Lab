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
bool isFloatVariable(string str){
	if((str[0] >= 'a' && str[0] <= 'h') || (str[0] >= 'A' && str[0] <= 'H') || (str[0] >= 'o' && str[0] <= 'z') || (str[0] >= 'O' && str[0] <= 'Z')){
		for(int i = 1; i < str.size(); i++){
			if(isChar(str[i]) || isDigit(str[i])){
				continue;
			}
			else
				return false;
		}
		return true;
	}
	return false;
}

bool isFloatNumber(string str){
	int sz = str.size();
	if(str.size() == 4 && str[0] == '0' && str[1] == '.'){
		for(int i = 2; i < 4; i++){
			if(isDigit(str[i])){
				continue;
			}
			else
				return false;
		}
		return true;
	}
	else if((isDigit(str[0]) && str[0] != '0') && (str[sz - 3] == '.') && (isDigit(str[sz - 2])) && (isDigit(str[sz - 1]))){
		for(int i = 1; i < sz - 3; i++){
			if(isDigit(str[i])){
				continue;
			}
			else
				return false;
		}
		return true;
	}
	return false;
}

bool isDoubleNumber(string str){
	int sz = str.size();
	if(str[0] == '0' && str[1] == '.'){
		for(int i = 2; i < sz; i++){
			if(sz >= 5 && isDigit(str[i])){
				continue;
			}
			else
				return false;
		}
		return true;
	}
	else if((isDigit(str[0]) && str[0] != '0')){
		int i = 1;
		for(i = 1; str[i] != '.'; i ++){
			if(isDigit(str[i])){
				continue;
			}
			else
				return false;
		}
		i ++;
		for( ; str[i] !='\0'; i++){
			if(isDigit(str[i])){
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
	string str = "12.48494";

	if(isFloatVariable(str)){
		cout << "Float Variable" << endl;
	}
	else if(isFloatNumber(str)){
		cout << "Float Number" << endl;
	}
	else if(isDoubleNumber(str)){
		cout << "Double Number" << endl;
	}
	else
		cout << "invalid Inpur or Undefined";
	return 0;
}
