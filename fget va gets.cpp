#include <stdio.h>
#include <string.h>
 
int main(){
    int age;
    char name[30];
    printf("\nNhap tuoi: "); scanf("%d", &age);
    getchar(); // doc ky tu \n;
    printf("\nNhap ten: "); 
	fgets(name, sizeof name, stdin);// fget se tu dong tinh them ki tu \n o cuoi cung trong khi do get thi khongn
    printf("%d", strlen(name));
}