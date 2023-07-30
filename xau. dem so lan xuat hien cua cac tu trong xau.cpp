#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int b[100005]={0};
void vietthuong(char s[])
	{
		size_t len=strlen(s);
		for(int i=0;i<strlen(s);i++)
			{
				if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+32;
			}
	}
void xoaXD( char b[])
	{
		size_t len = strlen(b);
		if(b[len-1]=='\n') b[len-1]='\0';
	}
int main()
	{
		char s[1000005];
		fgets(s,sizeof(s),stdin);
		xoaXD(s);
		vietthuong(s);
		char a[200][200];
		int dem=0;
		char *token=strtok(s," ");
		while(token!=NULL)
			{
				dem++;
				strcpy(a[dem], token);
				token=strtok(NULL, " ");
			}
		for(int i=1;i<=dem;i++)
			{
				if (b[i]==0)
				 	{
				 		int count=1;
						for(int j=i+1;j<=dem;j++)
							if (strcmp(a[i],a[j])==0) 
								{
									count++;
									b[j]=1;
								}
						printf("%s %d\n", a[i], count );
					}
			}
	}
