#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct tamgiac{
	int a,b,c;
	float dientich;
};

typedef struct tamgiac tg;

void nhap(tg x[],int n)
{
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&x[i].a,&x[i].b,&x[i].c);
	}
}

//void nhap(tg x)
//{
//	scanf("%d%d%d",&x.a,&x.b,&x.c);
//}

void in(tg x)
{
	printf("%d %d %d\n",x.a,x.b,x.c);
}
 
void area(tg x[],int n)
{
	for(int i=0;i<n;i++){
		float p=(x[i].a+x[i].b+x[i].c)/2;
		x[i].dientich=sqrt(p*(p-x[i].a)*(p-x[i].b)*(p-x[i].c));
	}
}

void sapxep(tg x[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(x[i].dientich>x[j].dientich)
			{
				tg t=x[i];
				x[i]=x[j];
				x[j]=t;
			}
		}
	}
}
main()
{
	int t;
	tg x[100];
	scanf("%d",&t);
	nhap(x,t);
	for(int i=0;i<t;i++){
		printf("%d %d %d\n",x[i].a,x[i].b,x[i].c);
	}
	area(x,t);
	sapxep(x,t);
	for(int i=0;i<t;i++){
		in(x[i]);
	}
}