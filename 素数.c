#include<stdio.h>
#include<math.h>
int main(){
int isPrime(int n){
	if (n<=1)return 0;
	if(n==2)return 1;
	if(n%2==0)return 0;
	int limit=sqrt(n);
	int i;
	for(i=3;i<=limit;i+=2){
		if (n%i==0){
			return 0;
		}
	}
	return 1;
}
}
