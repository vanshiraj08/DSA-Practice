//Including Header files
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

//Function declaration
	void Menu();
	void Add();
	void Display();
	void Search();
	void Exit();

//Defining structure
struct Student
{
    int RollNumber;
    char Student_Name[30];
    int Age;
    float Marks_Obtained;
    char Gender[1];
};

//main function
  int main()
{
    printf("Student Records\n");
    printf("\t\tPress any key to continue.");
    getch();
    Menu();
    return 0;
}

// function to Display Menu
void Menu()
{
    char choice;
    printf("----Main Menu----\n");

//List of Operations available under Menu
    printf("1.  Add Record\n");
    printf("2.  View Record\n");
    printf("3.  Search Record\n");
    printf("4.  Exit\n");
    printf("Enter your choice between 1 to 4 : ");
    scanf("%c",&choice);
    // USE OF SWITCH STATEMENT
    switch(choice)
    {
    case '1':
    Add();		                                    //call add function
    break;
    case '2':
    Display();		                                //call Display function
    break;
    case '3':
	Search();	                                    //call Search function
	break;
    case '4':
    Exit();	                                        //call Exit function
	break;
    default:
    printf("Invalid Choice!!");
    }
}

// Function to add details of Student
void Add()
{
    FILE *fptr; 		//file pointer
    struct Student std;
    char Add_More ='y';
    system("cls");
    fptr = fopen("Student's_Records.txt","ab+");  	//opening file in append mode
    if(fptr == NULL){
	printf("Error opening file");
    exit(1);
    }
    fflush(stdin);
    while(Add_More == 'y')
    {
    printf("--:ADD RECORD:--\n");
    printf("Enter details of Student.\n");
    printf("Student's Name : ");
    gets(std.Student_Name);
    printf("RollNumber : ");
    scanf("%d",&std.RollNumber);
    printf("Age : ");
    scanf("%d",&std.Age);
    printf("Marks_Obtained : ");
    scanf("%d",&std.Marks_Obtained);
    fflush(stdin);
    printf("Gender : ");
    gets(std.Gender);
    fflush(stdin);
    fwrite(&std,sizeof(std),1,fptr);  	                              ///writing in a file
 	printf("Press 'y' to add another data otherwise 'any key'.");
    fflush(stdin);
    Add_More = getch();
    system("cls");
    fflush(stdin);
    }
    fclose(fptr);
    printf("Press any key to continue.");
    getch();
    Menu();
}

// Function to Display the Records of Students

void Display()
{
    FILE *fptr;
    int i=1;
    struct Student std;
    system("cls");
    printf("Display Record\n");
    printf("S.No        RollNumber      Student_Name              Age            Marks_Obtained         Gender\n");
    fptr = fopen("Student's_Records.txt","rb+");
    if(fptr == NULL){

    printf("\n\nError opening file.");
    exit(1);
    }
    while(fread(&std,sizeof(std),1,fptr) == 1){
    fflush(stdin);
printf("%d  %d\t\t%s\t  %d\t\t%f\t\t%s\n",i,std.RollNumber,std.Student_Name,std.Age,std.Marks_Obtained,std.Gender);
        i++;
    }
    fclose(fptr);
    printf("\n\nPress any key to continue.\n");
    getch();
    Menu();
}

// Function to Search for a particular Record by Name
void Search()
{
    FILE *fptr;
    struct Student std;
    char stname[20];
    system("cls");

    printf("SEARCH RECORD\n");

    printf("\tEnter name of Student :");
    fflush(stdin);
    gets(stname);
    fptr = fopen("Student's_Records.txt","rb+");
    if(fptr == NULL){

    printf("\n\n\t\tError opening file");
    exit(1);
    }
    while(fread(&std,sizeof(std),1,fptr ) == 1){
    if(strcmp(stname,std.Student_Name) == 0){
    printf("\n\n\tStudent_Name	: %s\n",std.Student_Name);
    printf("\tRollNumber		: %d\n",std.RollNumber);
    printf("\tAge			    : %d\n",std.Age);
    printf("\tMarks_Obtained	: %d\n",std.Marks_Obtained);
    printf("\tGender			: %s\n",std.Gender);
    }
    }
    fclose(fptr);
    printf("\n\n\t\tPress any key to continue.\n");
    getch();
    Menu();
}


//Function to Exit
void Exit(void)
{
	system("cls");
	printf("\nProject on STUDENT RECORD MANAGEMENT\n");
	printf("\nBY:\nVanshika Rajpurohit"); 
	getch();
}