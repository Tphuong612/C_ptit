#include <stdio.h>
#include <string.h>
#include <math.h>
void reverse( int a[], int n)// dao nguoc chuoi
	{
		for(int i=0;i<n/2;i++)
			{
				char t=a[i];
				a[i]=a[n-1-i];
				a[n-1-i]=t;edx
			}
	}
void tinh(char a[], char b[], int c[])//coi a la so co nhieu chu so hon
	{
		int x[1005], y[1005];
		for(int i=0;i<strlen(a);i++) x[i]=a[i]-48;// dua ve thap phan, neu ko dua ve thi khi in ra se loi khong ra dc chu so
		for(int i=0;i<strlen(b);i++) y[i]=b[i]-48;
		reverse(x,strlen(a));
		reverse(y,strlen(b));
		for(int i=strlen(b);i<strlen(a);i++) y[i]=0;																																																																																																																																																																																																																																						
		int nho=0;
		for(int i=0;i<strlen(a);i++) 
			{
				int kq=x[i]+y[i]+nho;
				c[i]=kq%10;
				nho=kq/10;
			}
		if(nho==1) printf("1");
		for(int i=strlen(a)-1;i>=0;i--)
			printf("%d",c[i]);
		printf("\n");		
	}
int main()
	{
		int t;
		scanf("%d",&t);
		getchar();
		while(t--)
			{
				char a[1000], b[1000];
				int c[1005];
				gets(a);
				gets(b);
				if(strlen(a)>=strlen(b)) tinh(a,b,c);
				else tinh(b,a,c);
			}
	}