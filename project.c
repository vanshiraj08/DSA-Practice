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
} *Lead;

void insert(int RollNumber,char Student_Name[30],int Age,float Marks_Obtained,char Gender[1]){
    struct Student *Student=(struct Student *)malloc(sizeof(struct Student));
    Student->RollNumber=RollNumber;
    strcpy(Student->Student_Name, Student_Name);
    Student->Age=Age;
    Student->Marks_Obtained=Marks_Obtained;
    strcpy(Student->Gender,Gender);
    Student->next=NULL;

    if(Lead==NULL)
    {
        Lead=Student;
    }
    else{
        Student->next=Lead;
        Lead=Student;
    }
}

// Main Function
int main(){
    printf("Student Records")
    Lead=NULL;
    int RollNumber;
    char Student_Name[30];
    int Age;
    float Marks_Obtained;
    char Gender[1];
    FILE *fptr= NULL;
    fptr=fopen("Student's_Data.txt","a+");
    char string[]="Roll_Number  Student's_Name  Age  Marks_Obtained  Gender\n";
    fprintf(fptr,"%s",string);
    for(int i=1;i<=2;i++){
        fscanf("%d %s %d %f %s", &RollNumber, &Student_Name, &Age, &Marks_Obtained, &Gender);
        insert(RollNumber,Student_Name,Age,Marks_Obtained,Gender);
        fprintf(fptr,"    %d",RollNumber);
        fprintf(fptr,"    %s",Student_Name);
        fprintf(fptr,"    %d",Age);
        fprintf(fptr,"    %f",Marks_Obtained);
        fprintf(fptr,"    %s\n",Gender);
    }
    fclose(fptr);

    return 0;
}