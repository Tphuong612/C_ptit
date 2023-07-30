#include <stdio.h>
long long a[105][105];
long long b[105];
long long c[1005];
void nhap(long long a[][105], int n)
	{	
		
		int i=0;
		while(i<n)
				{
					int j=0;
					while(j<n)
						{
							scanf("%lld",&a[i][j]);
							j++;
						}
					i++;
				}			
	}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
		{
			int n;
			scanf("%d",&n);
			nhap(a,n);
			int count=0, res;// dung de dem cac phan tu xuat hien o moi cot 2 lan
			for(int j=0;j<n;j++)
				{
					for(int i=0;i<n;i++)
						{
							int dem=1;
							for(int k=i+1;k<n;k++)
								{
									if(a[i][j]==a[k][j]) dem++;
								}
							if(dem==2) b[++count]=a[i][j];
						}
				}
			for(int i=1;i<=count;i++)
				printf("%d ",b[i]);
			int count2=1;//dung de dem so lan xuat hien cua cac so da xuat hien 2 lan o moi cot
		
			int count3=0;
			for(int i=1;i<=count;i++)
				{
					for(int j=i+1;j<=count;j++)
						if(b[i]==b[j]) count2++;
					if(count2==n) c[++count3]=b[i];
				}
			if (count3==0) printf("-1");
			for(int i=1;i<=count3;i++)
				printf("%d ", c[i]);
			
		}
 	return 0;
}

