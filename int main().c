int main() {
    struct Student students[100]; 
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    inputStudentData(students, n);
    displayStudentData(students, n);
    return 0;
}