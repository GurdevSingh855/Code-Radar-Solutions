#include<stdio.h>
int main(){
    int s,c ;
    scanf("%d",&s);
    scanf("%d",&c);
    if(s-c > 0){
        printf("Profit");
    }
else if(s-c == 0){
    printf("No Profit No Loss");
}
else{
    printf("Loss");
}
return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                         1