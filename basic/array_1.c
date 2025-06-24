#include<stdio.h>

int main()
{
    char name[30];
    printf("Enter your name: ");
    scanf("%s", name); // gets(name)
    // int sub1, sub2, sub3, sub4, sub5;
    // printf("Enter the number of subject 1: ");
    // scanf("%d", &sub1);
    // printf("Enter the number of subject 2: ");
    // scanf("%d", &sub2);
    // printf("Enter the number of subject 3: ");
    // scanf("%d", &sub3);
    // printf("Enter the number of subject 4: ");
    // scanf("%d", &sub4);
    // printf("Enter the number of subject 5: ");
    // scanf("%d", &sub5);

    int sub[5];
    printf("Enter the number of subject 1: ");
    scanf("%d", &sub[0]);
    printf("Enter the number of subject 2: ");
    scanf("%d", &sub[1]);
    printf("Enter the number of subject 3: ");
    scanf("%d", &sub[2]);
    printf("Enter the number of subject 4: ");
    scanf("%d", &sub[3]);
    printf("Enter the number of subject 5: ");
    scanf("%d", &sub[4]);

    int sum; // float sum;
    // sum = sub1+sub2+sub3+sub4+sub5;
    sum = sub[0]+sub[1]+sub[2]+sub[3]+sub[4]+sub[5];
    float avg;
    avg = sum/5.0; // avg = float(sum)/5;

    if(avg < 40){
        printf("Name: %s\n",name);
        printf("FAIL\n");
    }
    else {
        printf("Name: %s\n",name);
        printf("PASS\n");
    }
}