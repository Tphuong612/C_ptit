#include <stdio.h>
int main()
	{
		int n;
		scanf("%d",&n);
		int a[n+5];
		for(int i=1;i<=n;i++)
			{
				scanf("%d",&a[i]);
			}
		for(int i=1;i<=n;i++)
			{
				int key = a[i];// lay day lam moc
		        int j = i - 1;// dung de lap tien ve dang truoc
		        while (j >= 1 && a[j] > key) // day cac so lon hon ve dang sau
			        {
			            a[j + 1] = a[j];
			            j--;
			        	/*
			        		VD: 3 5 7 2;
			        		thi a[2]=3; a[3]=5; a[4]=7;
			        	*/
			        }
			    // neu vong while duoc thuc hien thi den day j=0;
			    // neu khong thuc hien duoc thi den day j=i-1;
		        a[j + 1] = key;// neu vong while duoc thuc hien thi den day co ngia la a[1]=a[i];
		        			   // neu vong while khong the thuc hien thi den day co nghia la giu nguyen vi tri cua a[i]
				printf("Buoc %d: ",i-1);
				for(int k=1;k<=i;k++)
					printf("%d ",a[k]);
				printf("\n");
			
			}
		
	}
