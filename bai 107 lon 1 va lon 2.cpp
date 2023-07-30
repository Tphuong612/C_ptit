#include <stdio.h>
int main()
{
  int N;
  scanf("%d",&N); 
  int a[105];
  for(int i=1;i<=N;i++)
		scanf("%d",&a[i]);
  int max1=a[1],max2;
  for(int i=1;i<=N;i++)
	  	{
		    if(a[i] > max1)
			    {
			    	max2=max1;
			     	max1=a[i];
			    }  
			else if(a[i] > max2 && a[i] < max1)
		      max2 = a[i];  
	  	}  
 printf("%d %d",max1,max2);
}
