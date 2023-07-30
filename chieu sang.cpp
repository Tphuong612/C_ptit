#include<stdio.h>
main(){
	int a,b,c,d[1004];
	scanf("%d%d%d",&a,&b,&c);
	int min=0,max=0;
	for(int i=0;i<b;i++){
		scanf("%d",&d[i]);
		if(d[i]>max) max=d[i];
		if(d[i]<min) min=d[i];
	}
	int count=0;
	if(min-c>0){
		if((min-c)%(2*c)==0){
			count=count+(min-c)/(2*c);
		}else {
			count=count+(min-c)/(2*c)+1;
		}
	}
	for(int i=0;i<b;i++){
	if((d[i+1]-d[i]-2*c)%(2*c)==0){
			count=count+(d[i+1]-d[i]-2*c)/(2*c);
		}else {
			count=count+(d[i+1]-d[i]-2*c)/(2*c)+1;
		}
	}
	if(a-max-c>0){
		if((a-max-c)%(2*c)==0){
			count=count+(a-max-c)/(2*c);
		}else {
			count=count+(a-max-c)/(2*c)+1;
		}
	}
	printf("%d",count);
}