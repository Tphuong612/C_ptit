#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

struct Tien{
	char name[100];
	char id[50];
	double gia;
	double ban;
};

typedef struct Tien T;

void nhap(T *a){
	fflush(stdin);//xoa bo nho dem
	gets(a->name);
	gets(a->id);
	scanf("%lf",&a->gia);
	scanf("%lf",&a->ban);
}

int main(){
	int n;
	scanf("%d",&n);
	T a[n+1];
	for(int i=1;i<=n;i++)
		{
			nhap(&a[i]);
		}
	
	int ts[n+1];//luu ma mat hang
	for(int i=1;i<=n;i++)
		ts[i]=i;
	for(int i=1;i<=n-1;i++)
		{
			for(int j=i+1;j<=n;j++)
				{
					double tmp1=a[i].ban-a[i].gia,
						tmp2=a[j].ban-a[j].gia;
					if(tmp2>tmp1)
						{
							int tmp=ts[i];
							ts[i]=ts[j];
							ts[j]=tmp;
						}
				}
		}
		
	for(int i=1;i<=n;i++)
		{
			printf("%d %s %s %.2lf\n", ts[i], a[ts[i]].name, a[ts[i]].id, a[ts[i]].ban-a[ts[i]].gia);
		}
}