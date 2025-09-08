#include <stdio.h>
int main()
{
	int sum,n;
	double mean;
	printf("Enter sum and n :");
	scanf("%d%d",&sum,&n);
	mean=(double)sum/n;
	printf("%lf",mean);
}
