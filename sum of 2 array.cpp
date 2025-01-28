#include<stdio.h>
main()
{
	int i,j,a[3][3]={1,2,3,4,5,6,7,8,9},b[3][3]={8,5,3,5,5,2,7,8,1};
	for (i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	printf("\n\nsum of both array\n");
	for (i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		
		{
			printf("%d+%d=%d\t",a[i][j],b[i][j],a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}


