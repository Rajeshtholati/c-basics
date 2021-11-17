#include<stdio.h>
main()
{
	int a,b;
	printf("enter values of a and b");
	scanf("%d %d",&a,&b);
	a+=b;
	b+=a;
	b%=a;
	printf("%d%d",a,b);
}
