#include<stdio.h>
swap(int *nu1,int *nu2)
{
	int *t;
      t=*nu1;
	*nu1=*nu2;
	*nu2=t;
	printf("Swaping of A -> %d\n",*nu1);
	printf("Swaping of B -> %d\n",*nu2);
}
void main()
{
	int a,b;
	
	printf("Enter The value for A ->");
	scanf("%d",&a);
	printf("Enter The value for B ->");
	scanf("%d",&b);
	swap(&a,&b);
}
