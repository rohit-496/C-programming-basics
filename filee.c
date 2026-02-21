#include <stdio.h>
int main()
{
    FILE *fp1, *fp2;
    int n, num;
    fp1 = fopen("haha.txt", "w");
    if (fp1 == NULL)
    {
        printf("error opening file\n");
    }
    else{
    printf("Enter the no. of numbers you want to enter into a file:\n");
    scanf("%d", &n);
    printf("enter the numbers into the file:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        fprintf(fp1, "%d\n", num);
    }
}
    fclose(fp1);
  fp1 = fopen("haha.txt","r");
  fp2 = fopen("ahaa.txt","w");
  while(fscanf(fp1, "%d",&num) != EOF){
    if(num  %  2 == 0){
        fprintf(fp2,"%d\n",num);
    }
  }
  printf("Even Numbers copied successfully");
  fclose(fp1);
  fclose(fp2);
  return 0;
}