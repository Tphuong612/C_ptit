#include <stdio.h> 
int main() 
{ 
	int n, a[100], min; 
	scanf("%d", &n); 
	for(int i = 0; i < n; i++) 
		scanf("%d", &a[i]);  
	for (int i = 0; i < n-1; i++)
		{
			int Min = i;
			for (int j = i+1; j < n; j++)
				{
					if (a[Min] > a[j])
						Min = j;
				}
			if (i != Min)
				{
					int temp = a[i];
					a[i] = a[Min];
					a[Min] = temp;
				}
		
			printf("Buoc %d: ",i+1); 
			for(int i = 0; i < n; i++) 
				printf("%d ", a[i]);
			printf("\n"); 
		} 
}