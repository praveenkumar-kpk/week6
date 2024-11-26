#include<stdio.h>
int main()
{
	char c[100];
	int i,l=0;
	printf("enter string");
	scanf("%s",c);
	for(i=0;c[i]!='\0';i++)
	{
		l++;
	}
	printf("length = %d",l);
	return 0;
}
