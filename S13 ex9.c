#include <stdio.h>

int main(){
    int n,m;
    int arr[100][100];
	int chose;
	do {
		printf("MENU \n");
		printf("1. Nhap gia tri cac phan tu cua mang\n");
		printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
		printf("3. In ra cac phan tu o goc theo ma tran\n");
		printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
		printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
	    printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
	    printf("7. Thoat\n");
	    
	    scanf("%d",&chose);
	    switch(chose){
	    	case 1:
	    		printf("Nhap so hang: ");
	    		scanf("%d",&n);
	    		printf("Nhap so cot: ");
	    		scanf("%d",&m);
	    		printf("Nhap cac phan tu cua mang (%dx%d):\n",n,m);
	    		for (int i=0;i<n;i++){
	    			for (int j=0;j<m;j++){
	    				printf("arr[%d][%d]: ",i,j);
	    				scanf("%d",&arr[i][j]);
					}
				}
				break;
			case 2:
				printf("Ma tran:\n");
				for (int i=0;i<n;i++){
					for (int j=0;j<m;j++){
						printf("%d ",arr[i][j]);
					}
					printf("\n");
				}
				break;
			case 3:
			 printf("Cac phan tu o goc:\n");
                printf("%d %d\n", arr[0][0], arr[0][m - 1]);
                printf("%d %d\n", arr[n - 1][0], arr[n - 1][m - 1]);
                break;
	        case 4:
	        	  printf("Cac phan tu tren duong bien:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                            printf("%d ", arr[i][j]);
                        } else {
                            printf("  "); 
                        }
                    }
                    printf("\n");
                }
                break;
            case 5:
            	printf("Cac phan tu tren duong cheo chinh va phu:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        if (i == j || i + j == m - 1) {
                            printf("%d ", arr[i][j]);
                        } else {
                            printf("  "); 
                        }
                    }
                    printf("\n");
                }
                break;
            case 6:
            	printf("Cac so nguyen to la:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        if ((arr[i][j]%2!=0 && arr[i][j]%3!=0 && arr[i][j]%5!=0 && arr[i][j]%7!=0 && arr[i][j]!=1) || arr[i][j]==2 || arr[i][j]==3 || arr[i][j]==5 || arr[i][j]==7) {
                            printf("%d ", arr[i][j]);
                        }
                    }
                }
                printf("\n");

            	break;
            case 7:
            	 printf("Thoat chuong trinh\n");
                break;

            default:
                printf("Lua chon khong hop le\n");
                break;

            	
}
} while(chose!=7);
   return 0;
}
