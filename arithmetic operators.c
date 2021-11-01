#include<stdio.h>
main()
{
	int a,b,ad,s,m,d,r,t;
	a=8;
	b=2;
	ad=a+b;
	s=a-b;
	m=a*b;
	d=a/b;
	r=a%b;
	t=ad+s+m+d+r;
	printf("sum of %d and %d is%d\n",a,b,ad);
	printf("difference of %d and %d is %d\n",a,b,s);
	printf("multiplication of %d and %d is %d\n",a,b,m);
	printf("division of %d and %d is %d\n",a,b,d);
	printf("reminder of %d and %d is %d\n",a,b,r);
	printf("sum of all arithmetic operators is%d",t);
	
}
