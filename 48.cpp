#include<stdio.h>

int main(){
	int row,col;
	scanf("%d%d",&row,&col);
	int k=0;
	for(int i=0;i<row;i++)
		{
			if(i<=col)
				{
					for(int j=i;j<col;j++) printf("%c",j+64);
					for(int t=k;t>=1;t--) printf("%c",col-1+64);
					k++;
					printf("\n");
				}
			else {
				for (int m=col;m>=1;m--) printf("%c",col-1+64);
				printf("\n");
			}
		}
}
