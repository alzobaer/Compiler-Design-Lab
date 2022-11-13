#include<bits/stdc++.h>
using namespace std;
void countWords(string str){
	// cout << str[0];
	int word = 1;
	for(int i = 0; str[i] != '\0'; i ++){
		if(str[i] == ' '){
			 word ++;
		}
	}
	cout << "Number of words: " << word << endl;
}
void countLetters(string str){
	int letters = 0;
	for(int i = 0; str[i] != '\0'; i ++){
		if((str[i] >= 'a' && str[i] <= 'z' ) || (str[i] >= 'A' && str[i] <= 'Z')){
			letters ++;
		}
	}
	cout << "Number of Letters: " << letters << endl;
}
void countDigit(string str){
	int digits = 0;
	for(int i = 0; str[i] != '\0'; i ++){
		if(str[i] >= '0' && str[i] <= '9'){
			digits ++;
		}
	}
	cout << "Number of Digits: " << digits << endl;
}
void countCharacters(string str){
	int charctrs = 0;
	for(int i = 0; str[i] != '\0'; i++){
		charctrs ++;
	}
	cout << "Number of Characters: " << charctrs << endl;
}

int main(){
	string str = "Md. Tarek Zaman, Part-3, 2022";
	countWords(str);
	countLetters(str);
	countDigit(str);
	countCharacters(str);
	return 0;
}
