#include <stdio.h>

	void creatMatran(int n, int m, int matran[n][m]){
		printf("Nhap cac phan tu cua ma tran:\n");
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				printf("Phan tu [%d][%d]: ", i, j);
				scanf("%d", &matran[i][j]);
			}
		}
	}
	void printMatran(int n, int m, int matran[n][m]){
		printf("Ma tran vua nhap la:\n");
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				printf("%d ", matran[i][j]);
				
			}
			printf("\n");
		}
	}
	int main(){
		int n,m;
		printf("Moi ng dung nhap so hang ma tran: ");
		scanf("%d", &n);
		printf("Moi ng dung nhap so cot ma tran: ");
		scanf("%d", &m);
		int matran[n][m];
		creatMatran(n,m,matran);
		printMatran(n,m,matran);
		return 0;
		
	}
	

