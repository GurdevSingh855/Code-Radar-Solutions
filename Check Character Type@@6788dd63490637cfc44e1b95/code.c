#include <stdio.h>
#include<ctype.h>
char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);
    if(isdigit(c)){
        printf("Digit");
    }
    else if (isalpha(c)){
    char ch=tolower(c);
    
        if((ch='i'||ch='o'||ch='u'||ch='a'||ch='e')){
            printf("Vowel");
        }else{printf("Consonant");}}
  
   
    else{
    printf("Special Character");
    }
    return 0;
}