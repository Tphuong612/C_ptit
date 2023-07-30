#include<stdio.h>
#include<string.h>

main()
{
	char a[103];
	int count,h,i,j,x,k,count1,count2;
	gets(a);
	char b[103];
	int c[103];
	strcpy(b,a);
	char *p=strtok(a," ");
	while(p!=NULL)
	{
//tim vi tri bat dau xet
		for(x=0;x<strlen(b);x++)
		{
			h=0;
			if(b[x]==p[0])
			{
				count1=0;
				for(j=0;j<strlen(p);j++)
				{
					if(a[x+j]==p[j])
					{
						count1++;
					}
				}
				if(count1==strlen(p))
				{
					h=x+strlen(p);
					break;
				}
			}
		}
//		printf("%d\n",h);
// bat dau xet 
		for(i=h;i<strlen(b);i++)
		{
			if(b[i]==p[0])
			{
				count=0;
				for(j=0;j<strlen(p);j++)
				{
					if(b[i+j]==p[j])
					{
						count++;
					}
				}
				if(count==strlen(p))
				{
					for(k=i;k<i+count;k++)
					{
						b[k]=' ';
					}
				}
			}
		}
		p=strtok(NULL," ");
	}
//in ra xau moi
	char *q=strtok(b," ");
	while(q!=NULL)
	{
		printf("%s ",q);
		q=strtok(NULL," ");
	}
}