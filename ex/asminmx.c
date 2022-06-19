#include <stdio.h>
int main ()
{
    int i,j,a[5],temp;
    printf("Enter Array Elements: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);//2 3 4 5 1 
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i] > a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Array Elemnts: ");
    for(i=0;i<5;i++)
    {
        printf(" %d\n",a[i]);
    }
    printf("MAX = %d\n",a[4]);
    printf("MIN = %d",a[0]);
    return 0;
}
