#include<stdio.h>
int main(){
	int even = 0;
	int odd = 0;
	//even
	for(int i=0;i<=20;i+=2){
		even=even+i;
	}
	printf("\nSumm of even numbers from 1 - 20 is %d",even);
	//odd
	for(int i=1;i<=20;i+=2){
		odd=odd+i;
	}
	printf("\nSum of odd numbers from 1 - 20 is %d",odd);
	
	return 0;
}
