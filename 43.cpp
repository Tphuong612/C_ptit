#include<stdio.h>

int main(){
	int row, col;
	scanf("%d%d", &row, &col);
	for(int i=1; i<=row; i++)
		{
			if(i<=col)
				{
					for(int j=i; j<=col; j++) printf("%d", j);
					int k=i-1;
					for(int t=1;t<=k;t++) printf("%d",col-t);
					printf("\n");
				}
			else
				{
					printf("%d",i);
					int k1=col-1;
					for(int t1=1;t1<=k1;t1++) printf("%d",i-t1);
					printf("\n");
				}
		}
}
