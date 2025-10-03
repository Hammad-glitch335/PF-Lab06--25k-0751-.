#include<stdio.h>
int main(){
	int num;
	int first=0;
	int second=1;
	int sum =0;
	int count=0;
	printf("\nEnter n numbers for Fibonacci series : ");
	scanf("%d",&num);
	while(count<num){
		printf("%d,",first);
		sum=first+second;
		first=second;
		second=sum;
		count++;
	}
	printf("...");
	return 0;
}
