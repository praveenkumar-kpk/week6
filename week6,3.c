#include<stdio.h>
int main()
{
	int i,l=0,j=0;
	char s1[100],s2[100];
	printf("enter s1 and s2");
	scanf("%s",s1);
	scanf("%s",s2);
	for(i=0;s1[i]!='\0';i++)
	{
		l++;
	}
	for(i=l;s2[j]!='\0';i++)
	{
		s1[i]=s2[j];
		j++;
	}
	s1[i]='\0';
	printf("%s",s1);
	return 0;
	
}
