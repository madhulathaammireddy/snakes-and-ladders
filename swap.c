//swapping of two numbers
//swapping of two numbers without using temporary variable
#include<stdio.h>
int main()
{
double a,b;
printf("enter a:");
scanf("%lf",&a);
printf("enter b:");
scanf("%lf"&b);
//swapping
//a=(initial_a-intial_b)
a=a-b;
//b=(initial_a-initial_b)+initial_b=initial_a
b=a+b;
a=initial_a-(initial_a-initial_b)=initial_b
a=b-a;
printf("after swapping a=%lf\n",a);
printf("after swapping b=2lf\n",b);
return 0;
}
