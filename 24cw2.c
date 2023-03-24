#include <stdio.h>

struct student {
    int number;
    char grade;
};

int main() {
    int n, i;
    int a_count = 0, b_count = 0, c_count = 0, d_count = 0, f_count = 0;

    printf("Enter No.Students: ");
    scanf("%d", &n);

    struct student students[n];

    for (i = 0; i < n; i++) {
        printf("Enter student %d Number, Grade: ", i+1);
        scanf("%d, %c", &students[i].number, &students[i].grade);

        switch (students[i].grade) {
            case 'A':
                a_count++;
                break;
            case 'B':
                b_count++;
                break;
            case 'C':
                c_count++;
                break;
            case 'D':
                d_count++;
                break;
            case 'F':
                f_count++;
                break;
            default:
                printf("Invalid grade entered for student %d.\n", i+1);
        }
    }

    for (i = 0; i < n; i++) {
        printf("Student %d details:\n", i+1);
        printf("Number: %d\n", students[i].number);
        printf("Grade: %c\n", students[i].grade);
        printf("Total no. A: %d, B: %d, C: %d, D: %d, F: %d\n", a_count, b_count, c_count, d_count, f_count);
    }

    return 0;
}
//sample input
Enter No.Students: 1
Enter student 1 Number, Grade: 2001, A
//output
Student 1 details:
Number: 2001
Grade: A
Total no. A: 1, B: 0, C: 0, D: 0, F: 0
