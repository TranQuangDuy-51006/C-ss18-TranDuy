#include<stdio.h>
#include<string.h>

int main(){
	struct sinhVien{
		int id;
		char name[100];
		int age;
		char phoneNumber[15];
	};
	int choice;
	
	struct sinhVien sv[100] = {
		{1, "Nguyen Xuan Bach", 35, "097864562"},
		{2, "Trinh Tran Phuong Huong", 20, "0978798763"},
		{3, "Tran Nha Nhot", 50, "0975353626"},
		{4, "Nguyen An Luc", 15, "08346346"},
		{5, "Do Gia Hun", 10, "0254646367"}
	};
	int size = 5;
	int searchID;
	int check = 0;
	
	do{
		printf("\n--------MENU--------\n");
		printf("1. In ra Thong Tin Sinh Vien.\n");
		printf("2. Sua Thong Tin Sinh Vien.\n");
		printf("3. Thoat.\n");
		printf("Nhap lua chon cua ban: ");
		scanf("%d", &choice);
		fflush(stdin);
		switch(choice){
			case 1:
				printf("\n");
				for(int i = 0; i < size; i++){
					printf("%d. ", sv[i].id);
					printf("%s: ", sv[i].name);
					printf("%d - ", sv[i].age);
					printf("%s\n", sv[i].phoneNumber);
				}
				break;
			case 2:
				int search;
				
				printf("Nhap ID sinh vien: ");
				scanf("%d", &search);
				fflush(stdin);
				for(int i = 0; i < size; i++){
					if(search == sv[i].id){
						check = 1;
						printf("Sua Ten Sinh Vien: ");
						fgets(sv[i].name,sizeof(sv[i].name),stdin);
						sv[i].name[strcspn(sv[i].name,"\n")] = '\0';
						printf("Sua Tuoi: ");
						scanf("%d", &sv[i].age);
						fflush(stdin);
						printf("Sua std Sinh Vien: ");
						fgets(sv[i].phoneNumber,sizeof(sv[i].phoneNumber),stdin);
						sv[i].phoneNumber[strcspn(sv[i].phoneNumber,"\n")] = '\0';
						
						
					}
				}
				if(check == 0){
					printf("Khong tim thay sinh vien!\n");
				}
				break;
			case 3:
				printf("Thoat!");
				break;
			default:
				printf("\nsai cu phap!\n");
		}
	}while(choice != 3);
	

	
	return 0;
}
