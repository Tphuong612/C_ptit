#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int demchan=0, demle=0, chuso;
	while(n!=0)
		{
			chuso=n%10;
			if(chuso%2==1) demle++;
			else demchan++;
			n=n/10;	
		}
	printf("%d %d",demle,demchan);
}