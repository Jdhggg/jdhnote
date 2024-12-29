#include<stdio.h>
int main()
{
	char str[80];
	while(scanf("%s",str)==1)
	{
		int i;
		for(i=0;i<strlen(str);i++)
		{
			if(str[i]>='a' && str[i]<='z')
				str[i]=str[i]-32;
		}
		puts(str);
	}
	return 0;
}
