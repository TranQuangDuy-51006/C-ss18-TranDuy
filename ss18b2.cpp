#include<stdio.h>
#include<string.h>

int main(){
	struct sinhVien{
		char name[100];
		int age;
		char phoneNumber[15];
	};
	
	struct sinhVien nguoiT1;
	printf("Nhap ten: ");
	fgets(nguoiT1.name, sizeof(nguoiT1.name), stdin);
	printf("Nhap tuoi: ");
	scanf("%d", &nguoiT1.age);
	fflush(stdin);
	printf("Nhap std: ");
	fgets(nguoiT1.phoneNumber, sizeof(nguoiT1.phoneNumber), stdin);
	printf("Ten: %s", nguoiT1.name);
	printf("Tuoi: %d\n", nguoiT1.age);
	printf("STD: %s\n", nguoiT1.phoneNumber);
	return 0;
}
