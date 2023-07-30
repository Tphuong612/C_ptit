#include <stdio.h>
long long a[100005];
void sapxeptang(long long a[],long long n)// ban dau la sap xep mang theo thu tu tang dan
	{
		for(int i=1;i<n;i++)
			{
				for(int j=i+1;j<=n;j++)
					{
						if(a[j]<a[j-1])
							{
								int t=a[j];
								a[j]=a[j+1];
								a[j+1]=t;
							}
					}
			}
	}
int check(long long a[],long long n)
	{
		for(int i=n;i>=3;i--)
			{
				int l=1, r=i-1;
				while(l<r)
					{
						if(a[l]+a[r]==a[i]) return 1;
						else if(a[l]+a[r]>a[i]) --r;//giam phan tu gan cuoi
						else ++l;// tang phan tu dau
					}
			}
		return 0;
	}
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
			long long n;
			scanf("%lld",&n);
			for(int i=1;i<=n;i++)// mang la gia tri binh phuong luon
				{
					long long x;
					scanf("%lld",&x);
					a[i]=(long long ) x*x;
				}
			sapxeptang(a,n);
			if(check(a,n)==1) printf("YES\n");
			else printf("NO\n");
		}
}