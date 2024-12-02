#include <stdio.h>

int main(){

	int a1,a2=0;
	int array[100];
	int index,n,n1,n2;
	int b,c;
	do {
		printf(" 1.nhap vao mang\n 2.hien thi mang\n 3.them phan tu\n 4.sua phan tu\n 5.xoa phan tu\n 6.thoat\n");
		scanf("%d",&a1);
		if (a1==1){
			array[100]=array[a2];
			printf("moi ban nhap so phan tu cho mang ");
			scanf("%d",&a2);
			for (int i=0;i<a2;i++){
				printf("moi ban nhap gia tri cho phan tu thu %d : ",i);
				scanf("%d",&array[i]);
			}
		}
		if (a1==2){
			if (a2>0){
				printf("array[%d] \n",a2);
			    for (int i=0;i<a2;i++){
				printf("gia tri cua phan tu thu %d la %d \n",i,array[i]);
			}
			} else {
				printf("ban chua nhap mang \n");
			}
		}
		if (a1==3){
			printf("moi ban nhap vi tri muon them phan tu ");
			scanf("%d",&index);
			printf("moi ban nhap gia tri ");
			scanf("%d",&n);
			for (int i=a2+1;i>index;i--){
				array[i]=array[i-1];
			}
			array[index]=n;
			a2++;
		}
		if (a1==4){
			printf("moi nhap nhap vi tri can sua ");
			scanf("%d",&n1);
			printf("moi ban nhap gia tri moi ");
			scanf("%d",&b);
			array[n1]=b;
		}
		if (a1==5){
			printf("moi ban nhap phan tu muon xoa ");
			scanf("%d",&c);
			for (int i=c;i<a2;i++){
				array[i]=array[i+1];
			}
		}
	} while (a1!=6);
		
	
	
	return 0;
}
