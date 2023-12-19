#include <stdio.h>
#include <conio.h>

long int p_hun(long int a);
int main(void)
{
    long int s;
    s=p_hun(2)+p_hun(3)+p_hun(10);
    printf("Result = %u",s);
    return 0;
}
long int p_hun(long int a)
{
    int i;
    long int r=1;
    for(i=1; i<=100; i++)
    {
        r=r*a;
    }

    return r;
}

