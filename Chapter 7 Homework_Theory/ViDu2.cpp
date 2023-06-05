#include <stdio.h>
#include <string.h>

struct nhanvien {
	int id;
	char ten[50];
	struct ngay {
		int day;
		int month;
		int year;
	}birthday;
} nv1;

void main() {
	nv1.id = 1;
	strcpy_s(nv1.ten, "Diem Thanh");
	nv1.birthday.day = 1;
	nv1.birthday.month = 8;
	nv1.birthday.year = 2004;
	printf("ID Nhan vien: %d\n", nv1.id);
	printf("Ten nhan vien: %s\n", nv1.ten);
	printf("Sinh nhat nhan vien (dd/mm/yyyy): %d/%d/%d\n", nv1.birthday.day, nv1.birthday.month, nv1.birthday.year);
}