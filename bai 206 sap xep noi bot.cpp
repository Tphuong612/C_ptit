#include <stdio.h>
int a[1000005];
int check(int a[], int n)
    {
        for(int i=1;i<n;i++)
            {
                if(a[i]>a[i+1]) return 0; 
            }
        return 1;
    }
int main()
    {
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);
        for(int i=1;i<n;i++)
            {
                for(int j=1;j<=n-i;j++)
                    {
                        if(a[j]>a[j+1]) 
                            {
                                int t=a[j];
                                a[j]=a[j+1];
                                a[j+1]=t;
                            }
                    }
                printf("Buoc %d: ",i);
                for(int i=1;i<=n;i++) printf("%d ",a[i]);
                printf("\n");
                if (check(a,n)==1) break;
            }
        
    }