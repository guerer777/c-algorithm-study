#include <stdio.h>

int gcd(int a,int b);

int main(){
    int num1,num2;
    if(scanf("%d %d",&num1,&num2) == 2){
        num1 = num1 < 0 ? -num1:num1;
        num2 = num2 < 0 ? -num2:num2;
        int res = gcd(num1,num2);
        printf("%d",res);
    }
    return 0;
}

int gcd(int a,int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}