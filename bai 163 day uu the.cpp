#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
		{
			int n=0;//dem so luong phan tu da nhap
			int c1=0,c2=0;//c1 dem chan, c2 dem le
			char kitu=' ';
			while(kitu!='\n')
				{
					int x;
					scanf("%d",&x);
					n++;
					if(x%2==0) c1++;
					else c2++;
					kitu=getchar();// co tac dung la doc ki tu dau cach
				}
			if(n%2==0&&c1>c2 || n%2==1&&c1<c2) printf("YES\n");
			else printf("NO\n");
		}
	
}
