#include<stdio.h>
#include<string.h>

int main(){
	struct sinhVien{
		char name[100];
		int age;
		char phoneNumber[15];
	};
	
	struct sinhVien nguoiT1 = {"XB", 35, "09824615534"};
	printf("Ten: %s\n", nguoiT1.name);
	printf("Tuoi: %d\n", nguoiT1.age);
	printf("STD: %s\n", nguoiT1.phoneNumber);
	return 0;
}
