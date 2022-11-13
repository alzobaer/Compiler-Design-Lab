#include<bits/stdc++.h>
using namespace std;
void countVowelAndConsonant(string str){
	int vowels = 0, consonants = 0;
	for(int i = 0; i < str.size(); i++){
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
			if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
				vowels ++;
			}
			else
				consonants ++;
		}
	}
	cout << "Number of Vowels: " << vowels << endl << "Number of Constants: " << consonants << endl;
}
int main(){
	string str = "Munmun is the student of Computer Science & Engineering";
	//cout << str.size();
	countVowelAndConsonant(str);
	return 0;
}
