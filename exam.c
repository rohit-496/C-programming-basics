// #include<stdio.h>
// #include<string.h>
// struct Course{
//     char Name[50];
//     int code;
//     int credit_hours;
// };
// int main(){
// struct Course c[3], temp;
// printf("Enter details of any 5 courses:\n");
// for (int i = 0 ; i<3 ; i++){
//     printf("Enter name of the course%d:\n",i+1);
//     scanf(" %[^\n]", &c[i].Name);
//     printf("Enter code of the course%d:\n",i+1);
//     scanf("%d", &c[i].code);
//     printf("Enter credit hours of the course%d:\n", i+1);
//     scanf("%d", &c[i].credit_hours);
// }
// printf("------------------------------------------------------------------------------------------------------------\n");
// printf("%-20s %-10s %-15s\n", "Name", "Code", "Credit hours");
// printf("------------------------------------------------------------------------------------------------------------\n");

// for ( int i= 0; i<3 ; i++){
//     printf("%-20s %-10d %-10d\n", c[i].Name, c[i].code , c[i].credit_hours);
// }
// // for ( int i=0; i<3 ; i++){
// //     if(c[i].credit_hours > 3){
// //         printf("%20s %-10d %-10d\n", c[i].Name, c[i].code , c[i].credit_hours);
// //     }
// // }
// for( int i=0; i<2;i++){
//     for (int j= i+1; j<3 ;j++){
// if (strcmp(c[i].Name, c[j].Name) > 0){
// temp = c[i];
// c[i] = c[j];
// c[j] = temp;
// }
//     }
// }
// printf("------------------------------------------------------------------------------------------------------------\n");
// printf("%-20s %-10s %-15s\n", "Name", "Code", "Credit hours");
// printf("------------------------------------------------------------------------------------------------------------\n");

// for ( int i= 0; i<3 ; i++){
//     printf("%-20s %-10d %-10d\n", c[i].Name, c[i].code , c[i].credit_hours);
// }

// return 0;
// }

/* nth term of fibonacci*/

// #include<stdio.h>
// int prime(int c){
//     int i, temp = 0 ;
//     for( i=1; i <= c ; i++){
//         if(c % i == 0){
//             temp++;
//         }
//     }
//     if (temp == 2){
//         printf("prime");
//     }
//         else{
//             printf("not prime");
//         }
//         return 0;
//     }

// int main(){
//     int a = 0, b = 1, c = 0, n;
//     printf("Enter the nth term of the fibonacci series: ");
//     scanf("%d",&n);
//     if (n == 1){
//         printf(" The %dth term is%d", n,a);
//     }
//     else if (n ==  2){
//         printf(" The %dth term is%d", n,b);
//     }
//     else{
//         for (int i = 0; i < n-2; i++){
//             c = a + b;
//             a = b;
//             b = c;
//         }
//         printf(" The %dth term is :%d\n", n,c);
// if (n == 1 || n ==2){
//     printf("not prime");
// }
// else{
//         prime(c);
//     }
// }
//     return 0;
//     }

// #include <stdio.h>
// #include <string.h>
// struct Student
// {
//     char Name[50];
//     int Roll;
//     char Gender[50];
//     char add[50];
// };

// int Sortbyroll(struct Student s[3]) {
// struct Student temp;

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = i + 1; j < 3; j++)
//         {
//             if (s[i].Roll > s[j].Roll)
//             {
//                 temp = s[i];
//                 s[i] = s[j];
//                 s[j] = temp;
//             }
//         }
//     }

//     return 0;
// }

// int main()
// {
//     struct Student s[3];
//     printf("Enter details of 3 students\n");
//     for (int i = 0; i < 3; i++)
//     {
//         printf("Enter Name, Roll number,Gender, Address of %d student\n", i + 1);

//         scanf(" %[^\n]%*c", s[i].Name);
//         scanf("%d", &s[i].Roll);
//         scanf(" %[^\n]%*c", s[i].Gender);
//         scanf(" %[^\n]%*c", s[i].add);
//     }
//     printf("--------------------------------------------------\n");
//     printf("%-20s %-7s %-10s %-20s\n", "Name", "Roll_number", "Gender", "Address");
//     printf("--------------------------------------------------\n");
//     for (int i = 0; i < 3; i++)
//     {
//         printf("%-20s %-7d %-10s %-20s\n", s[i].Name, s[i].Roll, s[i].Gender, s[i].add);
//     }
//     Sortbyroll(s);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x=10 ;
//     int *p; int**p2;
//     p= &x;
//    p2= &p;
//     printf("%d\n",&x);
//     printf("%d\n",x);
//     printf("%d\n",p);
//     printf("%d\n",*p);
//     printf("%d\n",p2);
//     printf("%d\n",*p2);
//     printf("%d\n",**p2);

//     return 0;
// }

