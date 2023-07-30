#include <stdio.h>
#include<math.h>
int prime[2000001];
void sang()//sang nguyen to nho nhat
	{
		
		for(int i=0;i<=2000000;i++) prime[i]=i;//coi tat ca cac so ban dau deu la snt thi uoc nguyen to nho nhat cua so do chinh là so do
		for(int i=2;i<=1414;i++)
			if(prime[i]==i)
				{
					for(int j=i*i;j<=2000000;j=j+i)
						if(prime[j]==j) prime[j]=i;//dam bao khong co su chong cheo VD 12 ban dau duoc gan =2, nhg duyen them lan nua lai bi gan=3;
				}
	}
int pt(long n)
	{
		sang();
		int tongcon=0;
		while(n!=1)
			{
				int tmp=prime[n];// uoc nguyen to nho nhat
				while(n%tmp==0)
					{
						tongcon=tongcon+tmp;
						n/=tmp;
					}
			}
		return tongcon;
	}
int main()
{
    long t;
    scanf("%ld",&t);
    long tong=0;
    for(int i=1;i<=t;i++)
    	{
			long n;
			scanf("%ld", &n);
		    long tongcon=0;
			tong=tong+pt(n);
		}
	printf("%ld\n",tong);
}