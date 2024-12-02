#include <stdio.h>

int main(){
	
	int array[100];
	int index,a;
	printf("moi ban nhap so luong ");
	scanf("%d",&a);
	
	for (int i=0;i<a;i++){
		
	    printf("moi ban nhap phan tu thu %d: ",i);
	    scanf("%d",&array[i]);
	}
    printf("moi ban nhap vi tri muon xoa ");
	scanf("%d",&index);
	
	for(int i=index;i<a;i++){
		array[i]=array[i+1];
	}
	for(int i=0;i<a-1;i++){
		printf(" %d ",array[i]);
	}
	
	return 0;
}
