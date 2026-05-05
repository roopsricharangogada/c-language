#include<stdio.h>
#include<string.h>
struct adderes
{
	char street[10];
	char city[10];
	long int pcode;
	
};
struct student
{
	int rollno;
	char name[10];
	float per;
	struct adderes a;
};
int main(){
	struct student s={108,"charan",79.80,{"Aditya","KKD",533437}
	};
	printf("%d%s%.2f%s%s%ld",s.rollno,s.name,s.per,s.a.street,s.a.city,s.a.pcode);
	return 0;
}
