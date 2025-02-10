#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char x;
    scanf("%ch",&a);
    if(x>='A'&&x<='Z'){
        printf("Uppercase");
    }
    else if(x>='a'&&x<='z'){printf("Lowercase");}
    else{
        printf("Not an alphabet")
    }
    return 0;
}