#include<stdio.h>
int main(){
	int num,i,j;
	printf("请输入5个数字：\n");
	for(i=0;i<5;i++){
		printf("请输入第%d个数：",i+1);
		scanf("%d",&num);
	for(j=0;j<num;j++){
		printf("*");
	}
	printf("\n");
}
	return 0;
}
