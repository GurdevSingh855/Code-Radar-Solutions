#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        print(a);
    }
    else{
        print(b);
    }
     printf("%s", welcome());
    return 0;
}