#include<stdio.h>
#include<string.h>

int main(){
	struct sinhVien{
		int id;
		char name[100];
		int age;
		char phoneNumber[15];
	};
	
	sinhVien nguoiT[5];
	for(int i = 0; i < 5; i++){
		printf("Nhap thong tin sinh vien thu %d: \n", i + 1);
		nguoiT[i].id = i+1; 
		printf("Nhap ten: ");
		fgets(nguoiT[i].name, sizeof(nguoiT[i].name), stdin);
		printf("Nhap tuoi: ");
		scanf("%d", &nguoiT[i].age);
		fflush(stdin);
		printf("Nhap std: ");
		fgets(nguoiT[i].phoneNumber, sizeof(nguoiT[i].phoneNumber), stdin);
	}
	printf("THONG TIN CUA CAC SINH VIEN\n");
	for(int i = 0; i < 5; i++){
		printf("ID: %d\n", nguoiT[i].id);
		printf("Ten: %s", nguoiT[i].name);
		printf("Tuoi: %d\n", nguoiT[i].age);
		printf("STD: %s\n", nguoiT[i].phoneNumber);
	}

	return 0;
}
