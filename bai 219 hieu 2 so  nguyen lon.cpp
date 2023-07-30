#include <stdio.h>
#include <string.h>
int check(char a[], char b[])// tim so lon hon
	{
		if(strlen(a)>strlen(b)) return 1;
		else if (strlen(a)<strlen(b)) return 2;
		else if (strlen(a)==strlen(b)) 
			{
				for(int i=0;i<strlen(a);i++)
					if(a[i]>b[i]) return 1;
					else if(a[i]<b[i]) return 2;
			}
		return 3;
	}
void reverse( int a[], int n)//dao nguoc chuoi
	{
		for(int i=0;i<n/2;i++)
			{
				int t=a[i];
				a[i]=a[n-1-i];
				a[n-1-i]=t;
			}
	}
void tinh(char a[], char b[], int c[])// coi a>b tuong tu x[]>y[]
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
				int kq=x[i]-y[i]-nho;
				if(kq<0) 
					{
						nho=1;
						c[i]=kq+10;
					}
				else 
					{
						nho=0;
						c[i]=kq;
					}
			}
		int ok=0;
		for(int i=strlen(a)-1;i>=0;i--)
			{
				if(c[i]!=0&&ok==0) ok=1;//loai bo nhung so 0 o dau
				if(ok==1) printf("%d", c[i]);
			}
		printf("\n");		
	}
int main()
	{
		int t;
		scanf("%d",&t);
		getchar();
		while(t--)
			{
				char a[1005], b[1005];
				int c[1005];
				gets(a);
				gets(b);
				if(check(a,b)==3) printf("0\n");
				else if(check(a,b)==1) tinh(a,b,c);
				else if(check(a,b)==2) tinh (b,a,c);
			}
	}