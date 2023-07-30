#include <stdio.h>
#include <string.h>
char c[1005];
int kt(char c[])
	{
		int n=strlen(c);
		int check0=0, check1=0, check2=0, check3=0, check4=0, check5=0, check6=0, check7=0, check8=0, check9=0;
		for(int i=0;i<n;i++)
			{
				if(c[0]=='0') return 6;
				if (c[i]!='0'&&c[i]!='1'&&c[i]!='2'&&c[i]!='3'&&c[i]!='4'&&c[i]!='5'&&c[i]!='6'&&c[i]!='7'&&c[i]!='8'&&c[i]!='9')
					return 7;
				if(c[i]=='0'&&i!=0) check0=1;
				if(c[i]=='1') check1=1;
				if(c[i]=='2') check2=1;
				if(c[i]=='3') check3=1;
				if(c[i]=='4') check4=1;
				if(c[i]=='5') check5=1;
				if(c[i]=='6') check6=1;
				if(c[i]=='7') check7=1;
				if(c[i]=='8') check8=1;
				if(c[i]=='9') check9=1;
			}
		
	    if(check0==1&&check1==1&&check2==1&&check3==1&&check4==1&&check5==1&&check6==1&&check7==1&&check8==1&&check9==1)
			return 8;
		else return 9;
	}
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	for(int i=1;i<=t;i++)
		{
			gets(c);
			if(kt(c)==7||kt(c)==6) printf("INVALID\n");
			else if(kt(c)==8) printf("YES\n");
			else printf("NO\n");
		}
}