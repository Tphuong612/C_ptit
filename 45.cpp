#include<stdio.h>

int main(){
	int row, col;
	scanf("%d%d", &row, &col);
	int k=0,
		k1=col-1;
	for(int i=row; i>=1; i--)
		{
			if(i<=col)
				{
					for(int j=col-k; j>=1; j--) printf("%d", j);
					for(int t=col-k+1; t<=col; t++) printf("%d",t-k1);
					k++;
					k1--;
					printf("\n");
				}
			else
				{
					for(int m=i;m>=i-col+1;m--) printf("%d",m);
					printf("\n"); 
				}	
		}
}
