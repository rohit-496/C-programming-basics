#include<stdio.h>
int main(){
    int a = 0, b = 1, c = 0, n;
    printf("Enter the terms nth term of the fibonacci series: ");
    scanf("%d",&n);
    if (n == 1){
        printf(" The %dth term is%d", n,a);
    }
    else if (n ==  2){
        printf(" The %dth term is%d", n,b);
    }
    else{
        for (int i = 0; i < n-2; i++){
            c = a + b;
            a = b;
            b = c;
        }
        printf(" The %dth term is%d", n,c);
    }
    return 0;
    }