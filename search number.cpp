// (flag set) is used. 
#include<stdio.h>
main()
{
	int i,j,b,a[3][3]={1,2,3,4,5,6,7,8,9},f=0;
	printf("enter number");
	scanf("%d",&b);
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		
			if(b==a[i][j])
			{
			
			printf("number is there at %d,%d\n",i,j);
			f=1;
			}
			
	}
	if (f==0)
	printf("not present");
}
