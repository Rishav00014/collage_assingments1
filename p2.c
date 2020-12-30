#include<stdio.h>

int main(){
	int n,rev;
	rev=0;
	printf("Enter number to print its reverse : \n");
	scanf("%d",&n);
	while(n!=0){
		rev=(rev*10)+(n%10);
		n=n/10;
	}
	printf("Reversed number is  : %d \n",rev);
	return 0;
}
