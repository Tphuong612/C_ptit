#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
char a[100][100], s1[1000], s2[1000];
int so_sanh_khong_phan_biet(char a[], char s2[])//ham strcmp khong phan biet
	{
		size_t n1=strlen(a);
		size_t n2=strlen(s2);
		if(n1!=n2) return 0;
		for(int i=0;i<n1;i++)
			{
				if(tolower(a[i])!=tolower(s2[i])) return 0;
			}
		return 1;
	}
int main()
	{
		int t;
		scanf("%d",&t);
		getchar();
		for(int z=1;z<=t;z++)
			{
				gets(s1);
				gets(s2);
				int n=0;//coi nhu 1 la 1 bien dem
				char *token=strtok(s1," ");
				while (token!=NULL)
					{
						strcpy(a[n],token);
						n++;
						token=strtok(NULL," ");
					}
				printf("Test %d: ",z);
				for(int i=0;i<n;i++)
					{
						if(so_sanh_khong_phan_biet(a[i],s2)==0) printf("%s ",a[i]);
					}
				
				printf("\n");
			}
		
	}