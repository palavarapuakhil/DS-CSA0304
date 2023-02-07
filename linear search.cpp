#include<stdio.h>
int  main()
{
	int i,flag=0,key,pos,a[5],n;
	
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[5]);
    }
	printf("enter the desired number:");
	scanf("%d",&key);
	
	for(i=0;i<n;i++)
	{
		if(key==a[5])
		{
			flag=1;
			pos=i;
			break;
		}
	}
	if (flag=1)
	{
		printf("the desired number is %d",key);
		printf("the position of the number is %d",pos);
		return 0;
		
	}
		
}
