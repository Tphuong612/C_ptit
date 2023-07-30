#include <stdio.h>
#include <string.h>
int main()
	{
		char c[10000];
		fgets(c,sizeof(c),stdin);
		char b[100];
		scanf("%s",b);
		char *token=strtok(c," ");
		char a[200][500]; int dem=0;//neu de mang 1 chieu thi bao loi
		while(token!=NULL)
			{
				if(strcmp(token,b)!=0) 
					{
						dem++;
						strcpy(a[dem],token);	
					}
				token=strtok(NULL," ");
			}
		for(int i=1;i<=dem;i++)
			{
				printf("%s",a[i]);
				if(i!=dem) printf(" ");
			}
	}