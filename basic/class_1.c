#include<stdio.h>

int main()
{
    // declare two integer variables
    int a,b; 
    
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    
    printf("User's values\n"); 
    // \n -> creates new line
    
    printf("a = %d, b = %d\n",a,b);
    
    int mul;
    mul = a*b; //multiplication of a and b
    
    printf("%d * %d = %d\n",a,b,mul);
    printf("%d + %d = %d\n",a,b,(a+b));
    
    return 0;
}