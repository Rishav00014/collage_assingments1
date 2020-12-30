
#include<stdio.h>

int main(){
	int n,i;
	float sum;
	printf("s=1+1/2+1/3+1/4.........\n");
	printf("Enter number of term till series continue :\n");
	scanf("%d",&n);
	i=1;
	while(i<=n){
		sum=sum+1/(float)i;
		i++;
	}
	printf("Calculated value of series till %d is  :%f \n",n,sum);

	return 0;
}
