#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void add_student();

void student_record();

void search_student();

void delete();

float GPA();

struct student
{
    char first_name[20];
    char last_name[20];
    long int Reg_number;
    int term_number;
    char vill[20];
    float GPA;
};

void main()
{
    int choice = 0;
    while (choice != 6)
    {
        printf("\t\t\t=====WELCOME IN OUR PROJECT=====\t\t\t");
        printf("\n\n\n\t\t\t\t1. Add student record\n");
        printf("\t\t\t\t2. Student records\n");
        printf("\t\t\t\t3. Search student\n");
        printf("\t\t\t\t4. Delete records\n");
        printf("\t\t\t\t5. Calculate GPA\n");
        printf("\t\t\t\t6.Exit\n");
        printf("\t\t\t\t__________________________________________\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            system("cls");
            add_student();
            system("cls");
        }
        else if (choice == 2)
        {
            system("cls");
            void student_record();
            printf("\t\t\t\tPress any key to Exit\n");
            system("pause");
            system("cls");
        }
        else if (choice == 3)
        {
            system("cls");
            void search_student();
            printf("\t\t\t\tPress any key to Exit\n");
            system("pause");
            system("cls");
        }
        else if (choice == 4)
        {
            system("cls");
            void delete ();
            printf("\t\t\t\tPress any key to Exit\n");
            system("pause");
            system("cls");
        }
        else if (choice == 5)
        {
            system("cls");
            float GPA();
            printf("\t\t\t\tPress any key to Exit\n");
            system("pause");
            system("cls");
        }

        else
        {
            system("cls");
            printf("\t\t\t\tTHANKS FOR USING OUR SOFTWARE\n");
            exit(0);
        }
    }
}

void add_student()

{
    char another;
    FILE *fp;
    struct student info;

    do
    {
        system("cls");
        printf("\t\t\t\t======Add student info=====\n\n\n");
        fp = fopen("student_info.txt", "a");
        printf("\n\t\t\tEnter first name :");
        scanf("%s", &info.first_name);
        printf("\n\t\t\tEnter last name :");
        scanf("%s", &info.last_name);
        printf("\n\t\t\tEnter Reg number :");
        scanf("%i", &info.Reg_number);
        printf("\n\t\t\tEnter Term number :");
        scanf("%d", &info.term_number);
        printf("\n\t\t\tEnter address :");
        scanf("%s", &info.vill);
        printf("\n\t\t\tEnter GPA :");
        scanf("%f", &info.GPA);
        printf("\n\t\t\t_______________________________\n");

        if (fp == NULL)
        {
            fprintf(stderr, "\t\t\tCan not open the file ");
        }
        else
        {
            printf("\t\t\tRecord stored successfully\n");
        }
        fwrite(&info, sizeof(struct student), 1, fp);
        fclose(fp);

        printf("\t\t\tDo you want to add another record ? (y/n):");
        scanf("%s", &another);

    } while (another == 'y' || another == 'Y');
}

void student_record()
{
    FILE *fp;
    struct student info;
    fp = fopen("student_info.txt", "r");
    printf("\t\t\t\t======student Records=====\n\n\n");
    if (fp == NULL)
    {
        fprintf(stderr, "\t\t\tCant open the file ");
    }
    else
    {
        printf("\t\t\t\tRecords\n");
        printf("\t\t\t\t______________\n\n");
    }
    while (fread(&info, sizeof(struct student), 1, fp))
    {
        printf("\n\t\t\t\tStudent name:%s%s", info.first_name, info.last_name);
        printf("\n\t\t\t\tReg number:%d", info.Reg_number);
        printf("\n\t\t\t\tTerm number:%d", info.term_number);
        printf("\n\t\t\t\tAddress:%s", info.vill);
        printf("\n\t\t\t\tGPA:%f", info.GPA);
        printf("\n\t\t\t\t_____________________________\n");
    }
    fclose(fp);
    system("pause");
}

void search_student()
{
    FILE *fp;
    struct student info;
    long int Reg_number, found = 0;
    fp = fopen("student_info.txt", "r");
    printf("\t\t\t\t======Search for student =====\n\n\n");
    printf("\t\t\t Student Registration number:");
    scanf("%d", &Reg_number);
    while (fread(&info, sizeof(struct student), 1, fp))
    {
        if (info.Reg_number == Reg_number)
        {
            found = 1;
        }
        printf("\n\t\t\t\tStudent name:%s%s", info.first_name, info.last_name);
        printf("\n\t\t\t\tReg number:%d", info.Reg_number);
        printf("\n\t\t\t\tTerm number:%d", info.term_number);
        printf("\n\t\t\t\tAddress:%s", info.vill);
        printf("\n\t\t\t\tGPA:%f", info.GPA);
        printf("\n\t\t\t\t_____________________________\n");
    }

    if (!found)
    {
        printf("\t\t\tRecords not found");
    }
    fclose(fp);
    system("pause");
}

void delete()

{
    FILE *fp, *fp1;
    struct student info;
    int Reg_number, found = 0;
    printf("\t\t\t\t======Delete=====\n\n\n");
    fp = fopen("student_info", "r");
    fp = fopen("temp.txt", "w");
    printf("\t\tEnter Reg number: ");
    scanf("%d", &Reg_number);
    if (fp == NULL)
    {
        fprintf(stderr, "\t\t\tCan not open the file ");
    }

    while (fread(&info, sizeof(struct student), 1, fp))
    {
        if (info.Reg_number == Reg_number)
        {
            found = 1;
        }
        else
        {
            fwrite(&info, sizeof(struct student), 1, fp1);
        }
    }
    fclose(fp);
    fclose(fp1);
    if (found)
    {
        remove("student_info");
        rename("temp.txt,", "student_info");
        printf("\n\t\t\trecord deleted successfully");
    }
    if (!found)
    {

        printf("\n\t\t\tRecord not found");
    }
    system("pause");
}

float GPA()
{
}
