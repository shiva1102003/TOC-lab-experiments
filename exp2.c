#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("enter the string: \n");
	scanf("%s",str);
	int length=strlen(str);
	if(str[0]=='0' && str[length-1]=='1')
	{
		printf("accepted");
	}
	else
	{
		printf("not accepted");
	}
	return 0;
}