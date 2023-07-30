#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    	{
		    int n;
		    scanf("%d", &n);
		    if(n%2==1) printf("0");
		    else
		    {
				int dem=0,dem2=0,cantim=1;
				while(n % 2 == 0)//tim so mu cua lua thua 2
					{
					    dem2++;
					    n /= 2;
					}
				for(int i = 3; i <= n; i++)// tim so mu cua luy thua khac va tinh tich cua cac (so mu +1) voi nhau qua phan tich thua so nguyen to
					{
				        dem = 0;
				        while(n % i == 0)
							{
					            dem++;
					            n /= i;
					        }
					    cantim=cantim*(dem+1);   
					}
				cantim=cantim*dem2;
				printf("%d\n",cantim);
			}
		}
}
    
