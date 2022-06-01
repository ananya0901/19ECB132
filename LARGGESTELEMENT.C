#include<stdio.h>
#include<stdlib.h>
void inputarr(int arr[],int n);
void check(int arr[],int n);
int main()
{
	int n,i;
	printf("enter the size \n");
	scanf("%d",&n);
	int *arr=(int *)malloc(n*sizeof(int));
	printf("Enter the input\n");
	inputarr(arr,n);
	check(arr,n);
	return 0;
}
void inputarr(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void check(int arr[],int n){
	int i,g;
	g=(arr[0]<arr[1])?(arr[1]):(arr[0]);
	for(i=2;i<n-1;i++){
		if(g<arr[i]){
			g=arr[i];
		}
	}
	printf("the greatest number is %d",g);
}
/*
enter the size 
5
Enter the input
2
4
1
6
3
the greatest number is 6
  */
