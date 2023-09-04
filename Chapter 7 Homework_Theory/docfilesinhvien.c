#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct SinhVien {
    char MaSV[50];
    char TenSV[50];
    float DTK; // điểm tổng kết
}SinhVien;

int docFile(SinhVien sv[], int n, int *point_n, char* file) {
    FILE* fp = fopen(file, "r");
    //kiem tra filew
    if (fp == NULL) {
        printf("Loi file!\n");
        return 0;
    }
    //doc du lieu tu file gan vao n
    fscanf(fp, "%d", &n);
    point_n = &n;
    printf("So sinh vien la: %d\n", *point_n);

    for (int i = 0; i < n; i++) {
        fscanf(fp, "%s%s%f", &sv[i].MaSV, &sv[i].TenSV, &sv[i].DTK);
    }
    fclose;
    return 1;
}

void xuat(SinhVien sv[100], int n) {
    //in ma tran ra man hinh
    printf("-----Danh sach sinh vien-----\n");
    printf("MaSV \t TenSv \t DTK \n");
    for (int i = 0; i < n; i++) {
        printf("%s \t %s \t %0.2f \n", sv[i].MaSV, sv[i].TenSV, sv[i].DTK);
    }
    //dong file
    
}

int main()
{
    SinhVien sv[100];
    int n;
    int *point;
    char infile[] = "dssv.txt";
    if (docFile(sv, n, point, infile) == 0)
        exit(0);
    xuat(sv, n);
    return 0;
}