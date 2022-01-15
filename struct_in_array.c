#include<stdio.h>
struct student
{
    char name[20];
    int rollno;
    int submarks[4];
};
int main(){
    int i,j;
    struct student stu[3];
    for(i=0;i<3;i++){
        printf("Enter data for student %d\n",i+1);
        printf("Enter name : ");
        scanf("%s",stu[i].name);
        printf("Enter roll number : ");
        scanf("%d",&stu[i].rollno);
        for (j = 0; j < 4; j++)
        {
            printf("Enter marks for subject %d : ",j+1);
            scanf("%d",&stu[i].submarks[j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("Data of student %d\n",i+1);
        printf("Name: %s , Roll no : %d , Marks : ",stu[i].name,stu[i].rollno);
        for ( j = 0; j < 4; j++)
        {
            printf("%d   ",stu[i].submarks[j]);
        }
        printf("\n");
    }
}
