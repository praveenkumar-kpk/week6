#include<stdio.h>
int main()
{
	int n,i,j;
	char t;
	printf("enter the string");
	char ch[100];
    fgets(ch, sizeof(ch), stdin);
    
     for (i = 0; ch[i] != '\0'; i++);
     n=i;
     
		for(j=0;j<n/2;j++)
		{
			t=ch[j];
			ch[j]=ch[n-1-j];
			ch[n-1-j]=t;	
		}
	
   puts(ch);
	
	return 0;
}

