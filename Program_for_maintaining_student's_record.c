#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    char RollNumber[2];
    char name[25];
    int age;
    char gender[10];
    struct student *next;
} * head;

// Following is a function to insert a new node in linked list
void insert(char rollno[2], char name[25], int age, char gender[10])
{
    struct student *student = (struct student *)malloc(sizeof(struct student));
    
    strcpy(student->RollNumber, rollno);
    strcpy(student->name, name);
    student->age = age;
    strcpy(student->gender, gender);
    student->next = NULL;

    if (head == NULL)
    {
        head = student;
    }
    else
    {
        student->next = head;
        head = student;
    }
}

// Following is a function to search a student's data by its roll number  
void search_by_rollno(char roll[2])
{
    struct student *temp = head;
    while (temp != NULL)
    {
        if (temp->RollNumber == roll)
        {
            printf("Roll Number:%s\n Name:%s\n Age:%d\n Gender:%s\n", temp->RollNumber, temp->name, temp->age, temp->gender);
            return;
        }
        temp = temp->next;
    }
    printf("Student with roll number %s is not found!!\n", roll);
}

int main()
{
    head = NULL;
    char rollno[2];
    char name[25];
    int age;
    char gender[10];

    FILE *fptr;
    fptr = fopen("Student_data.txt", "w");
    
    int n;
    printf("Enter the number of students:");
    scanf("%d",&n);

    char string[] = "ROLL NO  STUDENT'S NAME  AGE  GENDER\n";
    fprintf(fptr, "%s", string);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter the roll number, name, age and gender of student %d\n", i);
        scanf("%s %s %d %s", &rollno, &name, &age, &gender);
        insert(rollno, name, age, gender);
        fprintf(fptr, "     %s", rollno);
        
        fprintf(fptr, "   %s ", name);
        char str[] = " ";
        for (int j = 0; j <= 14; j++)
        {
            if (j > strlen(name))
            {
                fprintf(fptr, "%s", str);
            }
        }
        fprintf(fptr, "  %d ", age);
        fprintf(fptr, " %s\n", gender);
    }
    fclose(fptr);
    
    char rn[2];
    int choice = 0;
    printf("Do you want to search the student data?\n1.Yes, search by roll number\n2. No, Exit\n");

    while (choice != 2)
    {
        printf("\nEnter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1: {
            printf("Enter the roll number to be searched: ");
            scanf("%s",&rn);
            search_by_rollno(rn);
            break;
        }
        case 2: {
            printf("Exit");
            break;
        }
        default:
        {
            printf("Enter any valid choice!!");
        }
    };

    }
    
    return 0;
}