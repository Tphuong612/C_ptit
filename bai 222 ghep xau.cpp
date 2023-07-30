#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int cmp(const void *a, const void *b)
	{
		char x[105], y[105], z[105], t[105];
		strcpy(x, (char *)a); // copy nhu vay de dam bao rang su sung qsort ko bi loi
		strcpy(y, (char *)b);
		strcpy(z,x);
		strcpy(t,y);
		strcat(x,y);// ab
		strcat(t,z);//ba
		if(strcmp(x,t)<0) return -1;// xau x co thu tu tu dien nho hon 
		return 1;// xau t co thu tu tu dien nho hon
	}
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	for(int z=1;z<=t;z++)
		{
			int n;
			scanf("%d",&n);
			getchar();
			char a[n][105];// khong can dung strtok do ta su dung mang char 2 chieu
			for(int i=0;i<n;i++)
				{
					scanf("%s",&a[i]);	
				}
			qsort(a,n,sizeof(a[0]),cmp);
			for(int i=0;i<n;i++)
				printf("%s",a[i]);	
			printf("\n");
		}
}