// #include<stdio.h>
// struct Name{
// char first[20];
// char last[20];
// };
// struct Details{
//     struct Name n;
//     int age;
//     char add[50];
// };
// int main(){
//     struct Details s[3];
//     printf("Enter details\n");
//     for(int i= 0 ; i<3 ; i++){
//         printf("Enter details of person%d\n",i+1);
//       scanf(" %[^\n]", s[i].n.first);
//       scanf(" %[^\n]", s[i].n.last);
//       scanf("%d", &s[i].age);
//       scanf(" %[^\n]", s[i].add);
//     }
//     printf("-----------------------------------------------------------------------\n");
//     printf("%-25s %-10s %-20s\n","Name", "Age" , "Address");
//     printf("-----------------------------------------------------------------------\n");
//     for(int i= 0 ; i<3 ; i++){
//     printf("%-10s %-15s %-10d %-20s\n",s[i].n.first, s[i].n.last,s[i].age,s[i].add);
//     }
// }


/*transpose*/

// #include <stdio.h>
// int main()
// {
//     int r, c;
//     printf("Enter the number of rows and columns:\n");
//     scanf("%d %d", &r, &c);
//     int mat[r][c], transpose[c][r];
//     printf("Enter array elements:\n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &mat[i][j]);
//         }
//     }
//  printf("Matrix:\n");
//  for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             printf("%d\t", mat[i][j]);
//         }
//         printf("\n");
//     }
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             transpose[j][i] = mat[i][j];
//         }
//     }
//     printf("Transpose:\n");
//     for (int i = 0; i < c; i++)
//     {
//         for (int j = 0; j < r; j++)
//         {
//             printf("%d\t", transpose[i][j]);
//         }
//         printf("\n");
//     }
// return 0;
// }

// row and column sum

// #include <stdio.h>
// int main()
// {
//     int r, c;
//     printf("Enter the number of rows and columns:\n");
//     scanf("%d %d", &r, &c);
//     int mat[r][c], transpose[c][r];
//     printf("Enter array elements:\n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &mat[i][j]);
//         }
//     }
//  printf("Matrix:\n");
//  for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             printf("%d\t", mat[i][j]);
//         }
//         printf("\n");
//     }
// int sum=0;
// for (int i=0; i<r; i++){
//     for (int j = 0; j< c; j++){
//         sum= sum + mat[i][j];
//     }
//     printf("the sum of row %d is %d\n", i+1, sum);
//     sum = 0;
// }
// for(int j = 0; j < c; j++){
//     for(int i  = 0; i<r; i++){
//         sum = sum+ mat[i][j];
//     }
//     printf("the sum of column %d is %d\n", j+1, sum);
//     sum = 0;
// }
// return 0;
// }


// matrix add
// #include <stdio.h>
// int main()
// {
//     int r, c;
//     printf("Enter the number of rows and columns:\n");
//     scanf("%d %d", &r, &c);
//     int mat[r][c], mat2[r][c];
//     printf("Enter array elements for first matrix:\n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &mat[i][j]);
//         }
//     }
//  printf("Matrix 1:\n");
//  for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             printf("%d\t", mat[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Enter array elements for second matrix:\n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &mat2[i][j]);
//         }
//     }
//  printf("Matrix 2:\n");
//  for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             printf("%d\t", mat2[i][j]);
//         }
//         printf("\n");
//     }
//  int sum[r][c];
//  for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//           sum[i][j] = mat[i][j] + mat2[i][j];
//         }
//     }
//     printf("Sum:\n");
//  for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             printf("%d\t", sum[i][j]);
//         }
//         printf("\n");
//     }

// return 0;
// }

// string reverse
// #include<stdio.h>
// #include<string.h>
// int main(){
//  char str[50];

//  printf("enter a string");
//  scanf("%s", str);
//  int start =  0; int end = strlen(str)-1;
//  while(start < end){
//     char temp = str[start];
//       str[start] = str [end] ;
//      str[end] = temp;
//      start++;
//      end--;
//  }
//  printf("reversed:\t%s",str);
//  return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//   char  str[6]="rohit";
//   char rev[6];
//   int len= strlen(str);
//   for (int  i = 0 ; i < len ; i++){
//     rev[i] = str[len-i-1];
//   }
// rev[len]="\0";
//   printf("reversed string is %s", rev);
// return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//  char str[50];
//  char str2[50];
//  printf("enter a string");
//  scanf("%s", str);
//  strcpy(str2,str);
//  int start =  0; int end = strlen(str)-1;
//  while(start < end){
//     char temp = str[start];
//       str[start] = str [end] ;
//      str[end] = temp;
//      start++;
//      end--;
//  }
//  if (strcmp(str,str2) == 0){
//     printf("palindrome");
//  }
//  else {
//     printf(" not  palindrome");
//  }
// }

#include <stdio.h>
int main() {
    int preparation = 0;
    int confidence = 100;
    int panic = 0;

    printf("C Programming Exam Day!\n");
printf("Enter preparation from 1 to 100:\n");
scanf("%d", &preparation);
   
    if(preparation >= 50 && preparation <= 70) {
        
        printf("Will pass easy\n");
    }
   else if(preparation >= 70 && preparation <= 100) {
        
        printf("Will top easy\n");
    }
    else if(preparation >= 0 && preparation <= 50) {
        panic = 1;
        confidence -= 99;
        printf("Status: Reading question... brain stopped working.\n");

    while (panic = 1) {
        printf("Thinking...\n");
        printf("Still thinking...\n");
        printf("Okay let's write #include <stdio.h> and hope for marks.\n");
        sleep (3);
    }
}

    return 0;
}

