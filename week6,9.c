#include<stdio.h>
int main()
{
	char c[100];
	int i;
	printf("enter string");
	scanf("%s",c);
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
		printf("%c ",c[i]);
	}
	return 0;
}
