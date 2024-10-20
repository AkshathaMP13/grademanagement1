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