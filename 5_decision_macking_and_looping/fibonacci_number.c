#include<stdio.h>
#include<math.h>

int main()
{
    int i,n,fib,n1=0,n2=1;
    printf("enter the n value\n");
    scanf("%d",&n);
    printf("fibonacci values for %d is: %4d%4d",n,n1,n2);
    for (i=1;i<=n-2;i++)
    {
        fib=n1+n2;
        n1=n2;
        n2=fib;
        printf("%4d",fib);
    }
    printf("\nusing Do while statement :");
    fib=0;
    n1=0;
    n2=1;
    printf("%4d%4d",n1,n2);
    i=1;
    do
    {
        fib=n1+n2;
        n1=n2;
        n2=fib;
        printf("%4d",fib);
        i=i+1;
    } while (i<=n-2);
    
    return 0;
}