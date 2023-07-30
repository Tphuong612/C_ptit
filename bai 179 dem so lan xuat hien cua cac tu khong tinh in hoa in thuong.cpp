#include <stdio.h>
#include <string.h>

int b[1000]={0};//mang danh dau
void my_strlwr(char c[])// viet thuong ca day
	{
		for(int i=0;i<strlen(c);i++)
			{
				if(c[i]>=65&&c[i]<=90) c[i]=c[i]+32;
			}
	}
int main()
	{
		char c[10000];
		gets(c);
		my_strlwr(c);
		char a[200][500]; int dem=0;// dem nay co tac dung dem cac tu
		char *token=strtok(c," ");// tach cac tu va dua vao mang
		while(token!=NULL)
			{
				dem++;
				strcpy(a[dem],token);// copy dia chi cua token vao mang
				token=strtok(NULL," ");	// dieu kien tach
			}
		for(int i=1;i<=dem;i++)
			{
				if(b[i]==0)// y la cac tu chua dc xep lan nao
					{
						int dem2=1;// dem so lan xuat hien cua cac tu do
						for(int j=i+1;j<=dem;j++)
							{
								if(strcmp(a[i],a[j])==0) 
									{
										dem2++;
										b[j]=1;
									}
							}
						printf("%s %d\n",a[i],dem2);	
					}
			}
	}