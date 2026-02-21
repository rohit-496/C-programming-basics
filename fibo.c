// #include<stdio.h>
// int fibo(int);
// int main(){
//     int n;
//     printf("Enter the no of terms of the Fibonacci series:\n");
//     scanf("%d", &n);
// for(int i=0; i<n ; i++){
//     printf("%d", fibo(i));
// }
//     return 0;
// }
// int fibo(int i){
//     if( i == 0){
//         return 0;
//     }
//    else if( i == 1){
//    return 1;
// }
// else{
//     return fibo(i-1) + fibo(i-2);
// }

// }
#include <stdio.h>

int fibo(int);

int main() {
    int n;
    printf("Enter the number of terms of the Fibonacci series:\n");
    scanf("%d", &n);

    printf("Fibonacci series:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibo(i));
    }

    printf("\n"); // Adds a newline after printing the series
    return 0;
}

int fibo(int i) {
    if (i == 0)
        return 0;
    else if (i == 1)
        return 1;
    else
        return fibo(i - 1) + fibo(i - 2);
}
// #include<stdio.h>
// int main(){
//     int a = 0, b = 1, n;
//     printf("enter the number of terms of series:\n");
//     scanf("%d", &n);
//     printf("Fibonacci series hajir xa:");
//     if( n == 0){
//     printf("Invalid! select a number greaater than 0\n");
//     }
//     else if(n == 1){
// printf("%d", a);
//     }
//     else if(n == 2){
//         printf("%d %d", a,b);
//             }
//             else {
//                 printf("%d\t%d",a,b);
//                 for(int i = 1; i <= n-2 ; i++ ){
//                     int c = a + b;
//                     printf("%d\t", c);
//                     a = b;
//                     b = c;
//                 }
//             }
//     return 0;
// }
