#include<stdio.h>
int main(){
	int n,i,j,sum=0;
	int x[100];
	printf("请输入0-100的整数：\n");
	scanf("%d",&n);
	printf("请输入%d个整数：\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++){
		if(x[i]>0){
		  for(j=0;j<n;j++){
		  	if(x[j]==-x[i]){
		  		sum++;
		  		break;
			  }
		  }	
		}
	}
	printf("相反数对的数量为：%d\n",sum);
	return 0;
}
