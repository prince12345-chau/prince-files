//anurag demo
#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i])
	}
	for(int i=0,j=1;i<5,j<5;i++,j++){
		if((arr[i]%10<arr[j]%10)&&(arr[i] != 0))
			last=i;
		else
		last -j
	}
return 0;
}
