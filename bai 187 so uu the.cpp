#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int check(char c[])
	{
		int n=strlen(c);
		int chan=0, le=0, dem=0;
		for(int i=0;i<n;i++)
			{
				if(c[0]=='0') return 6;
				if (c[i]!='0'&&c[i]!='1'&&c[i]!='2'&&c[i]!='3'&&c[i]!='4'&&c[i]!='5'&&c[i]!='6'&&c[i]!='7'&&c[i]!='8'&&c[i]!='9')
					return 7;
				
				if(c[i]>=48&&c[i]<=57)
					{
						dem++;
						if(c[i]%2==0) chan++;
						else le++;
					}
			}
		if(chan>le&&dem%2==0) return 5;
		else if (chan<le&&dem%2==1) return 4;
		else return 3;
	}
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
		{
			char c[1002];
			gets(c);
			if(check(c)==6||check(c)==7) printf("INVALID\n");
			else if (check(c)==5||check(c)==4) printf("YES\n");
			else if (check(c)==3) printf("NO\n");
			
		}
}