#include<stdio.h>
#include<math.h>

int CheckCP(int a)
	{
		float k=sqrt(a);
		if(k==(int)sqrt(a)) return 1;	
	}
// so cuoi co phai scp không ko quan trong, vi no luon lam tron xuong 
// gia tri nguyen cua no. nhung so dau lai la so quyet dinh den tinh khac biet va chia TH
int main ()
	{
		int m,n;
		scanf("%d%d", &m, &n);
		if(CheckCP(m)==1)
			{
				printf("%d\n",(int)sqrt(n)-(int)sqrt(m)+1);
				for(int i=(int)sqrt(m);i<=(int)sqrt(n);i++)
					printf("%d\n", i*i);
			} 
		else
			{
				printf("%d\n",(int)sqrt(n)-(int)sqrt(m));
				for(int i=(int)sqrt(m)+1;i<=(int)sqrt(n);i++)
					printf("%d\n", i*i);
			
			}	
	}