#include<stdio.h>

int main()
{
    // তুমি user থেকে n সং্যক নাম্বার নিবা এবং সেই সংখ্যা গুলোর মধ্য থেকে maximum and minimum বের করবা
    // এবং তাদের যোগফল টা প্রিন্ট করবা

    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the numbers: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }

        if(arr[i]<min){
            min = arr[i];
        }
    }

    printf("Max = %d \nMin = %d\n",max,min);

    int total = max + min;
    printf("Total of max and min = %d", total);

    return 0;
}
