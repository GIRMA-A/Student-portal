#include <stdio.h>

void main()
{

    char add;
    int marks[10];
    float total_m = 0, all_s;
    float avg;
    int grade;
    printf("\t\t\t\t\t\t\t======Student GPA=====\n\n\n\t\t\t");
    for (int i = 1; i < 10; i++)
    {

        printf("\n\n\t\t\t\tEnter the marks of the subject :");
        scanf("%d", &marks[i - 1]);

        total_m += marks[i - 1];
        all_s = i;
        if (i == 6)
        {
            printf("\n\n\t\t\t\tDo you want to add another subject ? (y/n) :");
            scanf("%s", &add);
            if (add == 'n' || add == 'N')
            {
                break;
            }
        }
        if (i == 7)
        {
            printf("\n\n\t\t\t\tDo you want to add another subject ? (y/n) :");
            scanf("%s", &add);
            if (add == 'n' || add == 'N')
            {
                break;
            }
        }
        if (i == 8)
        {
            printf("\n\n\t\t\t\tDo you want to add another subject ? (y/n) :");
            scanf("%s", &add);
            if (add == 'n' || add == 'N')
            {
                break;
            }
        }
    }
    avg = (total_m / all_s);
    printf("\n\n\t\t\t\tyour average = %5.2f", avg);
    grade = avg;
    printf("\n\n\t\t\t______________________________________________________________________________\n");
    if (grade > 96)
    {
        printf("\n\n\t\t\t\tCongratulations, you are an excellent student and got a GPA= 4.0 !!\n");
        printf("Your grade is : A+");
    }
    else if (grade > 92 && grade < 96)
    {
        printf("\n\n\t\t\t\tCongratulations, you are an excellent student and got a GPA= 3.7 \n");
        printf("Your grade is : A");
    }
    else if (grade > 88.00 && grade < 92.00)
    {
        printf("\n\n\t\t\t\tCongratulations, you are an very good student and got a GPA= 3.4 \n");
        printf("Your grade is : A-");
    }
    else if (grade > 84.00 && grade < 88.00)
    {
        printf("\n\n\t\t\t\tCongratulations, you are an very good student and got a GPA= 3.2 \n");
        printf("Your grade is : B+");
    }
    else if (grade > 80.00 && grade < 84.00)
    {
        printf("\n\n\t\t\t\tCongratulations, you are an  good student and got a GPA= 3.0 \n");
        printf("Your grade is : B");
    }
    else if (grade > 76.00 && grade < 80.00)
    {
        printf("\n\n\t\t\t\tCongratulations, you are an acceptable student and got a GPA= 2.8 \n");
        printf("Your grade is : B-");
    }
    else if (grade > 72.00 && grade < 76.00)
    {
        printf("\n\n\t\t\t\tCongratulations, you are an acceptable student and got a GPA= 2.6 \n");
        printf("Your grade is : C+");
    }
    else if (grade > 68.00 && grade < 72.00)
    {
        printf("\n\n\t\t\t\tCongratulations, you are an acceptable student and got a GPA= 2.4 \n");
        printf("Your grade is : C");
    }
    else if (grade > 64.00 && grade < 68.00)
    {
        printf("\n\n\t\t\t\tCongratulations, you are an acceptable student and got a GPA= 2.2 \n");
        printf("Your grade is : C-");
    }
    else if (grade > 60.00 && grade < 64.00)
    {
        printf("\n\n\t\t\t\tCongratulations, you are an bad student and got a GPA= 2.0 \n");
        printf("Your grade is : D+");
    }
    else if (grade > 55.00 && grade < 60.00)
    {
        printf("\n\n\t\t\t\tCongratulations, you are an bad student and got a GPA= 1.5 \n");
        printf("Your grade is : D");
    }
    else if (grade > 50.00 && grade < 55.00)
    {
        printf("\n\n\t\t\t\tCongratulations, you are an very bad student and got a GPA= 1.0 \n");
        printf("Your grade is : D-");
    }
    else if (grade < 50.00)
    {
        printf("\n\n\t\t\t\tCongratulations, you are an very bad student and got a GPA= 0 \n");
        printf("Your grade is : F");
    }
}