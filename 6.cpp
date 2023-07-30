#include <stdio.h>
int main()
{
	int a,b;
	a=b=5;
	printf("%d ",++a+b);//=11; khi viet nhu vay thi a+++b se la a+b truoc roi moi tang len
	printf("%d ",a+++b);//=10
}