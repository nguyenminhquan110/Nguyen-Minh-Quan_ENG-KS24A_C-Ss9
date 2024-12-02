#include<stdio.h>

int main(){
	int a[100];
	int n;
	
	printf("Moi ban nhap vao so phan tu: ");
	scanf("%d",&n);
	
	for(int i = 0;i < n;i++){
		printf("Moi ban nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int index; 
	int value; 
	printf("Moi ban nhap vi tri muon chen: ");
	scanf("%d",&index);
	printf("Moi ban nhap gia tri muon chen: ");
	scanf("%d",&value);
	
	if( index > n -1){
		index = value;
		index < n -1;
	}
	for(int i = n;i > index;i--){
		a[i] = a[i - 1];
	}
	a[index] = value;
	for(int i = 0; i < n + 1;i++){
		printf("%d",a[i]);
	}
	
	return 0;
}

