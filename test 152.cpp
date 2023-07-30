#include <stdio.h>
int a[20],b[20];// mang a luu chu so cua x1, mang b luu chu so cua x2;
int main()
	{
		int p1=0,p2=0;//so moi cua x1,x2 sau khi thay doi
		int dem1=0,dem2=0;
		while(x1!=0) 
			{
				dem1++;
				a[dem1]=x1%10;
				x1/=10;
			}
		for(int i=dem1;i>=1;i--)
			{
				if(a[i]==6)	a[i]=5;
				p1=p1*10+a[i];
			}
		while(x2!=0)
			{
				dem2++;
				b[dem2]=x2%10;
				x2/=10;
			}
		
		for(int i=dem2;i>=1;i--)
			{
				if(b[i]==6)	
					b[i]=5;
				p2=p2*10+b[i];
			}	
		return p1+p1;
	}
	