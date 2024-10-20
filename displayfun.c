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