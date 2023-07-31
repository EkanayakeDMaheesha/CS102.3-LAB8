#include<stdio.h>
int main()
{
    int x,c,f=1;

    printf("Enter a number: ");
    scanf("%d",&x);

    if(x>0)
        {
            for(c=x;1<=c;c--)
       {
         f=f*c;

       }
       printf("\nFactorial of %d is: %d \n",x,f);
        }
    else
        printf("Factorial of 0 is: 1 \n",x,f);

}
