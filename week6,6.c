#include<stdio.h>
int main()
{
	int i;
	char c;
	char s1[100];
	printf("enter s1");
	scanf("%s",s1);
	fflush(stdin);
	printf("enter character");
	scanf("%c",&c);
	
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]==c)
		break;	
	}

	printf("%d",i);
	return 0;
	
}
