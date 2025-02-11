#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
        if((ch='i'||ch='o'||ch='u'||ch='a'||ch='e')||(ch='I'||ch='O'||ch='U'||ch='A'||ch='E')){
            printf("Vowel");
        }else{printf("Cononant")}
    }
    else if(isdigit(ch)){
        printf("Digit");
    }
    else{
    printf("Special Character");}
    return 0;
}