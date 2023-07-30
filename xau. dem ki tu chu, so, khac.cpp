#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
	{
		int dem1=0, dem2=0, dem3=0;
		char s[100005];
		gets(s);
		for(int i=0;i<strlen(s);i++)
			{
				if(s[i]>='0'&&s[i]<='9') dem1++;//dem chu so
				else if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z') dem2++;//dem chu
				else dem3++;
			}
		printf("%d %d %d ", dem2, dem1, dem3);

	}
