#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter a two digit number:");
    scanf("%d",&a);
    b=(a/10)%10;
    c=a%10;
    if(b>c){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
    return 0;
}
