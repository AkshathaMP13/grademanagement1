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