#include <stdio.h>
#include <stdlib.h>
int a[1005];
int dem[1005];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
    {
        dem[a[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(dem[a[i]]>=1)
        {
            printf("%d xuat hien %d lan \n",a[i],dem[a[i]]);
            dem[a[i]]=0;
        }
    }
    return 0;
}