#include<stdio.h>
int main(){
	int a;
	int i=0;
	int b[1005];
	FILE *pt;
	pt= fopen("D:\\input.txt","r");
	int j=0;
	while(j<a){
		int k=j+1;
		while(k<a){
			while(b[j]>b[k]){
				int c=b[j];
				b[j]=b[k];
				b[k]=c;
			}
			k++;
		}
		j++;
	}
	int x=0;
	FILE *pr;
	pr = fopen("D:\\output.txt","w");
	while(x<a){
		fprintf(pr,"%d",b[x]);
		x++;
	}
	fclose(pt);
	return 0;
}