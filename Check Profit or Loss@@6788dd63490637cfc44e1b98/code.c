#include<stdio.h>
int main(){
    int s,c ;
    scanf("%d",&c);
    scanf("%d",&s);
    if(s-c > 0){
        printf("Profit");
    }
else if(s-c == 0){
    printf("No Profit No Loss");
}
else{
    printf("Loss");
} return 0; }                                                                                                                                                                                                                                                                                            