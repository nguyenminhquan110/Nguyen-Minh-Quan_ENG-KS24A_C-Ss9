#include <stdio.h>
int a,a1,sum=0,sum1=0,a2,dem=0,a3,index;
int array[100];
int max,min;

int flag(int n){
	if (n<2){
		return 0;
	}
	for (int i=2;i<n;i++){
		if (n%i==0){
			return 0;
		}
	}
	
	return 1;
}

int main (){
	
	do {
		printf(" Menu \n");
		printf(" 1.nhap so luong phan tu va gia tri\n 2.in ra cac phan tu dang quan ly\n 3.in ra gia tri cac phan tu chan va tinh tong\n 4.in ra gia tri lon nhat va nho nhat trong mang\n 5.in ra cac phan tu la so nguyen to trong mang va tinh tong\n 6.nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n 7.them mot phan tu vao vi tri chi dinh\n 8.thoat\n");
		scanf("%d",&a);
		if (a==1){
			printf("moi ban nhap so luong phan tu ");
			scanf("%d",&a1);	
			array[100]=array[a1];
			for (int i=0;i<a1;i++){
				printf("moi ban nhap gia tri cho phan tu thu %d ",i);
				scanf("%d",&array[i]);
			}
		}
		if (a==2){
			printf("gia tri cac phan tu dang quan ly la : \n");
			for (int i=0;i<a1;i++){
				printf("gia tri phan tu thu %d la %d \n",i,array[i]);
			}
		}
		if (a==3){
			for (int i=0;i<a1;i++){
				if (i%2==0 & i!=0 ){
					printf("gia tri cua phan tu chan  %d la %d \n",i,array[i]);
					sum+=array[i];
				}
			}
			printf("tong gia tri phan tu chan la %d \n",sum);
		}
		if (a==4){
			max=array[0];
			min=array[0];
			for (int i=0;i<a1;i++){
				if (array[i]>max){
					max=array[i];
				}
				if (array[i]<min){
					min=array[i];
				}
			}
			printf("gia tri nho nhat trong mang la %d \n",min);
			printf("gia tri lon nhat trong mang la %d \n",max);
		}
		if (a==5){
			
			for (int i=0;i<a1;i++){
				if (flag(array[i]) == 1 ){
					printf("so nguyen to %d \n",array[i]);
					sum1+=array[i];
				}
			}
			printf("tong la %d \n",sum1);
		}
		if (a==6){
			printf("moi ban nhap mot so ");
			scanf("%d",&a2);
			for (int i=0;i<a1;i++){
				if (a2==array[i]){
					dem++;
				}
			}
			printf("so %d xuat hien %d trong mang \n",a2,dem);
		}
		if (a==7){
			printf("moi ban nhap vi tri phan tu muon them \n");
			scanf("%d",&index);
			printf("moi ban nhap gia tri muon them \n");
			scanf("%d",&a3);
			for (int i=a1+1;i>=index;i--){
				array[i]=array[i-1];
			}
			array[index]=a3;
			for (int i=0;i<a1+1;i++){
				printf("gia tri phan tu thu %d la %d \n",i,array[i]);
			}
		}
	} while (a!=8);
	
	
	
	
	return 0;
}
