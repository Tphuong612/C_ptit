#include <stdio.h>
typedef struct {
	char name[100];
	char sex[20];
	int age;
	double height;
	double weight;
}person;
//person p1,p2;
/*
	struct person{
		char ten[100];
		char sex;
		int age;
		double height;
		double weight;
	};
	struct person p1,p2;
*/
person p1,p2;
int main()
	{
		person p1={"Phuong","Nu",19,150,45};
		person p2=p1;
		printf("p1: %s %s %d %.1f %.1f\n", p1.name, p1.sex, p1.age, p1.height, p1.weight); 
    	printf("p2: %s %s %d %.1f %.1f\n", p2.name, p2.sex, p2.age, p2.height, p2.weight); 

    	return 0;
	}
