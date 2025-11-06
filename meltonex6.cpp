#include<stdio.h>
#include<conio.h>


struct student
{
    int roll_no;
    char name[20];
    char course[20];
    char major[20];
    char minor[20];
 };

struct student s[10];

int main()
{
    printf("Enter information of 10 students");
    for(int i = 0;i < 10; i++)
    {
        printf("enter roll no");
        scanf("%d",&s[i].roll_no);
        fflush(stdin);
        printf("enter name.");
        gets(s[i].name);
        printf("enter course.");
        gets(s[i].course);
        printf("enter major subject");
        gets(s[i].major);
        printf("enter minor subject");
        gets(s[i].minor);
    }

    void displaynames(struct student[]);
    displaynames(s);
    int rlno;
    void dispallinfo(int);
    printf("enter roll no.");
    scanf("%d",&rlno);
    dispallinfo(rlno);
}
void dispallinfo(int rno)
{
        char flag = 'n';
        for(int i = 0; i < 10; i++)
        {
            if (s[i].roll_no == rno)
            {
                flag = 'y';
                printf("Roll No. : %d\n",s[i].roll_no);
                printf("Name     : %s\n",s[i].name);
                printf("Course   : %s\n",s[i].course);
                printf("Major Sub: %s\n",s[i].major);
                printf("Minor Sub: %s\n",s[i].minor);
            }
        }
        if (flag == 'n')
            printf("Roll No. not found.\n");

}

void displaynames(struct student s[])
{
    for(int i = 0;i < 10; i++)
        {
            printf("%s\n",s[i].name);
        }
}
