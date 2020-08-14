\\ conditional 

#include <stdio.h>
int main()
{
    int x, a, b;
    printf("enter the value of a and b");
    scanf("\n%d\n%d", &a, &b);
    x = a > b ? a : b;
    printf("%d",x);

    return 0;
}