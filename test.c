#include <stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
int a[100];
int i=1;
int x=0;
for(i=1;i<argc;i++,x++)
{
     a[x]=atof(argv[i]);
}
    int y ;
    int min=a[0];
     for(y=0;y<argc;y++)
     {
if(a[y]<min){
min=a[y];
 }
     }
printf("The min is%d\n",min);
}