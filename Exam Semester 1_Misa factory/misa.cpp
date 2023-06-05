#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
struct NhanVien
{
    char id[7];
    char tenNV[50];
    int NamSinh;
    long Luong;
    char phongBan;
};

void nhap(NhanVien nv[], int soNV)
{
    for (int i = 0; i < soNV; i++)
    {
        printf("Ma nhan vien %d: ", i + 1);
        fflush(stdin); 
        gets_s(nv[i].id);
        gets_s(nv[i].id);
        printf("Ten nhan vien %d: ", i + 1);
        fflush(stdin); 
        gets_s(nv[i].tenNV);
        printf("Nam sinh nhan vien %d: ", i + 1);
        scanf("%d", &nv[i].NamSinh);
        printf("Luong nhan vien %d: ", i + 1);
        scanf("%d", &nv[i].Luong);
        printf("Phong ban cua nhan vien %d: ", i + 1);
        scanf("%c", &nv[i].phongBan);
        scanf("%c", &nv[i].phongBan);
    }
}

void xuat(NhanVien nv[], int soNV)
{
    printf("-----------Thong tin nhan vien-----------\n");
    printf("%s\t\t%s\t\t%s\t%s\t%s", "Ma nhan vien", "Ten nhan vien", "Nam sinh", "Luong", "Phong ban");
    for (int i = 0; i < soNV; i++)
    {
        printf("\n%s\t\t\t%s\t\t%d\t\t%ld\t%c", nv[i].id, nv[i].tenNV, nv[i].NamSinh, nv[i].Luong, nv[i].phongBan);
    }
}

void TimNV_LuongCaoNhat(NhanVien nv[], int soNV)
{
    printf("\n");
    int max = nv[0].Luong, vt = 0, count = 0;
    for (int i = 0; i < soNV; i++)
    {
        for (int k = i + 1; k < soNV; k++)
        {
            if (nv[i].Luong == nv[k].Luong)
                count++;
        }
    }
    if (count == soNV - 1)
        printf("Tat ca nhan vien co luong bang nhau");
    else
    {
        for (int i = 0; i < soNV; i++)
        {
            if (nv[i].Luong > max)
                vt = i;
        }
        printf("Nhan vien co luong cao nhat la %s", nv[vt].tenNV);
    }
}

int NVthuocB(NhanVien nv[], int soNV)
{
    printf("\n");
    int count = 0;
    for (int i = 0; i < soNV; i++)
    {
        if (nv[i].phongBan == 'B')
            count++;
    }
    return count;
}
void main()
{
    int soNV;
    NhanVien nv[100];
    printf("Nhap so nhan vien: ");
    do {
        scanf("%d", &soNV);
        if (soNV < 1 || soNV > 100)
            printf("Vui long nhap lai: ");
    } while (soNV < 1 || soNV > 100);


    nhap(nv, soNV);
    xuat(nv, soNV);
    TimNV_LuongCaoNhat(nv, soNV);
    printf("\nSo nhan vien thuoc phong ban B la %d", NVthuocB(nv, soNV));
}