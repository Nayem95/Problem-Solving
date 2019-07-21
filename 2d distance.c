#include<stdio.h>
#include<math.h>
int main()
{
    int a1,b1,a2,b2,c,d,D;
    double E;
    scanf("%d%d%d%d",&a1,&b1,&a2,&b2);
    c=(a2-a1);
    d=(b2-b1);
    D=pow(c,2)+pow(d,2);
    E=sqrt(D);
    printf("%lf\n",E);
    return 0;
}
