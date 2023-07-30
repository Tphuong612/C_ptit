#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	char a[55];
	gets(a);
	for(int i=0; i<strlen(a); i++){
		if(isalpha(a[i]) ==1) 			//chuyen thanh chu in thuong
			{
				a[i]=tolower(a[i]);
			}
	}
	
	char *tok=strtok(a, " ");
	char a1[50][50];
	int cnt=0;
	while(tok!=NULL)
		{
			strcpy(a1[cnt],tok);
			++cnt;					// tach cac tu tu xau a sang mang 2 chieu a1
			tok=strtok(NULL, " ");
		}
		
//	int k=0;
	char e1[]="@ptit.edu.vn";
	for(int i=0; i<cnt;i++)
		{
			if(i!=cnt-1)
				{
						printf("%c",a1[i][0]);
				}
			else
				{
					printf("%s",a1[i]);
				}
		}
	printf("%s",e1);
//	for(int i=0;i<cnt; i++)
//		{
//			if(i!=cnt-1)
//				{
//					strncpy(e[k],a1[i],1);//copy chu cai dau cua ho ten
//					++k;
//				}
//			else
//				{
//					strcpy(e[k],a1[i]);
//					++k;
//				}			
//		}
//	strncpy(e[k],e1,strlen(e1));
	
//	for(int i=0; i<k; i++)
//		{
//			printf("%s",e[i]);
//		}
	
}