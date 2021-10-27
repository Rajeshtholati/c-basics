#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short int:\nsighned: %hd to %hd\n", SHRT_MIN,SHRT_MAX);
	printf("unsighned: %d to %hu\n",0,USHRT_MAX);
	printf("int:\nsighned: %d to %d\n",INT_MIN,INT_MAX);
	printf("unsighned:%d to %u\n",0,UINT_MAX);
	printf("long int:\nsighned:%ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("unsighned:%d to %lu\n",0,ULONG_MAX);
    printf("long long int:\nsighned:%lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
    printf("unsigned:%d to %llu\n",0,LONG_LONG_MAX);
}
