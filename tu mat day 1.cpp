#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


int main(){
	char a[105];
	gets(a);
	
	char c[100][20];		
	int cnt=0;
	
	char *tok=strtok(a," ");
	while(tok!=NULL)
		{
			++cnt;
			strcpy(c[cnt],tok);
			tok=strtok(NULL, " ");
		}
	int ts[cnt+1];
	for(int i=0; i<=cnt; i++)
		ts[i]=0;				// khoi tao mang tan so cho mang ki tu c
		
	for(int i=1; i<=cnt; i++)
		{
			 if(ts[i]==0)
			 	{
			 		for(int j=i+1; j<=cnt; j++)
			 			{
			 				if(strcmp(c[i],c[j])==0)// Neu tan so cua phan tu thu c[i]==0 thi  thuc hien phep toan
			 					{
			 						ts[j]=1;
								}
						}
				 }
		}
		

	for(int i=1; i<=cnt; i++)
		{
			if(ts[i]==0) printf("%s ",c[i]);
		}
	
}