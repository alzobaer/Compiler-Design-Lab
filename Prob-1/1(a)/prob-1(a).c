#include <stdio.h>
#include <string.h>
void main(){
    char s[200];
    freopen("input.txt", "r", stdin);
    int words = 0, letters = 0, digits = 0, chars = 0;
    scanf("%[^\n]s", s);
    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] == ' ' && s[i+1] != ' ')
            words++;
    }
    for(int i = 0; s[i] != '\0'; i++){
        if((s[i] >= 'a' && s[i] <= 'z') || s[i] >= 'A' && s[i] <= 'Z')
            letters ++;
    }
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] >= '0' && s[i] <= '9')
            digits++;
    }
    for(int i = 0; s[i] != '\0'; i++){
        chars++;
    }
    //print the original text
    printf("Original Text: ");
    for (int i = 0; s[i] != '\0'; i++){
        printf("%c", s[i]);
    }

    printf("\n\nNumber of words in given string are: %d\n", words + 1);
    printf("Number of letters in given string are: %d\n", letters);
    printf("Number of digits in given string are: %d\n", digits);
    printf("Number of characters in given string are: %d\n", chars);
    FILE *out_file = fopen("output.txt", "w"); // write only

    // Put the output into file
    /*
    fprintf(out_file,"Words = %d\n", words+1);
    fprintf(out_file,"Letters = %d\n", letters);
    fprintf(out_file,"Digits = %d\n", digits);
    fprintf(out_file,"Characters = %d\n", chars);
    */

}
