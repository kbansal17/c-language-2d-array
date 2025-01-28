#include<stdio.h>
main()
{
	
	int a[3][3],i,j,o=0,e=0,p=0,n=0;
	for(i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
    	for (i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				if (a[i][j]>=0)
				{
					if(a[i][j]%2==0)
					{
				printf("%d=positive and even\n",a[i][j]);
				p++;
				e++;
					}
					else
					{
					printf("%d=positive and odd\n",a[i][j]);
				p++;
				o++;	
					}
				}
				else
				{
					if(a[i][j]%2==0)
					{
				printf("%d=negative and even\n",a[i][j]);
				n++;
				e++;
					}
					else
					{
					printf("%d=negative and odd\n",a[i][j]);
				n++;
				o++;	
					}
				}
				
			}
				
		}
//below code is for odd and even seperately 	
/*printf("total positive = %d\n",p);	
printf("total negative = %d\n",n);	*/
// odd/even 
/*for (i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				if (a[i][j]%2==0)
				{
				printf("%d=even\n",a[i][j]);
				e++;
				}
				else
				{
				printf("%d=odd\n",a[i][j]);
				o++;
				} 
			}
				
		}*/
printf("total even = %d\n",e);	
printf("total odd = %d\n",o);	
printf("total positive = %d\n",p);	
printf("total negative = %d\n",n);			
}

