#include<stdio.h>
main()
{
	int i,j,a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	//1st part
	printf("\t\t\t\t4*4 array 1st part\n\n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("%d",a[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	
	//2nd part
	// i have changed line through if any other possiblity
	printf("\t\t\t\t4*4 array 2nd part\n\n");
	for(i=0;i<=3;i++)
	
	{
		for(j=0;j<=3;j++)
		{
			printf("%d",a[i][j]);
			printf("\t");
		}
		if (i==1)
		printf("\n");
	}
}
