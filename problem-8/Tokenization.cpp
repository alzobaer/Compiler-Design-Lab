#include<bits/stdc++.h>
using namespace std;

vector <string> keywords = {"int","namespace","struct","new","switch","and","delete","do","not","this",
							 "double","auto","nullptr","throw","else","true","enum","or","try","bool","typedef",
							 "break","private","case","typename","catch","false","public","union","char","float",
							 "register","unsigned","for","return","class","goto","short","void","if","signed","const",
							 "sizeof","int","static","while","long","xor","continue"
							};
vector <char> punctuator = { ' ', '+', '-', '*', '/', ',', '.', '?', '{', '}', '(', ')', '[', ']', '|', '&', '!', '<', '>', '^', '=', '%', '#', '@', '!'};
vector <string> ArithmaticOperator = {"+", "-", "*", "/"};
vector <string> RelationalOperator = {">>", "<<", ">=", "<=", "==", "!="};
vector <string> LogicalOperator = {"&&", "||", "!"};
vector <string> BitwiseOperator = { "|", "&", "^"};
vector <string> AssignmentOperator = {"+=", "-=", "*=", "/=", "%=", "="};
vector <string> UnaryOperator = {"++", "--"};

bool isDigit(char ch){
	if(ch >= '0' && ch <= '9')
		return true;
	else
		return false;
}

bool isAllDigit(string token){
	for(int i = 0; i < token.size(); i++){
		if(isDigit(token[i]))
			continue;
		else
			return false;
	}
	return true;
}

bool isPuntuator(char ch){
	for(int i = 0; i < punctuator.size(); i ++){
		if(ch == punctuator[i])
			return true;
		else
			continue;
	}
	return false;
}

bool isKeyword(string token){
	for(int i = 0; i < keywords.size(); i++){
		if(token == keywords[i])
			return true;
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

bool isArithmaticOperator(string token){
	for(int i = 0; i < ArithmaticOperator.size(); i ++){
		if(token == ArithmaticOperator[i]){
			return true;
		}
		else
			continue;
	}
	return false;
}
bool isLogicalOperator(string token){
	for(int i = 0; i < LogicalOperator.size(); i ++){
		if(token == LogicalOperator[i]){
			return true;
		}
		else
			continue;
	}
	return false;
}
bool isAssignmentOperator(string token){
	for(int i = 0; i < AssignmentOperator.size(); i ++){
		if(token == AssignmentOperator[i]){
			return true;
		}
		else
			continue;
	}
	return false;
}
bool isRelationalOperator(string token){
	for(int i = 0; i < RelationalOperator.size(); i ++){
		if(token == RelationalOperator[i]){
			return true;
		}
		else
			continue;
	}
	return false;
}
bool isBitwiseOperator(string token){
	for(int i = 0; i < BitwiseOperator.size(); i ++){
		if(token == BitwiseOperator[i]){
			return true;
		}
		else
			continue;
	}
	return false;
}
bool isUnaryOperator(string token){
	for(int i = 0; i < UnaryOperator.size(); i ++){
		if(token == UnaryOperator[i]){
			return true;
		}
		else
			continue;
	}
	return false;
}

int isFloatOrInt(string token){
	int i, sz = token.size();
	if(isAllDigit(token))
		return 1;
	else if(token[0] != '.' && token[sz-1] != '.'){
		for(i = 0; token[i] != '.'; i++){
			if(isDigit(token[i]))
				continue;
			else
				return -1;
		}
		i ++;
		for( ; token[i] != '\0'; i++){
			if(isDigit(token[i]))
				continue;
			else
				return -1;
		}
		return 2;
	}
	return -1;
}


int main(){
	string token;
	while(1){
		cout << "Enter the input string or # to terminate the process: ";
		getline(cin, token);
		if(token == "#")
			return 0;
		else if(isKeyword(token)){
			cout << "Keyword" << endl;
		}
		else if(isValidIdentifier(token)){
			cout << "Identifier" << endl;
		}
		else if(isArithmaticOperator(token)){
			cout << "Arithmatic Operator" << endl;
		}
		else if(isRelationalOperator(token)){
			cout << "Relational Operator" << endl;
		}
		else if(isLogicalOperator(token)){
			cout << "Logical Operator" << endl;
		}
		else if(isAssignmentOperator(token)){
			cout << "Assignment Operator" << endl;
		}
		else if(isBitwiseOperator(token)){
			cout << "Bitwise Operator" << endl;
		}
		else if(isUnaryOperator(token)){
			cout << "Unary Operator" << endl;
		}
		else if(isFloatOrInt(token) == 1)
			cout << "Integer" << endl;
		else if(isFloatOrInt(token) == 2)
			cout << "Float" << endl;
		else if(isFloatOrInt(token) == -1)
			cout << "Invalid input string" << endl;
	}
	return 0;
}
