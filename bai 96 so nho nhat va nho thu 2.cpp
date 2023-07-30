#include <stdio.h>
int main()
{
  int N;
  scanf("%d",&N); 
  int a[105];
  for(int i=1;i<=N;i++)
		scanf("%lld",&a[i]);
  int min1=a[1],min2;
  for(int i=1;i<N;i++)
	  	{
		    if(a[i] < min1)
			    {
			      min2 = min1;
			      min1 = a[i];  
			    }      
		    else if(a[i] < min2 && a[i] > min1)
		      min2 = a[i];
	  	}  
 printf("%lld %lld",min1,min2);
}
