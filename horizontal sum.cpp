/* sum=0 must be taken inside first for loop because outside total or whole 
matrix sum comes. because new value is assigned in sum term will come*/
#include<stdio.h>
main()
{

int i,j,k,a[3][3]={1,2,3,4,5,6,7,8,9}; 
	for(i=0;i<=2;i++)
	{
		int sum=0;
		for(j=0;j<=2;j++)
		{
	 		printf("\t%d",a[i][j]);
	 		sum=sum+a[i][j];
		}
	 		printf("\t%d",sum);
	printf("\n");
	}
	for(i=0;i<=2;i++)
	{
		int p=0;
		for(j=0;j<=2;j++)
		{
	 		
	 		p=p+a[j][i];
		}
	 		
	printf("\t%d",p);
	
}
}

