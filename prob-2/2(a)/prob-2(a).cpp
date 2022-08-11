#include <bits/stdc++.h>
using namespace std;
int main(){
	char str[50], vowel[50], consonant[50], vword[10], cword[10];
	int vow = 0, cons = 0, j = 0, k = 0, vc = 0;
	freopen("input.txt", "r", stdin); // original text: Munmun is the student of computer Science & Engineering
	gets(str);
	printf("Original Text: %s", str);
	for(int i = 0; str[i] != '\0'; i++){
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
			if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
				vowel[j] = str[i];
				j++;
				vow ++;
			}
			else{
				consonant[k] = str[i];
				k++;
				cons ++;
			}
		}
	}

	cout << endl << endl << "2(a)";
	cout << endl << "Number of Vowel: " << vow << endl;
	cout << "Number of Consonant: " << cons << endl;

	cout << endl << "2(b)";
	printf("\nVowel: %s", vowel);
	printf("\nConsonant: %s", consonant);
	cout << endl << endl;

	// words started with vowel
	int i = 0;
	while(str[i] != '\0'){
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
			if(str[i] == ' ' && str[i + 1] != ' ' && (str[i+1] == 'a' || str[i+1] == 'e' || str[i+1] == 'i' || str[i+1] == 'o' || str[i+1] == 'u' || str[i+1] == 'A' || str[i+1] == 'E' || str[i+1] == 'I' || str[i+1] == 'O' || str[i+1] == 'U')){
				for(int j = i; j != ' '; j++){
					cout << endl << str[j] << endl;
					i ++;
				}
			}
			else
				i ++;
		}
	}

	// words starting with consonant

}
