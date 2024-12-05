#include <stdio.h>

int main(){
	int arr[100];
	int n,m,currentLength;

do{
	
	printf("\n		----MENU----\n");  
	printf("1.Nhap so phan tu va gia tri cho mang \n"); 
	printf("2.In ra gia tri cac phan tu trong mang theo dang \n"); 
	printf("3.Dem so luong cac so hoan hao co trong mang \n"); 
	printf("4.Tim gia tri nho thu 2 trong mang khong duoc sap xep mang \n"); 
	printf("5.Them mot phan tu vao vi tri ngau nhien trong mang \n"); 
	printf("6.Xoa phan tu tai mot vi tri cu the \n"); 
	printf("7.Sap xep mang theo thu tu tang dan \n"); 
	printf("8.Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so le dung truoc so chan dung sau \n"); 
	printf("9.Kiem tra xem mang co phai mang tang dan hay khong \n"); 
	printf("10.Thoat khoi chuong trinh \n"); 
	scanf("%d",&m);
	switch(m){
		case 1:
			do{
				printf("moi ban nhap so nguyen duong tu (1den100) ");
				scanf("%d",&n);
				if(n<=0){
					printf("BAN NHAP LOI CU PHAP ");
				}
			}while(n<=0 || n>=100);
				for(int i=0;i<n;i++){
					printf("moi ban nhap vi tri [%d] ",i);
					scanf("%d",&arr[i]);
				}
				currentLength=n;
				int min_arr;
    			int min_number;
			break; 
		case 2:
			if(currentLength<=0){
				printf("moi ban nhap giai tri vao mang");
				break;
			}else{
				for(int i=0;i<currentLength;i++){
					printf("arr[%d]=%d\n",i,arr[i]);
				}
			}
			break;
		case 3:
			if(currentLength<=0){
				printf("moi ban nhap giai tri vao mang");
				break;
			}else{
				int cnt,count; 
			}
			break;
		case 4:
			min_arr=arr[0];
			min_number=arr[0];
				for(int i=0;i<currentLength;i++){
					if(arr[min_arr]>arr[i]){
						min_arr=arr[i]; 
					}
				}
				for(int i=0;i<currentLength;i++){
					if(arr[min_number]>arr[i]){
						if(arr[i]!=min_arr){
						min_number=arr[i];
						}
					}
				}
				printf("phan tu nho thu 2 cua mang la %d",min_number);
			break;
		case 5:
			if(currentLength<=0){
				printf("moi ban nhap gai tri vao mang");
				break;
			}else if(currentLength>=100){
				printf("mang cua ban da day");
				break;
			}else{
				int value, index;
		        printf("Nhap gia tri phan tu can them: ");
		        scanf("%d", &value);
		        do {
		            printf("Nhap vi tri can chen (0 - %d): ", currentLength);
		            scanf("%d", &index);
		            if (index < 0 || index > currentLength) {
		                printf("Vi tri khong hop le! Moi nhap lai.\n");
		            }
		        }while (index < 0 || index > currentLength);      
		            for (int i = currentLength; i > index; i--) {
		                arr[i] = arr[i - 1];
		            }
		            arr[index] = value;
		            currentLength++;
		            printf("Mang sau khi them: ");
		            for (int i = 0; i < currentLength; i++) {
		                printf("%d ", arr[i]);
		            }
		            printf("\n");
		    }
			break;
		case 6:
			if(currentLength<=0){
					printf("moi ban nhap giai tri can vao mang\t");
					break;
			}else {
				int xoa_phantu;
				do{
	                printf("Nhap vi tri phan tu can xoa(0 den %d): ",currentLength-1);
	                scanf("%d", &xoa_phantu);
	                if(xoa_phantu>currentLength){
	                	printf("moi ban nhap lai gia tri can xoa");
					}
			    }while(xoa_phantu>currentLength);
	                for(int i=xoa_phantu;i<currentLength;i++){
	                	if(xoa_phantu==i){
	                		arr[i]=arr[i+1];
						}
					}
				currentLength--;
				printf("mang sau khi xoa pha");
				for(int i=0;i<currentLength;i++){
							printf("%d\t",arr[i]);
				}
			}
			break;
		case 7:
			if(currentLength<=0){
					printf("moi ban nhap giai tri can vao mang");
					break;
			}else {
				printf("day la mang sau khi sap xep theo thu tu tang dan");
				for(int i=0;i<n-1;i++){
					for(int j=i+1;j<n;j++){
						if(arr[i]>arr[j]){
							int temp=arr[i];
							arr[i]=arr[j];
							arr[j]=temp;
						}
					}
				}
				for(int i=0;i<currentLength;i++){
					printf("%d\t",arr[i]);
				}
			}
			break;
		case 8:
			if(currentLength<=0){
					printf("moi ban nhap giai tri can vao mang");
					break;
			}else {
				printf("dau la mang sau khi sap xep theo thu tu tang dan");
				for(int i=0;i<n-1;i++){
					for(int j=i+1;j<n;j++){
						if(arr[i]>arr[j] && arr[j]%2!=0){
							int temp=arr[i];
							arr[i]=arr[j];
							arr[j]=temp;
						}
					}
				}
				for(int i=0;i<n-1;i++){
					for(int j=i+1;j<n;j++){
						if(arr[i]>arr[j] && arr[j]%2==0){
							int temp=arr[i];
							arr[i]=arr[j];
							arr[j]=temp;
						}
					}
				}
				for(int i=0;i<currentLength;i++){
					printf("%d\t",arr[i]);
				}
			}
			break;
		case 9:
			break;
		case 10:
			printf("BAN DA THOAT KHOI CHUONG TRINH");
			return 0;
		default:
			printf("moi ban nhap lai lua chon"); 
 		}
	}while(1); 
}
