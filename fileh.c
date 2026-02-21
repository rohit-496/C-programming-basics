// #include<stdio.h>
// int main(){
//     FILE *fp1 , *fp2;
//     fp1 = fopen("number.txt", "w");
//     if( fp1 == NULL){
//         printf("error opening file");
//     }
//     else 
//     {
//         printf("file opened");
//     }
//     int n, num ,temp = 0;
//     printf("Enter how many numbers want to place in file");
//     scanf("%d",&n);
//     for(int i = 0; i < n ; i++){
//         scanf("%d", &num);
//         fputw(num , fp1);
//     }
//     fclose(fp1);
//     fp1 = fopen("number.txt", "r");
//     fp2 = fopen("prime.txt", "w");
//     if( fp1 == NULL || fp2 == NULL){
//         printf("error opening file");
//     }
//     while(num = fgetw(fp1) != EOF){
//         if (num == 0 || num == 1){
//             printf("not prime");

//         }
//         for( int i = 1;  i <= num ; i++){
//         if(num % i == 0){
//             temp++;
//         }
//            if (temp == 2){
//             printf("prime");
//             fputw(num, fp2);
//            }
//            temp = 0;
//         }

//     }
//     return 0;
// }

#include <stdio.h>
int main() {
    FILE *fp1, *fp2;
    int num, c;

    fp1 = fopen("rohitey.txt", "r");
    fp2 = fopen("detination.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    while (fscanf(fp1, "%d", &num) != EOF) {
        c = 0;
        for (int j = 1; j <= num; j++) {
            if (num % j == 0) {
                c++;
            }
        }
        if (c == 2) { // प्राइम भएमा
            fprintf(fp2, "%d\n", num);
        }
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}

