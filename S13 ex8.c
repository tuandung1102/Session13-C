#include <stdio.h>
int findUCLN(int a, int b){
	while (b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
int main(){
	int number[2];
	printf("Moi ng dung nhap so thu nhat: ");
	scanf("%d",&number[0]);
	printf("Moi ng dung nhap so thu hai: ");
	scanf("%d",&number[1]);
	int UCLN=findUCLN(number[0],number[1]);
	printf("Uoc chung lon nhat cua %d va %d la: %d\n",number[0],number[1],UCLN);
	return 0;
}

