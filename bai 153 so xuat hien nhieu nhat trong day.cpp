#include <stdio.h>
int a[105];
int b[30005]={0};
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
			int n;
			scanf("%d",&n);
			for(int i=1;i<=n;i++)// nhap mang
				scanf("%d",&a[i]);
			for(int i=1;i<=n;i++)// mang tan so
				b[a[i]]++;
			int max=0;
			for(int i=1;i<=n;i++)// tim so lan xuat hien nhieu nhat
				if(b[a[i]]>max) max=b[a[i]];
			for(int i=1;i<=n;i++)
				{
					if(b[a[i]]==max) 
						{
							printf("%d ",a[i]);
							b[a[i]]=0;
						}
				}
			printf("\n");
			for(int i=1;i<=n;i++)
				b[a[i]]=0;
		}
	
}