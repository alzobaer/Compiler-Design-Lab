#include<bits/stdc++.h>
using namespace std;
void separatingWordsStartingWithVowelAndConsonat(string str){
	int i, in1 = 0, in2 = 0;
	vector <char> vowels;
	vector <char> constants;

	for(i = 0; i < str.size(); i ++){
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
			while(str[i] != ' ' && str[i] != '\0'){
				vowels.push_back(str[i]);
				i ++;
			}
			//i --;
			vowels.push_back(' ');
		}
		else if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
			while(str[i] != ' ' && str[i] != '\0'){
				constants.push_back(str[i]);
				i ++;
			}
			//i --;
			constants.push_back(' ');
		}
	}
	cout << "Words starting with vowel: ";
	for(int j = 0; j < vowels.size(); j ++){
		cout << vowels[j];
	}
	cout << endl << "Word starting with consonant: ";
	for(int j = 0; j < constants.size(); j ++){
		cout << constants[j];
	}
	cout << endl;
}

int main(){
	//string str = "Munmun is the student of Computer Science & Engineering";
	string str;
	cout << "Enter input string: ";
	getline(cin, str);
	separatingWordsStartingWithVowelAndConsonat(str);
	return 0;
}
