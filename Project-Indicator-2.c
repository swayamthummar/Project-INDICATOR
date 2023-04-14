#include<stdio.h>
main()
{
	int a[100],n;
	int i;
	int *p;
	p=&a; 
	printf("Enter the value ->");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]:-",i);
		scanf("%d",&a[i]);
	}
	printf("The Element of Array are :-:\n");
	
	for(i=0;i<n;i++)
	{	
    	printf("%d",*p+i);	
	}
}
