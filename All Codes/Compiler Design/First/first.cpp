#include<bits/stdc++.h>
using namespace std;
ifstream readFIle("input.txt");

map <char, vector<string>> productionRules;
map <char, set<char>> first, follow;
set <char> nonTerminal;
set <char> isVisited;

void insertProduction(string prod){
    productionRules[prod[0]].push_back(prod.substr(3));
    nonTerminal.insert(prod[0]);
}

void takeInput(){
	int numOfProduction;
	readFIle >> numOfProduction;
	//cout << numOfProduction;

	for(int i= 0; i < numOfProduction; i++){
		string prod;
		readFIle >> prod;
		insertProduction(prod);
	}
}
bool isCapital(char ch){
	if(ch >= 'A' && ch <= 'Z')
		return true;
	else
		return false;
}

void getFirst(char ch){
	if(isVisited.count(ch))
		return;
	isVisited.insert(ch);

	for(string production : productionRules[ch]){
		if(isCapital(production[0])){
			getFirst(production[0]);
			for(char child : first[production[0]]){
				first[ch].insert(child);
			}
		} else
			first[ch].insert(production[0]);

	}
}
void callFirst(){
	for(char ch : nonTerminal){
		if(isVisited.count(ch))
			continue;
		getFirst(ch);
	}
}
void printFirst(){
		cout << "First: \n";
		for(char ch : nonTerminal){
			cout << ch << " -> ";
			for(char x : first[ch])
				cout << x << " ";
			cout << endl;
		}
}
int main(){
	takeInput();
	callFirst();
	printFirst();
}
