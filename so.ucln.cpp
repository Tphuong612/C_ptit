#include <stdio.h>
int ucln(int a, int b)
	{
		while(b!=0)// bao gio so du == 0 thi dung vong lap
			{
				int tmp=a%b;// ucl cua 2 so = ucln (so chia, so du) 
				a=b;
				b=tmp;
			}
		return a;
		// tim so du, so bi chia duoc gan bang so chia, so chia duoc gan bang so du
	}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
		{
			int a,b;
			scanf("%d%d",&a,&b);
			printf("%d\n",ucln(a,b));
		}
 	return 0;
}
