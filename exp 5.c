#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("enter the string");
	scanf("%s",str);
	int i,l=strlen(str);
	if(str[0]=='0' && str[l-1]=='0')
	{
		for(i=1;i<l-1;i++)
		{
			if(str[i]!='0' && str[i]!='1')
		{
			printf("invalid");
			return 0;
		}
		}	
		printf("valid");
	}
	else
	{
		printf("not accepted");
	}
}