#include <stdio.h>

int main(){
	
	int array[100][100];
	int a,a1,a2;
	int sum=0,product=1,max,maxSum,rowSum;
	do {
		printf("----menu-----\n");
		printf(" 1.nhap kich co va gia tri cac phan tu cua mang\n 2.in gia tri cac phan tu cua mang theo ma tran\n 3.in gia tri cac phan tu la le va tinh tong\n 4.in ra cac phan tu nam tren duong bien va tinh tich\n 5.in ra cac phan tu nam tren duong cheo chinh\n 6.in ra cac phan tu nam tren duong cheo phu\n 7.in ra dong co tong gia tri cac phan tu lon nhat\n 8.thoat\n");
		scanf("%d",&a);
		if (a==1){
			printf("moi ban nhap so dong \n");
			scanf("%d",&a1);
			printf("moi ban nhap so cot \n");
			scanf("%d",&a2);
			array[100][100]=array[a1][a2];
			for (int i=0;i<a1;i++){
				for (int j=0;j<a2;j++){
					printf ("moi ban nhap gia tri phan tu cua array[%d][%d] ",i,j);
					scanf("%d",&array[i][j]);
				}
			}
		}
		if (a==2){
			for (int i=0;i<a1;i++){
				for (int j=0;j<a2;j++){
					printf(" %d ",array[i][j]);
				}
				printf("\n");
			}
		}
		if (a==3){
			for (int i=0;i<a1;i++){
				for (int j=0;j<a2;j++){
					if (array[i][j]%2!=0){
						printf("gia tri phan tu le la %d \n",array[i][j]);
						sum+=array[i][j];
					}
				}
			}
			printf("tong la %d \n",sum);
		}
		if (a==4){
			printf ("cac phan tu duong bien :  ");
			for (int i=0;i<a1;i++){
				for (int j=0;j<a2;j++){
					if (i==0 || i==a1-1 || j==0 || j==a2-1){
						printf ("%d\t",array[i][j]);
						product*=array[i][j];
					}
				}
			}
			printf("tich la %d \n",product);
		}
		if (a==5){
			for (int i=0;i<a1;i++){
				if (a1==a2){
					printf(" %d \n",array[i][i]);
				} else {
					printf("khong the thuc hien vi mang cua ban khong phai ma tran vuong \n");
				}
			}
		}
		if (a==6){
			for (int i=0;i<a1;i++){
				if (a1==a2){
					printf(" %d \n",array[i][a1-1-i]);
				} else {
					printf("khong the thuc hien vi mang cua ban khong phai ma tran vuong \n");
				}
			}
		}
		if (a==7){
			for (int i=0;i<a1;i++){
				max=0;
				for (int j=0;j<a2;j++){
					maxSum+=array[i][j];
				}
				if (maxSum>max){
					max=maxSum;
					rowSum=i;
				}
			}
			printf("dong co tong lon nhat la dong %d voi tong la %d \n",rowSum,max);
		}
	} while (a!=8);
	
	
	
	return 0;
}
