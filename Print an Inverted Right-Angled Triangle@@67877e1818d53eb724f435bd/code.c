// Your code here...
#include <stdio.h>
int main(){
    
    int i,j,n,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(j<4-i)
        printf("*");
    }
    printf("\n");
    }
}