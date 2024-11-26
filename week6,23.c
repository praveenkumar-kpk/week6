#include <stdio.h>
#include <string.h>
int main()
{
	char a[1000];
	int i,l,j,k,c=0,n;
	printf("enter the string:");
	fgets(a,1000,stdin);
	l=strlen(a);
	l--;

	for(i=0;i<l-c-1;i++)
	{
		for(j=i+1;j<l-c;j++)
		{
			if(a[i]==a[j])
			{	
				for(k=j;k<l-c-1;k++)
				{
					a[k]=a[k+1];
					a[l-1-c]='\0';
					c++;
				}
			}
		}
	}


		puts(a);

}
