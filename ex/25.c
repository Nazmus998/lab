#include <stdio.h>
int main()
{
    int n,x,i,fact=1,count=0;
    //printf("Select an option:\n");
    printf("1.Factorial\n2.Prime or not\n3.Odd\n4.Even\n5.Exit\n");
    //scanf("%d",&n);
    printf("Select an option: ");
    scanf("%d",&n);
    if(n==1)
    {
       printf("Enter a value : ");
       scanf("%d",&x);
       for(i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    printf("Factorial = %d\n",fact);
    }
    else if(n==2)
    {
        printf("Enter a value : ");
        scanf("%d",&x);
        for(int i=2;i<=x/2;i++){
        if(x%i == 0){
            count = 1;
            break;
        }
    }
    if(count == 1){
        printf("%d is not a Prime number\n",x);
    }
    else{
        printf("%d is a Prime number\n",x);
    }
    }
    else if(n==3)
    {
        printf ("Enter a  value : ");
        scanf("%d",&x);
        scanf("%d",&x);
    if(x%2 != 0){
        printf("%d is a ODD number\n",x);
    } 
    }
    else if(n==4)
    {
        printf ("Enter a  value : ");
        scanf("%d",&x);
        scanf("%d",&x);
    if(x%2 == 0){
        printf("%d is a Even number\n",x);
    } 
    }
    else if(n==5)
    {
        printf("YOU ARE OUT OF THIS PROGRAM");
    }

}