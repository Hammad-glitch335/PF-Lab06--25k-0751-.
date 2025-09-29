#include<stdio.h>
int main(){
	int n,factorial,multiple;
	printf("\nEnter number : ");
	scanf("%d",&n);
	factorial=1;
	multiple=n;
	for(int i=1;i<n;i++){
		multiple=multiple*factorial;
		factorial=n-i;
	}
	printf("Factorial would be %d",multiple);
}
