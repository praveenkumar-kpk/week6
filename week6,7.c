#include<stdio.h>
int main()
{
	int i;
	char s1[100],s2[100];
	printf("enter s1,s2");
	scanf("%s",s1);
	fflush(stdin);
	scanf("%s",s2);
	for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		{
		 printf("not equal");
		 goto b;
	}
	}
	printf("equal");
	b:
	return 0;
	
}
