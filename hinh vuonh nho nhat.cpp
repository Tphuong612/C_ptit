#include <stdio.h>
#include <math.h>
int dai(int xA,int yA,int xB,int yB)
	{
		int k=sqrt((xA-xB)*(xA-xB)+(yA-yB)*(yA-yB));
		return k;
	}
int main()
	{
		int xA,yA,xB,yB,xC,yC,xD,yD;
		scanf("%d%d%d%d",&xA,&yA,&xB,&yB);
		scanf("%d%d%d%d",&xC,&yC,&xD,&yD);
		int k[7];
		
		k[1]=dai(xA,yA,xB,yB);
		k[2]=dai(xB,yB,xC,yC);
		k[3]=dai(xC,yC,xD,yD);
		k[4]=dai(xD,yD,xA,yA);
		k[5]=dai(xB,yB,xD,yD);
		k[6]=dai(xC,yC,xA,yA);
		int max=k[1];
		for(int i=1;i<=6;i++)
			if(k[i]>max) max=k[i];
		printf("%d",max*max);
	}