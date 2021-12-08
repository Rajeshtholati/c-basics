#include<stdio.h>
main()
{
	int eng,mat,phy,che,cs,t;
	double p;
	printf("enter marks in all subjects\n");
	scanf("%d%d%d%d%d",&eng,&mat,&phy,&che,&cs);
	t=eng+mat+phy+che+cs;
	p=t*1.0/5;
	if (eng>=35 && mat>=35 && phy>=35 && che>=35 && cs>=35)
	{
		printf("result:pass\n");
		printf("total maks out of 500 is %d\n",t);
		printf("percentage:%lf\n",p);
		printf("grade:");
		if(p>80)
		{
			printf("A");
		}
		    else if (p>=70)
		{
			printf("B");
		}
			else if (p>=60)
		{
			printf("C");
		}
			else if (p>=50)
		{
			printf("D");
		}	
		    else if (p>=40)
		{
			printf("P");
		}
		else
		{
		    printf("f");	
		}
	}
	else
	{
		printf("fail");
	}

}
