#include<stdio.h>
int main()
{
    int a,b,n,a1,b1;
    scanf("%d%d",&a,&b);
    n=a+b;
    a1=n-(a+1);
    b1=n-(b+1);
    printf("%d %d",a1,b1);
    return 0;

}
