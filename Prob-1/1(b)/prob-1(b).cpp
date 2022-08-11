#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[200], letters[50], digits[50], chars[100];
    freopen("input.txt", "r", stdin);
    scanf("%[^\n]s", s);
    int l = 0, d = 0, c = 0;
    for (int i = 0; s[i] != '\0'; i++){
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            letters[l] = s[i];
            l ++;
        }
        else if(s[i] >= '0' && s[i] <= '9'){
            digits[d] = s[i];
            d++;
        }
        else if(s[i] == '[' || s[i] == ']' || s[i] == ',' || s[i] == '.' || s[i] == ';' || s[i] == '-' || s[i] == ':' || s[i] == '/'){
            chars[c] = s[i];
            c++;
        }
    }

    //print the original text
    printf("Original Text: ");
    cout << s << endl;

    printf("\n\nNumber of letters in given string are: %s\n", letters);
    printf("Number of digits in given string are: %s\n", digits);
    printf("Number of characters in given string are: %s\n", chars);
    //printf("Number of characters in given string are: %d\n", chars);
    //FILE *out_file = fopen("output.txt", "w"); // write only
    //fprintf(out_file,"Words = %d\n", words+1);
    //fprintf(out_file,"Letters = %d\n", letters);
    //fprintf(out_file,"Digits = %d\n", digits);
    //fprintf(out_file,"Characters = %d\n", chars);

}
