// Importing Libraries
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// Declaring Functions
void Menu();
void Add();
void View();
void Search();
void Exit();

// Defining Structure
struct Student{
    int RollNumber;
    char Student_Name[30];
    int Age;
    float Marks_Obtained;
    char Gender[1];
    struct Student *next;
};

// Main Function
int main(){
    printf("Student Records")
    Menu();
    return 0;
}

// Defining the function to display Menu
void menu(){
    char choice;
    system(cls);
    printf("Menu\n");
}

// List of Operations under Menu
printf("1. Add Record\n");
printf("2. View Records\n");
printf("3. Search Record\n");
printf("4. Exit\n");
printf("Choose from the available options(1 to 4)\n");
scanf("%d", &choice)

//Using Switch Statement for Multiple available choices
switch(choice)
    {
    case '1':
    Add();
    break;
    case '2':
    View();
    break;
    case '3':
    Search();
    break;
    case '4':
    Exit();
    break;
    default:
    printf("Invalid Choice");
    }
}

//Function to add detail of the Student
void Add(){
    struct Student *Student=(struct Student *)malloc(sizeof(struct Student));
    FILE *fptr= NULL;
    fptr=fopen("Student's_Data.txt","a+");
    printf("--:ADD RECORD:--\n\n");
    printf("Enter details of student.\n");
    printf("Enter Name : ");
    gets(std.name);
    printf("Gender : ");
    gets(std.gender);
    printf("Address : ");
    gets(std.address);
    printf("Mobile Number : ");
    scanf("%d",&std.mobile);
    fflush(stdin);
    printf("Roll No : ");
    scanf("%d",&std.rollno);
    fflush(stdin);
    printf("Email : ");
    gets(std.email);
    printf("Streme : ");
    gets(std.streme);
    fwrite(&std,sizeof(std),1,fp);   
}

//Function to view records in the File
void View(){
    File *fptr;
    struct student std;
    printf("S.No RollNumber  Student_Name   Age   Marks_Obtained   Gender\n");
    fptr=fopen("Student's_Data.txt","r");
    fclose(fptr);
    Menu();
}

//Function to Search a Record
void Search(){
    FILE *fptr;
    struct student std;
    char StudentName[20];

    printf("Enter name of student :");
    gets(StudentName);
    fptr=fopen("Student's_Data.txt","r");
    printf("StudentName			: %s\n",std.Student_Name);
    printf("\tRollNumber			: %s\n",std.RollNumber);
    printf("\tAge  	: %d\n",std.Age);
    printf("\tMarksObtained			: %f\n",std.Marks_Ontained);
    printf("\tGender			: %s\n",std.Gender);
}
fclose(fptr);
// Menu();
}

//Function to exit the program
void Exit(){
    system("cls");
    printf("Project by Vanshika Rajpurohit");
}
