#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arr[], int n, int isAscending) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((isAscending && arr[i] > arr[j]) || (!isAscending && arr[i] < arr[j])) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[100], n = 0, choice, pos, value;
    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. Them mot phan tu vao vi tri chi dinh\n");
        printf("4. Sua mot phan tu o vi tri chi dinh\n");
        printf("5. Xoa mot phan tu o vi tri chi dinh\n");
        printf("6. Sap xep cac phan tu\n");
        printf("   a. Giam dan\n");
        printf("   b. Tang dan\n");
        printf("7. Tim kiem phan tu nhap vao\n");
        printf("   a. Tim kiem tuyen tinh\n");
        printf("   b. Tim kiem nhi phan\n");
        printf("8. Thoat\n");
        printf("Lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
              
                printf("Nhap gia tri cac phan tu:\n");
                for (int i = 0; i < n; i++) {
                    printf("arr[%d] = ", i);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                printf("Gia tri cac phan tu:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3:
                printf("Nhap vi tri can them (0 - %d): ", n);
                scanf("%d", &pos);
              
                printf("Nhap gia tri can them: ");
                scanf("%d", &value);
                for (int i = n; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = value;
                n++;
                break;

            case 4:
                printf("Nhap vi tri can sua (0 - %d): ", n - 1);
                scanf("%d", &pos);
               
                printf("Nhap gia tri moi: ");
                scanf("%d", &value);
                arr[pos] = value;
                break;

            case 5:
                printf("Nhap vi tri can xoa (0 - %d): ", n - 1);
                scanf("%d", &pos);
               
                for (int i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                break;

            case 6: {
                int subChoice;
                printf("1. Sap xep giam dan\n");
                printf("2. Sap xep tang dan\n");
                printf("Lua chon: ");
                scanf("%d", &subChoice);
                if (subChoice == 1) {
                    sortArray(arr, n, 0);
                    printf("Da sap xep giam dan\n");
                } else if (subChoice == 2) {
                    sortArray(arr, n, 1);
                    printf("Da sap xep tang dan\n");
                } else {
                    printf("Lua chon khong hop le!\n");
                }
                break;
            }

            case 7: {
                int subChoice, key;
                printf("1. Tim kiem tuyen tinh\n");
                printf("2. Tim kiem nhi phan\n");
                printf("Lua chon: ");
                scanf("%d", &subChoice);
                printf("Nhap gia tri can tim: ");
                scanf("%d", &key);
                if (subChoice == 1) {
                    int found = 0;
                    for (int i = 0; i < n; i++) {
                        if (arr[i] == key) {
                            printf("Tim thay %d tai vi tri %d\n", key, i);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) printf("Khong tim thay %d\n", key);
                } else if (subChoice == 2) {
                    sortArray(arr, n, 1); 
                    int index = binarySearch(arr, 0, n - 1, key);
                    if (index != -1) {
                        printf("Tim thay %d tai vi tri %d (sau khi sap xep)\n", key, index);
                    } else {
                        printf("Khong tim thay %d\n", key);
                    }
                } else {
                    printf("Lua chon khong hop le!\n");
                }
                break;
            }

            case 8:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
    } while (choice != 8);

    return 0;
}

