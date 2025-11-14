#include<stdio.h>
int main(){
	int n,i;
	float x[100];
	double sum=0,average,s=0;
	printf("请输入0-100的整数：\n");
	scanf("%d",&n);
	printf("请输入%d个数：",n);
	for(i=0;i<n;i++){
		scanf("%f",&x[i]);
		sum+=x[i];
	}
    average=sum/n;
	for(i=0;i<n;i++){
	    s+=(x[i]-average)*(x[i]-average);	
	}
	printf("%.2f",s);
	return 0;	
}
