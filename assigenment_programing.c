#include<stdio.h>
int main(void)
{
int num, a=0, b=1, c, total;
printf ("enter limit ");
scanf ("%d",&num);
for(c=1;c<=num; c++){
printf ("%d \n", a);
    total=a+b;
    a=b;
    b=total;
}
}

