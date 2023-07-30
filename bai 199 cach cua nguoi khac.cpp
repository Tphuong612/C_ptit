#include<stdio.h>
#include<math.h> 
int kt(int x)
{
	int y;
	y=sqrt(x);
	if(y*y==x) return y;
	y=y+1;
	if(y*y==x) return y;
	return 0;
}
void doi(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
} 
int main()
{
	int a,b,c,d,e,f,h,k;
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	scanf("%d %d",&e,&f);
	h=a*b;
	h=h+c*d;
	h=h+e*f;
	k=kt(h);
	if(k==0) printf("NO");
	else
	{
		if(a>b)doi(&a,&b);
		if(c>d)doi(&c,&d);
		if(e>f)doi(&e,&f);
		if(b==d&&d==f&&f==k)printf("YES");
		else
		{
			if(d==k) 
			{
				doi(&a,&c); 
				doi(&b,&d);
			}
			if(f==k) 
			{
				doi(&a,&e); 
				doi(&b,&f);
			}
			if(b==k)
			{
				a=k-a;
				if((c==a&&e==a)||(d==a&&e==a)||(c==a&&f==a)||(d==a&&f==a))printf("YES");
				else printf("NO");
			}		
			else printf("NO");
		} 
	}		
}
