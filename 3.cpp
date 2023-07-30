#include <stdio.h>
int main()
	{
		int a=1,b=2,c=3,m;
		m=a;
		if(b<m) m=b;
		if(c<m) m=c;
		printf("%d ",m);
		return 0;
	}