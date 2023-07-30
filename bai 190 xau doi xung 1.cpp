#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
		{
			char s[100];
			gets(s);
			size_t len=strlen(s);
			int dem=0;
			for(int i=0;i<(len/2);i++)
				{
					if(s[i]==s[len-i-1]) dem++;
				}
//			printf("%d ",dem);
			if(len%2==0) 
				{
					if(dem+1==len/2) printf("YES\n");
					else printf("NO\n");
				}
			else 
				{
					if(dem==len/2) printf ("YES\n");
					else if (dem+1==len/2) printf("YES\n");
					else printf("NO\n");
				}
		}
}