// #include<stdio.h>
// void HCF(int a, int b)
// {
// 	int HCF, LCM,i;
// 	for (i=1; i<=a; i++)
//	 {
// 		if (a%i==0 && b%i==0)
//		 {
// 			HCF=i;
//		 } 
//	 }
//	 printf("%d is HCF", HCF);
//	 LCM= (a*b)/HCF;
//	 printf("%d is LCM", LCM);
//	
// }
// int main()
// {
// 	int a,b;
// 	printf("enter any two numbers");
// 	scanf("%d %d", &a, &b);
// 	HCF(a,b);
// 	return 0;
// }
//#include <stdio.h>
//#include <string.h>
//#define MAX 10
//
//// Structure to store student details
//struct Student {
//    char name[50];
//    int roll_no;
//    int clas;
//    float marks[3];  // Stores marks in 3 subjects
//    float percentage;
//} students[MAX]; // Array of 10 students
//
//// Function to calculate percentage for each student
//void calculatePercentage() {
//    for (int i = 0; i < MAX; i++) {
//        float total = students[i].marks[0] + students[i].marks[1] + students[i].marks[2];
//        students[i].percentage = (total / 300) * 100; // Assuming full marks = 100 per subject
//    }
//}
//
//// Function to sort students by percentage in descending order
//void sortByPercentage() {
//    struct Student temp;
//    for (int i = 0; i < MAX - 1; i++) {
//        for (int j = i + 1; j < MAX; j++) {
//            if (students[i].percentage < students[j].percentage) { // Descending order
//                temp = students[i];
//                students[i] = students[j];
//                students[j] = temp;
//            }
//        }
//    }
//}
//
//// Function to display student records with percentage
//void displayRecords() {
//    printf("\nStudents sorted by Percentage (Descending Order):\n");
//    printf("------------------------------------------------\n");
//    printf("%-15s %-10s %-10s %-10s %-10s %-10s %-12s\n", 
//           "Name", "Roll No", "Class", "Sub1", "Sub2", "Sub3", "Percentage");
//    printf("------------------------------------------------\n");
//    
//    for (int i = 0; i < MAX; i++) {
//        printf("%-15s %-10d %-10d %-10.2f %-10.2f %-10.2f %-12.2f\n",
//               students[i].name, students[i].roll_no, students[i].clas,
//               students[i].marks[0], students[i].marks[1], students[i].marks[2], students[i].percentage);
//    }
//}
//
//int main() {
//    // Taking input for 10 students
//    printf("Enter details of %d students:\n", MAX);
//    for (int i = 0; i < MAX; i++) {
//        printf("\nStudent %d:\n", i + 1);
//        printf("Enter Name: ");
//        scanf(" %[^\n]", students[i].name);
//        printf("Enter Roll No: ");
//        scanf("%d", &students[i].roll_no);
//        printf("Enter Class: ");
//        scanf("%d", &students[i].clas);
//        printf("Enter Marks in 3 Subjects: ");
//        scanf("%f %f %f", &students[i].marks[0], &students[i].marks[1], &students[i].marks[2]);
//    }
//
//    // Calculate percentages
//    calculatePercentage();
//
//    // Sort students by percentage in descending order
//    sortByPercentage();
//
//    // Display sorted records
//    displayRecords();
//
//    return 0;
//}

#include<stdio.h>
struct students{
    char name;
    int roll;
    float marks[3];
    float avg;
    float per;
};
int main(){
struct students s[3];
for (int i = 0; i < 3; i++)
{
printf("Enter details for student %d",i+1);
printf("ENter name :");
scanf("%s",s[i].name);
printf("ENter roll number :");
scanf("%d",&s[i].roll);
for (int j = 0; j < 3; j++)
{
printf("Enter marks of subject %d",j+1);
scanf("%f",&s[i].marks[j]);

}
return 0;

}

}
