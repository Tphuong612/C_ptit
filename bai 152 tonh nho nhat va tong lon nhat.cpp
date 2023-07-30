#include <stdio.h>
int a[20],b[20];// mang a luu chu so cua x1, mang b luu chu so cua x2;
long long min(long long x1, long long x2)
	{
		long long p1=0,p2=0;//so moi cua x1,x2 sau khi thay doi
		int dem1=0,dem2=0;
		while(x1!=0)// tim so moi xua x1
			{
				dem1++;
				a[dem1]=x1%10;
				x1/=10;
			}
		for(int i=dem1;i>=1;i--)
			{
				if(a[i]==6)	a[i]=5;
				p1=p1*10+a[i];
			}
		while(x2!=0)// tim so moi cua x2
			{
				dem2++;
				b[dem2]=x2%10;
				x2/=10;
			}
		for(int i=dem2;i>=1;i--)
			{
				if(b[i]==6)	
					b[i]=5;
				p2=p2*10+b[i];
			}	
		return p1+p2;
	}
long long max(long long x1, long long x2)
	{
		long long p1=0,p2=0;//so moi cua x1,x2 sau khi thay doi
		int dem1=0,dem2=0;
		while(x1!=0)// tim so moi xua x1
			{
				dem1++;
				a[dem1]=x1%10;
				x1/=10;
			}
		for(int i=dem1;i>=1;i--)
			{
				if(a[i]==5)	a[i]=6;
				p1=p1*10+a[i];
			}
		while(x2!=0)// tim so moi cua x2
			{
				dem2++;
				b[dem2]=x2%10;
				x2/=10;
			}
		for(int i=dem2;i>=1;i--)
			{
				if(b[i]==5)	b[i]=6;
				p2=p2*10+b[i];
			}	
		return p1+p2;
	}
int main()
	{
		int t;
		scanf("%d",&t);
		for(int i=1;i<=t;i++)
			{
				long long x1,x2;
				scanf("%lld%lld",&x1,&x2);
				printf ("%lld %lld\n", min(x1,x2), max(x1,x2));
			}
	}
