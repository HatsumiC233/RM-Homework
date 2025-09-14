#include<stdio.h>
int main(){
	int a;
	int grp[30];
	int s;
	//int num=1;
	int cot=0;
	//int ccl[30];
	
	scanf("%d",&s);
	
	for(int i=1;i<=s;i++){
		printf("%d ",i);
		scanf("%d",&a);
		
		grp[cot]=a;
		cot++;
	}
	
	//ccl[0]=1;
	
	for(int i2=0;i2<s;i2++){
		
		int num=1;
		int ccl[30];
		ccl[0]=1;
		
		for(int i3=1;i3<=grp[i2];i3++){
			ccl[i3]=num;
			num+=ccl[i3-1];	
		}
		
		printf("%d ",i2+1);
		printf("%d\n",ccl[grp[i2]-1]);
	}
	//for(int i2=0;i2<=0;i2++){
	//	printf("%d ",i2+1);
	//	printf("%d",grp[i2]);
	//}	
	
	
	
	return 0;	
}
