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
	int stt;
	int size = 5;
	int searchID;
	int check = 0;
	
	do{
		printf("\n--------MENU--------\n");
		printf("1. In ra Thong Tin Sinh Vien.\n");
		printf("2. Them Thong Tin Sinh Vien.\n");
		printf("3. Thoat.\n");
		printf("Nhap lua chon cua ban: ");
		scanf("%d", &choice);
		fflush(stdin);
		stt = size;
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
				if(stt < 100){
					printf("\n");
					sv[stt].id = stt + 1;
					printf("Nhap ten sinh vien: ");
					fgets(sv[stt].name,sizeof(sv[stt].name),stdin);
					sv[stt].name[strcspn(sv[stt].name,"\n")] = '\0';
					printf("Tuoi: ");
					scanf("%d", &sv[stt].age);
					fflush(stdin);
					printf("Nhap std Sinh Vien: ");
					fgets(sv[stt].phoneNumber,sizeof(sv[stt].phoneNumber),stdin);
					sv[stt].phoneNumber[strcspn(sv[stt].phoneNumber,"\n")] = '\0';
					size++;	
				}else{
					printf("Da gioi han so sinh vien!\n");
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
