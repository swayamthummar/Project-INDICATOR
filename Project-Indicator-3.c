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
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
	}
	printf("Elements of Array are :-:");
	for(i=0;i<n;i++)
	{
    printf("\n%d",*(p+i));
	}
	printf("\nReversed Array :-:");
    int *r;
    r=&a[n-1];
    for(i=0;i<n;i++)
	{
    printf("\n%d",*r--);
	}
}
