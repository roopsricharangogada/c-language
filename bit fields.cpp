#include<stdio.h>
struct date
{
	int d:5;
	int m:4;
	int y;
};
int main()
{
	struct date x1={31,12,2025};
	printf("size of the structure=%lu",sizeof(struct date));
	printf("\n%d%d%d",x1.d,x1.m,x1.y);
	return 0;
}
