#include <stdio.h>
struct MatHang
	{
		char ten[1005];
		char nhom[1005];
		float giamua;
		float giaban;
		float lai;
		int ma;
	};
typedef struct MatHang MH;
void sapxep(MH a[], int n)
	{
		for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
				{
					if(a[i].lai<a[j].lai)
						{
							MH t=a[i];
							a[i]=a[j];
							a[j]=t;	
						} 
				}
		
	}

int main()
	{
		int n;
		scanf("%d",&n);
		getchar();
		MH a[n+1];// a la mang chua san pham
		for(int i=1;i<=n;i++)
			{
				a[i].ma=i;
				gets(a[i].ten);
				gets(a[i].nhom);
				scanf("%f%f",&a[i].giamua,&a[i].giaban);
				getchar();
				a[i].lai=a[i].giaban-a[i].giamua;	
			}
		sapxep(a,n);
		for(int i=1;i<=n;i++)
			{
				printf("%d %s %s %.2f\n", a[i].ma, a[i].ten, a[i].nhom, a[i].lai);
			}
	}
