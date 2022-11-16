#include<bits/stdc++.h>
using namespace std;
vector <string> keywords = {"int","namespace","struct","new","switch","and","delete","do","not","this",
                     "double","auto","nullptr","throw","else","true","enum","or","try","bool","typedef",
                     "break","private","case","typename","catch","false","public","union","char","float",
                     "register","unsigned","for","return","class","goto","short","void","if","signed","const",
                     "sizeof","int","static","while","long","xor","continue"
                    };
vector <char> punctuator = { ' ', '+', '-', '*', '/', ',', '.', '?', '{', '}', '(', ')', '[', ']', '|', '|', '&', '!', '<', '>', '^', '=', ';'};
vector <string> Operator = {"+", "-", "*", "/", "++", "--", "+=", "-=", "*=", "/=", ">>", "<<", ">=", "<=", "^", "&&", "||", "|", "&"};

bool isDigit(char ch){
	if(ch >= '0' && ch <= '9')
		return true;
	else
		return false;
}

bool isAllDigit(string token){
	for(int i = 0; i < token.size(); i++){
		if(token[i] >= '0' && token[i] <= '9')
			continue;
		else
			return false;
	}
	return true;
}

bool isPuntuator(char ch){
	//int sz = sizeof(punctuator);
	int sz = punctuator.size();
	for(int i = 0; i < sz; i++){
		if(ch == punctuator[i]){
			return true;
		}
		else
			continue;
	}
	return false;
}

bool isKeyword(string str){
	int sz = keywords.size();
	for(int i = 0; i < sz; i++){
		if(str == keywords[i]){
			return true;
		}
		else
			continue;
	}
	return false;
}

bool isValidIdentifier(string token){
	if((token[0] >= '0' && token[0] <= '9') || isPuntuator(token[0]))
		return false;
	for(int i = 1; i < token.size(); i ++){
		if(isPuntuator(token[i]))
			return false;
		else
			continue;
	}
	return true;
}

bool isOperator(string token){
	for(int i = 0; i < Operator.size(); i++){
		if(token == Operator[i])
			return true;
		else
			continue;
	}
	return false;
}

int isConstant(string token){
	int i;
	int sz = token.size();
	if(isAllDigit(token))
		return 1;
	else if(token[0] != '.' && token[sz - 1] != '.'){
		for(i = 0; token[i] != '.'; i++){
			if(isDigit(token[i]))
				continue;
			else
				return -1;
		}
		i++;
		for( ; token[i] != '\0'; i++){
			if(isDigit(token[i]))
				continue;
			else
				return -1;
		}
		return 2;
	}
	else
		return -1;
}

int main(){
	string token = "In;t";
	if(isKeyword(token)){
		cout << "Keyword" << endl;
	}
	else if(isValidIdentifier(token)){
		cout << "Identifier" << endl;
	}
	else if(isOperator(token)){
		cout << "Operator" << endl;
	}

	else if(isConstant(token) == 1){
		cout << "Constant: Ineger" << endl;
	}
	else if(isConstant(token) == 2){
		cout << "Constant: Float" << endl;
	}
	else if(isConstant(token) == -1){
		cout << "Udefined or invalid input" << endl;
	}
	return 0;
}
