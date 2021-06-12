#include<stdio.h>
int fact(int n){
	long long int f=1;
	int i=n;
	while(i>0){
		f*=i;
		i--;
	}
	return f;
}
int main(){
	long long int n,r;
	printf("Enter values of n and r\n");
	scanf("%lld %lld",&n,&r);
	long long int p;
	if(r>n)
	{
		printf("Invalid Input");
	}
	else{
	
	p=fact(n)/fact(n-r);
	printf("%dP%d=%lld",n,r,p);
	}
	return 0;
}
