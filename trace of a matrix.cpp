#include<stdio.h>
main()
{
	int s=0,a[3][3]={1,2,3,4,5,6,7,8,9},i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if (i==j)
			s=s+a[i][j];
		}
	}
	printf("trace =%d",s);
}
