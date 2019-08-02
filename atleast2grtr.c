#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,sec_largest=-1000,largest=-100;

	printf("\nEnter size of array: ");
	scanf("%d",&n);

	int* p=(int *)malloc(n*4);
	
	printf("\nEnter the array: \n");

	for(int i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	
	for(int i=0;i<n;i++)
	{
		if(p[i]>largest)
		{
			sec_largest=largest;
			largest=p[i];
		}
		else if(p[i]<largest)
		{
			if(p[i]>sec_largest)
				sec_largest=p[i];
		}
	}

	printf("\nOutput array: \n");

	for(int i=0;i<n;i++)
        {
		if(p[i] != sec_largest && p[i] != largest)
                	printf("%d\t",*(p+i));
        }
}
