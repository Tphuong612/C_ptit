#include<stdio.h>

int main(){
	int h;
	scanf("%d", &h);
	int k=0;
	for(int i=h-1;i>=0;i--)
		{
			for (int j=0; j<=h-1-k; j++)
				{
					printf("%c",i+j+64);
					
					
				}
			k++;
			printf("\n");
		}
}
