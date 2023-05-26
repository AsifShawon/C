#include <stdio.h>
#include <string.h>

// structure for storing student marks
struct stuMarks
{
    char sub[30], semester[30];
    float quiz, assignment, mid, final, grade;
};

// structure for storing student data with marks
struct StudentData
{
    char fname[30], lname[30], dept[20];
    int id;
    float cgpa;
    struct stuMarks marks[30];
};

struct StudentData student[100];
int sno = 0;

void preInsertedStuData()
{
    student[0].id = 111;
    strcpy(student[0].fname, "Shah");
    strcpy(student[0].lname, "Abir");
    strcpy(student[0].dept, "ECE");
    student[0].cgpa = 3.55;
    student[1].id = 112;
    strcpy(student[1].fname, "Sakib");
    strcpy(student[1].lname, "Rahman");
    strcpy(student[1].dept, "ETE");
    student[1].cgpa = 3.80;
    student[2].id = 123;
    strcpy(student[2].fname, "Bijoy");
    strcpy(student[2].lname, "Abir");
    strcpy(student[2].dept, "BBA");
    student[2].cgpa = 3.25;
    sno = 3;
}

// inserting student data [without marks]
void insertStuData()
{
    printf("Enter student ID: ");
    scanf("%d", &student[sno].id);
    printf("First name: ");
    scanf("%s", &student[sno].fname);
    printf("Last name: ");
    scanf("%s", &student[sno].lname);
    printf("Department: ");
    scanf("%s", &student[sno].dept);
    printf("CGPA: ");
    scanf("%f", &student[sno].cgpa);
    sno++;
}

void showStuData()
{
    printf("Student Information\n\n");
    printf("Id \t Name \t\t\t Department \t\t CGPA\n");

    for (int i = 0; i < sno; i++)
    {
        printf("%d \t %s %s \t\t %s \t\t\t %.2f\n", student[i].id, student[i].fname, student[i].lname, student[i].dept, student[i].cgpa);
    }
}

void updateStuData()
{
    showStuData();
    printf("Select an ID to update: ");
    int id_no, t_sno;
    scanf("%d", &id_no);
    for (int i = 0; i < sno; i++)
    {
        if (student[i].id == id_no)
        {
            t_sno = i;
        }
    }

    int c;
    printf("Update Info [enter 1 to 'yes' or 0 to 'no']\n");
    printf("Do you want to update First Name? [ %s ]:", student[t_sno].fname);
    scanf("%d", &c);
    if (c == 1)
    {
        printf("Enter updated first name: ");
        scanf("%s", &student[t_sno].fname);
    }
    else
    {
        printf("Do you want to update last Name? [%s]", student[t_sno].lname);
        scanf("%d", &c);
        if (c == 1)
        {
            printf("Enter updated last name: ");
            scanf("%s", &student[t_sno].lname);
        }
        else
        {
            printf("Do you want to update Department? [%s]", student[t_sno].dept);
            scanf("%d", &c);
            if (c == 1)
            {
                printf("Enter updated department: ");
                scanf("%s", &student[t_sno].dept);
            }
            else
            {
                printf("Do you want to update CGPA? [%.2f]", student[t_sno].cgpa);
                scanf("%d", &c);
                if (c == 1)
                {
                    printf("Enter updated CGPA: ");
                    scanf("%f", &student[t_sno].cgpa);
                }
            }
        }
    }
}

void deleteStuData()
{
    int c;
    printf("Enter 0 to show data or Student ID to delete the data: ");
    scanf("%d",&c);
    if(c==0){
        showStuData();
        printf("Which ID you want to delete [enter 0 to skip delete]: ");
        scanf("%d",&c);
        if(c==0) return;
    }
    struct StudentData temp;
    for(int i=0; i<sno; i++){
        if(student[i].id == c){
            for(int j=i; j<sno; j++)
                student[i] = student[i+1];
        }
    }
    sno--;
}

void Admin()
{
    preInsertedStuData();
    while (1)
    {
        int choice;
        printf("Select any of three\n");
        printf("1. Insert a student information\n");
        printf("2. Update a student information\n");
        printf("3. Delete a student information\n");
        printf("4. Show Student information\n");
        printf("Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertStuData();
            break;
        case 2:
            updateStuData();
            break;
        case 3:
            deleteStuData();
            break;
        case 4:
            showStuData();
            break;

        default:
            break;
        }
    }
}

int main()
{
    Admin();
}
