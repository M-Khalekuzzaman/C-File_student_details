//Student detailes;
#include<stdio.h>
int main()
{
    FILE *file;
    char name[50];
    int age,roll,num;
    file = fopen("studentDetails.txt","a");

    if(file == NULL)
        printf("File does not exist");
    else
    {
        printf("File is opened\n");
        printf("Enter number of students : ");
        scanf("%d",&num);
        for(int i = 1 ; i<=num ; i++)
        {
            printf("Enter student name :");
            fflush(stdin);
            gets(name);

            printf("Enter your age :");
            scanf("%d",&age);

            printf("Enter your roll-number :");
            scanf("%d",&roll);
            fprintf(file,"%s\t\t%d\t%d\n",name,age,roll);
        }
        printf("File is successfully done");
        fclose(file);
    }

  getch();
}
