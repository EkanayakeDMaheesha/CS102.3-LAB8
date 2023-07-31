#include <stdio.h>
int main()
{
    int marks[10],total=0,counter;
    float average;

    for(counter=1;counter<=10;counter++)
    {
        printf("enter mark:");
        scanf("%d",&marks[counter]);
        total+=marks[counter];
    }


    printf("Total: %d\n",total);

    average=(float)total/10.0;
    printf("Average: %.2f\n",average);

    if(average<50.0)
        printf("Fail!\n");
    else
        printf("Pass!\n");
}
