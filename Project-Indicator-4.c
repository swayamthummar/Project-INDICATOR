#include<stdio.h>
main()
{
	char s[100],*length;
	int count=0;
	printf("Enter the String ->");
	gets(s);	
	length=s;
	while(*length!=NULL)
	{
		length++;
		count++;
	}
	printf("The Length of String ->%d",count);
}
