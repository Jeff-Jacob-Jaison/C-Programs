#include <stdio.h>
int main()
{
    int n,d;
    printf("Enter a number");
    scanf("%d",&n);
    d=2;
    if (n<=1)
    {
        printf("%d is not a prime number",n);
        if (n>d)
        {
            printf("%d is a prime number",n);
        }
        else if(n%d==0)
        {
            printf("%d is not a prime number",n);
            d++;
        }
    }
    return 0;
}