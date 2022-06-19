#include <stdio.h>
in
t main ()
{
    int n,i,fact=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}