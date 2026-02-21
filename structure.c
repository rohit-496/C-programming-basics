#include<stdio.h>
#include<string.h>
struct students{
    char Name[20];
    char Gender[10];
    char Address[20];
    int Marks[2];
    float percentage;
};
int main(){
    struct students std[3], temp;
float total = 0;
    for (int i = 0 ; i<3 ; i++){
    printf("Enter Name: ");
    scanf("%[^\n]", std[i].Name);
    printf("Enter Gender: ");
    scanf("%s", std[i].Gender);
    printf("Enter Address: ");
    scanf("%s", std[i].Address);
    printf("Enter Marks:\n");
        for (int j= 0; j < 2; j++){
        printf("Enter Marks of subject%d: ",j+1);
        scanf("%d",&std[i].Marks[j]);
    }

    
        for (int j= 0; j < 2; j++){
         total = (total + std[i].Marks[j]);
        }
      std[i].percentage =  total/2;
          printf("Percentage is %f\n",std[i].percentage );
        
          total  = 0;
    
    }

         printf("----------------------------------------------------------------------------------------\n");
         printf("%-20s %-20s %-20s %-10s %-10s %-20s\n", "Name", "Gender", "Address", "Marks1", "Marks2", "Percentage");
         printf("----------------------------------------------------------------------------------------\n");
         for (int i = 0 ; i<3 ; i++){
           
            printf("%-20s %-20s %-20s %-10d %-10d %-20f\n", std[i].Name, std[i].Gender, std[i].Address,std[i].Marks[0], std[i].Marks[1],std[i].percentage);
            printf("\n");
         }

       
} 