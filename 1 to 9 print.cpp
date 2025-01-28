#include<stdio.h>
main()
{
	int i,j,k,a[3][3]={1,2,3,4,5,6,7,8,9};
	// 1 st part
	printf("\t\t\t\t\t1st part\n\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
	 		printf("%d",a[i][j]);
		}
	printf("\n");
	}
	
	
	// 2nd part
	printf("\t\t\t\t\t2nd part\n\n");
	printf("\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
	 		printf("%d",a[j][i]);
		}
	printf("\n");
	}
	
	
	//3rd part
	//can we can run 3rd part without changing i and j position in for loop
	printf("\t\t\t\t\t3rd part\n\n");
	printf("\n");
	for(j=0;j<=2;j++)
	{
		for(i=0;i<=2;i++)
		{
	 		//for(k=0;k<1;k++)
			 printf("%d",a[0][j]);
		}
	printf("\n");
	}
	
	
	//4th part
	printf("\t\t\t\t\t4th part\n\n");
	printf("\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
	 		printf("%d",a[0][j]);
		}
	printf("\n");
	}
	
	
	//5th 
	printf("\t\t\t\t\t5th part\n\n");
	printf("\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
	 		printf("%d",a[i][j]);
		}
	
	}
	printf("\n");
	
	
	// 6th part
	printf("\t\t\t\t\t6th part\n\n");
	printf("\n\n");
	for(i=0;i<=2;i++)
	{
		for(k=0;k<=1;k++)
		{
			for(j=0;j<=2;j++)
			{
				printf("%d",a[i][j]);
			}
				printf("\n");
		}
printf("\n");
	}
	
	
	
	//7th part
	printf("\t\t\t\t\t7th part\n\n");
	printf("\n");
	for(i=0;i<=2;i++)
	{
		for(k=0;k<=2;k++)
		{
			for(j=0;j<=2;j++)
			{
				printf("%d",a[i][j]);
			}
				//printf("\n");
		}
printf("\n");
	}
	
	
	
	//8th part
	printf("\t\t\t\t\t8th part\n\n");
	printf("\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			for(k=0;k<=2;k++)
			{
				printf("%d",a[i][j]);
			}
				
		}
printf("\n");
}



//9th part
printf("\t\t\t\t\t9th part\n\n");
	printf("\n");
		for(k=0;k<=2;k++)
	{
			for(i=0;i<=2;i++)
		{
				for(j=0;j<=2;j++)
			{
				printf("%d",a[i][j]);
			}
				printf("\n");
		}
printf("\n");
	}
}






