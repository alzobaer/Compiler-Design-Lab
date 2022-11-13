#include<bits/stdc++.h>
using namespace std;

vector <string> PersonName = {"Sagor", "Selim", "Salma", "Nipu"};
vector <string> Pronoun = {"he", "she", "I", "we", "you", "they"};
vector <string> Noun = {"book", "cow", "dog", "home", "grass", "rice", "mango"};
vector <string> Verb = {"read", "eat", "take", "run", "write"};

vector <string> words;

bool isPersonaName(string str){
	for(int i = 0; i < PersonName.size(); i++){
		if(str == PersonName[i])
			return true;
		else
			continue;
	}
	return false;
}

bool isPronoun(string str){
	for(int i = 0; i < Pronoun.size(); i++){
		if(str == Pronoun[i])
			return true;
		else
			continue;
	}
	return false;
}
bool isNoun(string str){
	for(int i = 0; i < Noun.size(); i++){
		if(str == Noun[i])
			return true;
		else
			continue;
	}
	return false;
}
bool isVerb(string str){
	for(int i = 0; i < Verb.size(); i++){
		if(str == Verb[i])
			return true;
		else
			continue;
	}
	return false;
}




void makeWords(string str){
	string word = "";
	for(int i = 0; i < str.size(); i++){
		if(str[i] == ' '){
			words.push_back(word);
			word = "";
		}
		else if(i + 1 == str.size()){
			word += str[i];
			words.push_back(word);
			break;
		}
		else
			word += str[i];
	}
}

void printVector(){
	cout << "Input String: ";
	for(int i = 0; i < words.size(); i++){
		cout << words[i] << " " ;
	}
	cout << endl;
}

int main(){
	string str = "I eat rice";
	makeWords(str);

	//printVector();

	if(words.size() < 2)
		cout << "Invalid String";
	else if(words.size() == 2){
		if((isPersonaName(words[0]) || isPronoun(words[0])) && isVerb(words[1]))
			cout << "Valid";
		else
			cout << "Invalid";
	}

	else if(words.size() == 3){
		if((isPersonaName(words[0]) || isPronoun(words[0])) && isVerb(words[1]) && isNoun(words[2]))
			cout << "Valid";
		else
			cout << "Invalid";
	}
	else
		cout << "Invalid";

	return 0;
}
