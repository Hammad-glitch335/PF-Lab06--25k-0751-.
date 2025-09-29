#include<stdio.h>
int main(){
	int password;
	int cor_password=1234;
	do {
		printf("\nEnter you password : ");
		scanf("%d",&password);
		if(password!=cor_password)
		printf("\nWrong Password ");
	}
	while(password!=cor_password);
	printf("\nWelcome you have entered the correct PIN.");
	return 0;
}
