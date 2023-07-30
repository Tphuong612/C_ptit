#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
	char s[50],a[100][100];
	gets(s);
	int h=0,c=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+32;// viet thuong
		while(s[i]!=' '){
		a[h][c]=s[i];
		c++;i++;
	}
	h++; c=0;
	}
	
	
            
	for(int i=0;i<h-1;i++){
		printf("%c",a[i][0]);
	}
	printf("%s@ptit.edu.vn",a[h-1]);
}