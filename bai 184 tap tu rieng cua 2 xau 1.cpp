#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
char a[100][100], b[100][100], s1[1000], s2[1000];
void xoaXD(char c[])
	{
		size_t len=strlen(c);
		for(int i=0;i<len;i++)
			if (c[len-1]=='\n') c[len-1]='\0';
	}
void sapxep(char a[][100], int n)
	{
		for(int i=0;i<n;i++)
			{
				int min=i;
				for(int j=i+1;j<n;j++)
					if(strcmp(a[j],a[min])<0) min=j;
				char tmp[1000];
				strcpy(tmp,a[min]);
				strcpy(a[min],a[i]);
				strcpy(a[i],tmp);
			}
	}
int main()
	{
		gets(s1);
		gets(s2);
		int n1=0;
		char *token=strtok(s1," ");
		while (token!=NULL)
			{
				strcpy(a[n1],token);
				n1++;
				token=strtok(NULL," ");
			}
		sapxep(a, n1);
		int n2=0;
		token=strtok(s2," ");
		while (token!=NULL)
			{
				strcpy(b[n2],token);
				n2++;
				token=strtok(NULL," ");
			}
		sapxep(b, n2);
		for(int i=0;i<n1;i++)
			{
				while(strcmp(a[i],a[i+1])==0) i++;// dam bao rang 2 tu dung canh nhau khong giong nhau
				int ok=1;
				for(int j=0;j<n2;j++)
					if(strcmp(a[i],b[j])==0) 
						{
							ok=0;
							break;
						}
				if(ok==1) printf("%s ", a[i]);
			}
		printf("\n");
		
		
	}