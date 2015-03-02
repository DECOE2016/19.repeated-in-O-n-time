#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,*a,sum=0,n,j,sum1,no;
	printf("Enter the range of the array: ");
	scanf("%d",&n);
 //Dynamically allocating memory for the array

    a=(int*)malloc(n*sizeof(int));
    printf("Enter the elements: ");
    for(i=0;i<=n;i++)
    scanf("%d",&a[i]);
    for(j=0;j<=n;j++)
    sum+=a[j];	
    sum1=(n*(n+1))/2; //Summation of n elements 
    no=sum-sum1;
    printf("The repeated number is: %d",no);
    return 0;
}
