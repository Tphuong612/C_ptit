#include <stdio.h>
#include <string.h>
int check(char a[])
	{
		for(int i=0;i<strlen(a);i++)
			{
				if(a[i]!='0'&&a[i]!='1'&&a[i]!='8'&&a[i]!='9') return 0;
			}
		return 1;
	}
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	for(int i=1;i<=t;i++)
		{
			char a[105];
			gets(a);
			if(check(a)==0) printf("INVALID\n");
			else 
				{
					for(int i=0;i<strlen(a);i++)
						{
							if(a[i]=='1') a[i]='1';
							else if(a[i]=='0') a[i]='0';
							else if(a[i]=='8') a[i]='0';
							else if(a[i]=='9') a[i]='0';
						}
					int ok=0;
					for(int i=0;i<strlen(a);i++)
						{
							if(a[i]!='0'&&ok==0) ok=1;//loai bo nhung so 0 o dau
							if(ok==1) printf("%c", a[i]);
						}
					printf("\n");
					if(ok==0) printf("INVALID\n");
				}
			
		}
}