#include<stdio.h>
int main(){
	int a[7],i;
	int max,min;
	printf("请输入7个整数：\n");
	for(i=0;i<7;i++){
	scanf("%d",&a[i]);
}
	max=min=a[0];
	for(i=0;i<7;i++){
		if(max<a[i]) max=a[i];
		if(min>a[i]) min=a[i];
	}
	printf("max=%d",max);
	printf("min=%d",min);
	return 0;
}
