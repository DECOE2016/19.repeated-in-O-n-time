#include<stdio.h>
#include<stdlib.h >
int main()
{
	float *a,sum=0.0,sum1=0.0;
	int n,i,k,j;
	printf("Enter the range of elements:");
	scanf("%d",&n);
	//dynamically allocating memory for the float array
	a=(float*)malloc(n*sizeof(float));
	printf("Enter the elements: ");
	for( i=0;i<=n;i++)
	scanf("%f",&a[i]);
	for(j=0;j<=n;j++)
	a[j]=a[j]*10;
	sum=(n*(n+1))/2;//summing up of n elements
	for(k=0;k<=n;k++)
	sum1+=a[k];	
	printf("The repeated number is: %.1f",(sum1-sum)/10);
	
	
}
