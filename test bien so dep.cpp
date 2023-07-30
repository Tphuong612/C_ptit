#include <stdio.h>
#include <string.h>
int main()
	{
		char c[1000];
		gets(c);
		int dem=0;// 54 la ma cua so 6, 56 la ma cua so 8
		for(int i=6;i<=11;i++)
			{
				if(i=9) continue;
				else
					{
						if (c[i]==54||c[i]==56) dem++;
					}
			}
		
		if(dem==5) printf("1");
		else printf("0");
	}