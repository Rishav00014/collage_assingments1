#include<stdio.h>

int main(){
	int a,s,m;
	m=1;
	s=0;
	printf("Enter first digit \n");
	scanf("%d",&a);
	while(a!=0)
	{
		s=s+(a%10);
		m=m*(a%10);
		a=a/10;
	}
	printf("Sum of digits is    : %d \n",s);
	printf("Product of digitd is : %d \n",m);
	return 0;
}
