#include <stdio.h>
struct Student {
    int id;
    char name[50];
    float marks[3];  
    float average;
    char grade;
};
void inputStudentData(struct Student students[], int n);
void calculateAverageAndGrade(struct Student students[], int index);
void displayStudentData(struct Student students[], int n);
int main() {
    struct Student students[100]; 
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    inputStudentData(students, n);
    displayStudentData(students, n);
    return 0;
}
void inputStudentData(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf("%s", students[i].name);
        for (int j = 0; j < 3; j++) { 
            printf("Enter mark for subject %d: ", j + 1);  // Changed from grade to mark
            scanf("%f", &students[i].marks[j]);
        }
        calculateAverageAndGrade(students, i);
    }
}
void calculateAverageAndGrade(struct Student students[], int index) {
    float sum = 0.0;
    for (int i = 0; i < 3; i++) {
        sum += students[index].marks[i];  
    }
    students[index].average = sum / 3;
    
    if (students[index].average >= 90)
        students[index].grade = 'A';
    else if (students[index].average >= 65)
        students[index].grade = 'B';
    else if (students[index].average >= 35)
        students[index].grade = 'C';
    else
        students[index].grade = 'F';
}
void displayStudentData(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nStudent ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Marks: ");  
        for (int j = 0; j < 3; j++) { 
            printf("%.2f ", students[i].marks[j]);  
        }
        printf("\nAverage: %.2f\n", students[i].average);
        printf("Grade: %c\n", students[i].grade);
    }
}
