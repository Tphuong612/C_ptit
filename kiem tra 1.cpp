#include <stdio.h>
int main()
	{
		int i=0;
		char ch='A';
		do 
			{
				putchar(ch);
			}
		while(i++<5||++ch<='F');
		return 0;
	}