#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter a four digit number:");
    scanf("%d",&a);
    b=(((a/10)%10)*10)+(a%10);
    c=((a/1000)*10)+((a/100)%10);
    if(b==c){
        printf("Sucess");
    }
    else{
        printf("Failure");
    }
    return 0;
}
