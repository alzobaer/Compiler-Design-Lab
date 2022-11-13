#include<bits/stdc++.h>
#include <vector>
using namespace std;
void separateLetters(string str){
	vector <char> letters;
	for(int i = 0; str[i] != '\0'; i ++){
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
			letters.push_back(str[i]);
		}
	}
	cout << "Letters are: ";
	for(int i = 0; i < letters.size(); i++){
		cout << letters[i];
	}
	cout << endl;
}

void separateDigits(string str){
	vector <char> digits;
	for(int i = 0; str[i] != '\0'; i ++){
		if(str[i] >= '0' && str[i] <= '9'){
			digits.push_back(str[i]);
		}
	}
	cout << "Digits are: ";
	for(int i = 0; i < digits.size(); i++){
		cout << digits[i];
	}
	cout << endl;
}
void separateOtherCharacters(string str){
	vector <char> characters;
	for(int i = 0; str[i] != '\0'; i ++){
		if(str[i] == ',' || str[i] == '.' || str[i] == '-' || str[i] == ' ' || str[i] == '&' || str[i] == '?' || str[i] == '@' || str[i] == '#' || str[i] == '*' ){
			characters.push_back(str[i]);
		}
	}
	cout << "Other characters are: ";
	for(int i = 0; i < characters.size(); i++){
		cout << characters[i];
	}
	cout << endl;
}


int main(){
	string str = "Md. Tarek Zaman, Part-3, 2022";
	separateLetters(str);
	separateDigits(str);
	separateOtherCharacters(str);
	return 0;
}
