#include<stdio.h>

int main(){
	int row, col,k=0;
	scanf("%d%d", &row, &col);
	for(int i=1; i<=row; i++)
		{
			if(i<=col)
				{
					for(int j=i; j>=1; j--) printf("%d", j);
					for(int t=i+1; t<=col; t++) printf("%d",t-k);
					k++;
					printf("\n");
				}
			else
				{
					for(int m=i;m>=i-col+1;m--) printf("%d",m);
					printf("\n"); 
				}	
		}
}
