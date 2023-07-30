#include<stdio.h>

int main(){
	int h;
	scanf("%d", &h);
	for(int i=0;i<h;i++)
		{
			for (int j=i; j<h; j++)
				{
					printf("%c",2*j+1+64);
					
				}
			printf("\n");
		}
}
