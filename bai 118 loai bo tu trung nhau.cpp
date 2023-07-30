#include <stdio.h>
#include <string.h>
#include <ctype.h>
int b[1000]={0};//mang danh dau
int main()
	{
		char c[10000];
		gets(c);
		char *token=strtok(c," ");
		char a[200][500]; int dem=0;
		while(token!=NULL)// tach cac chu cai va dua no vao trong 1 cai mang a
			{
				dem++;
				strcpy(a[dem],token);
				token=strtok(NULL," ");	
			}
		for(int i=1;i<=dem;i++)//duyet trong cai mang do
			{
				if(b[i]==0)// so sanh xem no da xuat hien chua
					{
						for(int j=i+1;j<=dem;j++)
							{
								if(strcmp(a[i],a[j])==0) // so sanh 2 chuoi xem co giong nhau ko
									{
										b[j]=1;// xuat hien roi cai day =1 de khong in ra
									}
							}
						printf("%s ",a[i]);	
					}
			}
	}