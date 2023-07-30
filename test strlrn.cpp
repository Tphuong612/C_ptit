#include <stdio.h>
#include <string.h>
void xoaXuongDong(char c[])
	{
		size_t len=strlen(c);
		if (c[len-1]=='\n') c[len-1]='\0';
	}
int soTu(char c[])
	{
		int dem=0;
		for(int i=0;i<strlen(c)-1;i++)
			{
				if (c[i]==' '&&c[i+1]!=' ') dem++;
			}
		if (c[0]!=' ') dem++;
		return dem;
	}
int main()
	{
		int t;
		scanf("%d",&t);
		getchar();
		for(int i=1;i<=t;i++)
			{
				char c[255];
				fgets(c,sizeof(c),stdin);
				printf("%d\n",strlen(c));
				xoaXuongDong(c);
				printf("%d\n",strlen(c));
				printf("%d\n",soTu(c));
			}
	}