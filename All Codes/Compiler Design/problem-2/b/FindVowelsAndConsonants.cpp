#include<bits/stdc++.h>
using namespace std;
void findVowelAndConsonant(string str){
	vector <char> vowels;
	vector <char> constants;
	for(int i = 0; i < str.size(); i++){
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
			if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
				vowels.push_back(str[i]);
			}
			else
				constants.push_back(str[i]);
		}
	}
	cout << "Vowels are: ";
	for(int i = 0; i < vowels.size(); i++){
		cout << vowels[i];
	}
	cout << endl << "Constants are: ";
	for(int i = 0; i < constants.size(); i++){
		cout << constants[i];
	}
	cout << endl;
}

int main(){
	string str = "Munmun is the student of Computer Science & Engineering";
	findVowelAndConsonant(str);
	return 0;
}
