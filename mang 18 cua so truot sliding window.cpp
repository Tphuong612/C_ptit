//#include <stdio.h>// tuy dung nhung se bi tle
//int a[10005];
//int max(int a,int b)
//	{
//		if(a>b) return a;
//		else return b;
//	}
//int main()
//{
//	int n,k;
//	scanf("%d%d",&n,&k);
//	for(int i=1;i<=n;i++)
//		scanf("%d",&a[i]);
//	int s1,s2=0,index=0;
//	for(int i=1;i<=n;i++)
//		{
//			s1=0;
//			for(int j=i;j<=i+k-1;j++)// tao tong
//				{
//					s1=s1+a[j];
//					if(s1<=0) s1=0;
//				}
//			s2=max(s1,s2);// s2 co nhiem vu so sanh va luu gia tri tong max
//			if(s1==s2)//tuc la da den gia tri max
//				{ 
//					index=i;// luu lai vi tri bat dau cua phan tu
//				}
//			if(i>n-k) break;
//		}
//	printf("%d\n",s2);
//	for(int i=0;i<k;i++)
//		{
//			printf("%d ",a[index+i]);
//		}
//}
// c2 su dung cua so truot
#include <stdio.h>
int a[10005],b[10005];
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	b[1]=a[1]+a[2]+a[3];
	int max=0,index=0;
	for(int i=2;i<=n-k+1;i++)
		{
			b[i]=b[i-1]-a[i-1]+a[i+k-1];
			if(b[i]>=b[i-1])
				{
				  max=b[i];
				  index=i;
				}
		}
	printf("%d\n",max);
	for(int i=0;i<k;i++)
		{
			printf("%d ",a[index+i]);
		}
}