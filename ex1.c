#include<stdio.h>
int main()
{
    double x;
    double y;
    double z;
    {
        printf ("please input 2 numbers\n");
        scanf("%lf %lf",&x,&y);
    z = (x+y)*(x+y);
    }
    printf("%.2lf\n",z);
    return 0;
}