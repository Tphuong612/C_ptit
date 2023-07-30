#include<stdio.h>

int main(){
	int a,b;
	int m[100][2];
	for(int i=1; i<=3; i++)
		{
			scanf("%d%d", &a,&b);
			m[i][1]=a;
			m[i][2]=b;
		}
	int sum=0;
	for(int i=1; i<=3; i++)
		{
			for(int j=1; j<=2; j++)
				{
					sum+=m[i][j];
				}
		}
	if(sum%2==1) printf("NO\n");
	else
		{
			int n=m[1][1];
			int co=0;
			for(int i=1; i<=2; i++)
			{
				if((n+m[2][i]+m[3][1]) ==(sum/2)) 
				{
					printf("YES\n");
					co++;
					break;
				}
				
				if((n+m[2][i]+m[3][2]) ==(sum/2))
				{
					
					printf("YES\n");
					co++;
					break;
				
				}
			}
			if(co==0 ) printf("NO\n");
		}
	
	
}