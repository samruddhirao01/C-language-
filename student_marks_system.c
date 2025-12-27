#include <stdio.h>

int main() {
    int i;
    char name[3][20];
    
    float marks[3][7];
    float total, percent, cgpa;

    for(i = 0; i < 3; i++) {
        printf("\nEnter name of student %d: ", i+1);
        scanf("%s", name[i]);

        printf("Enter marks of 7 subjects:\n");
        printf("English: ");   scanf("%f", &marks[i][0]);
        printf("Marathi: ");   scanf("%f", &marks[i][1]);
        printf("DBMS: ");      scanf("%f", &marks[i][2]);
        printf("C Language: ");scanf("%f", &marks[i][3]);
        printf("IKS: ");       scanf("%f", &marks[i][4]);
        printf("Maths: ");     scanf("%f", &marks[i][5]);
        printf("Statistics: ");scanf("%f", &marks[i][6]);
    }

    printf("\n\n------ STUDENT RESULT ------\n");

    for(i = 0; i < 3; i++) {
        total = 0;

        for(int j = 0; j < 7; j++)
            total += marks[i][j];

        percent = total / 7;
        cgpa = percent / 9.5;

        printf("\nName: %s", name[i]);
        printf("\nTotal: %.2f", total);
        printf("\nPercentage: %.2f", percent);
        printf("\nCGPA: %.2f", cgpa);

        if(percent >= 90)
            printf("\nGrade: A+");
        else if(percent >= 80)
            printf("\nGrade: A");
        else if(percent >= 70)
            printf("\nGrade: B");
        else if(percent >= 60)
            printf("\nGrade: C");
        else if(percent >= 40)
            printf("\nGrade: D");
        else
            printf("\nGrade: Fail");

        printf("\n---------------------------");
    }

    return 0;
}