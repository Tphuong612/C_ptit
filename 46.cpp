#include<stdio.h>

int main(){
	int row,col;
	scanf("%d%d",&row, &col);
	int k=0;
	int max=(row>=col)?row:col;
	for(int i=1;i<=row;i++)
		{
			if(i<=col)
				{
					for(int t=0; t<k; t++)
						{
							printf("%c", max-t+96);
						}
					for(int j=k+1; j<=col; j++)
						{
							printf("%c",max-k+96);
						}
					k++;
					printf("\n");
				}
			else
				{
					for(int m=max; m>=max-col+1;m--) printf("%c",m+96);
					printf("\n");
				}
		}
}
