#include<stdio.h>
int main()
{
	int A[10][10],B[10][10],C[10][10],r,c,i,j ;
	printf("enter matrix row columns isze");
	scanf("%d%d",&r,&c);
	printf("enter A matrix values");
	for (i=0;i<r;i++)
	{
	 for (j=0;j<c;j++);
	{
		scanf("%d",&A[i][j]);
	}
	}
	printf("enter B matrix values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
				}
	}
	printf("result matrix is \n");
	for(j=0;j<c;j++)
	{
		printf("%d",C[i][j]);
	}
	printf("\n");
	return 0;
}
