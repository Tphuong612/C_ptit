#include <stdio.h>
#include <math.h>
int main()
	{
		int xA,yA,xB,yB,xC,yC,xD,yD;
		scanf("%d%d%d%d",&xA,&yA,&xB,&yB);
		scanf("%d%d%d%d",&xC,&yC,&xD,&yD);
		int a[5];
		a[1]=abs(xA-xB);
		a[2]=abs(xD-xC);
		a[3]=abs(xB-xC);
		a[4]=abs(xA-xD);
		int ngang=a[1];
		for(int i=1;i<=4;i++)
			{
				if(a[i]>ngang) ngang=a[i];
			}
		int b[5];
		b[1]=abs(yA-yB);
		b[2]=abs(yD-yC);
		b[3]=abs(yB-yC);
		b[4]=abs(yA-yD);
		int doc=b[1];
		for(int i=1;i<=4;i++)
			{
				if(b[i]>doc) doc=b[i];
			}
		if(ngang>doc) printf("%d",ngang*ngang);
		else printf("%d",doc*doc);
	}