#include <stdio.h>
#include <string.h>
struct hocsinh {
	int id;
	char ten[50];
};
void main() {
	int i;
	struct hocsinh st[5];
	printf("Nhap thong tin 5 sinh vien: \n");
	for (int i = 0; i < 5; i++)
	{
		printf("Nhap ID: ");
		scanf_s("%d", &st[i].id);
		printf("Nhap ten: ");
		scanf_s("%s", &st[i].ten);
	}
	printf("Danh sach cac sinh vien: \n");
	for (int i = 0; i < 5; i++)
	{
		printf("ID: %d, Ten: %s\n", st[i].id, st[i].ten);
	}
}