#include<stdio.h>

int main(){
	int row,col;
    scanf("%d%d",&row, &col);
    for(int i=row;i>=1;i--)
    	{
    		if(i>col)
				{
					for(int j=1;j<=col;j++) printf("%c",col+64);
					printf("\n");
				}
    		
    		else
    			{
    				for(int t=col-i;t>=1;t--) printf("%c",col-t+64);
    				for(int m=col-i+1;m<=col;m++) printf("%c",col+64);
    				printf("\n");
				}
		}
}
