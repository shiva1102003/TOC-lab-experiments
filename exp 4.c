#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char s[50];
	printf("enter the string: \n");
	scanf("%s",s);
	int l=strlen(s);
	if(s[0]=='0' && s[l-1]=='0')   
	{
		for(i=1;i<l-1;i++)
		{
			if(s[i]!='0' && s[i]!='1')
			{
				printf("invalid");
				return 0;
			}
		}
		printf("valid");
	}
	else if(s[0]=='1' && s[l-1]=='1')
	{
		for(i=1;i<l-1;i++)
		{
			if(s[i]!='0' && s[i]!='1')
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
return 0;
}