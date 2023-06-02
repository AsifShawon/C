/*
we will have an array of n integers [user will set n] and we have to search a number
from this array and print whether it is found or not.
*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the numbers: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int search;
    printf("What number you wanna search: ");
    scanf("%d",&search);

    for(int i=0; i<n; i++){
        if(arr[i]==search){
            printf("We found the number :)");
            return 0;
        }
    }
    printf("We couldn't found the number :)");
    return 0;
}

/*
int flag = 0; // flag = 0  means we couldn't found the search number

    for(int i=0; i<n; i++){
        if(arr[i] == search){
            flag = 1; // flag = 1  means we found the search number
            break;
        }
    }

    if(flag==1){
        printf("We found the number :)");
    }
    else 
        printf("We couldn't found the number :)");
*/