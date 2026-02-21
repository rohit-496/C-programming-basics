#include<stdio.h>
#include<string.h>
int main()
{
    int n,m; 
    int sum = 0;
    printf("Enter the number of  rows and columns");
    scanf("%d %d" , &n, &m);
    int arr[n][m];
    printf("enter a matrix");
    for (int i = 0; i<n ;  i++){
    for (int j = 0 ; j<m ; j++){
scanf("%d", &arr[i][j]);
    }
    }
    printf("printing array elements:\n");
    for (int i = 0; i<n ;  i++){
        for (int j = 0 ; j<m ; j++){
    printf("%d", arr[i][j]);
        }
    printf("\n");
        }
    for (int i = 0; i<n ;  i++){
        for (int j = 0 ; j<m ; j++){
   sum = sum+ arr[i][j];
    }
    printf("sum of row %d is %d", i+1, sum);
    sum = 0;
        }

        
        return 0;
}


