#include<stdio.h>
main()
{
	int s,i,j,k,c[i][j],a[3][3]={1,2,3,4,5,6,7,8,9},b[3][3]={8,5,3,5,5,2,7,8,1};
	for (i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j]=0;
			for(k=0;k<=2;k++)
			c[i][j]=c[i][j]+a[i][k]*b[k][j];
			//printf("\t");
		printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
}
