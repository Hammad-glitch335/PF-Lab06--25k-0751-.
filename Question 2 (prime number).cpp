#include<stdio.h>
int main(){
	int num,remainder;
	int prime = 0;
	printf("\nEnter a number : ");
	scanf("%d",&num);
	for (int i=1;i<=num;i++){
		remainder=num%i;
		if(remainder==0)
			prime++;
	}
	if (prime==2)
		printf("\nThe entered number is prime number");
	else
		printf("\nThe number is not prime");
	return 0;
}
