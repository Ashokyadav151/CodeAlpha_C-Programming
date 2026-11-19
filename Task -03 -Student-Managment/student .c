// Task 3 - Student Management System

#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s;
    int ch;
    FILE *fp;
    int searchRoll, found;

    while(1)
    {
        printf("\n--- Student Management ---\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        if(ch == 1)
        {
            fp = fopen("students.txt", "a");
            printf("Enter Roll No: ");
            scanf("%d", &s.roll);
            printf("Enter Name: ");
            scanf("%s", s.name);
            printf("Enter Marks: ");
            scanf("%f", &s.marks);

            fprintf(fp, "%d %s %f\n", s.roll, s.name, s.marks);
            fclose(fp);
            printf("Student Added Successfully\n");
        }
        else if(ch == 2)
        {
            fp = fopen("students.txt", "r");
            if(fp == NULL)
            {
                printf("No record found\n");
            }
            else
            {
                printf("\nRoll\tName\tMarks\n");
                while(fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks) != EOF)
                {
                    printf("%d\t%s\t%f\n", s.roll, s.name, s.marks);
                }
                fclose(fp);
            }
        }
        else if(ch == 3)
        {
            printf("Enter Roll No to search: ");
            scanf("%d", &searchRoll);
            fp = fopen("students.txt", "r");
            found = 0;
            if(fp == NULL)
            {
                printf("No record found\n");
            }
            else
            {
                while(fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks) != EOF)
                {
                    if(s.roll == searchRoll)
                    {
                        printf("Found: %d %s %f\n", s.roll, s.name, s.marks);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Student not found\n");
                }
                fclose(fp);
            }
        }
        else if(ch == 4)
        {
            printf("Exiting...\n");
            break;
        }
        else
        {
            printf("Wrong choice\n");
        }
    }

    return 0;
}
