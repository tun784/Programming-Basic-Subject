//#include <stdio.h>
//#include <string.h>
//
//void ChuanHoaChuoi(char x[])
//{
//	int n = strlen(x);
////Xoa ky tu trong cuoi chuoi
//	for (int i = 0; i<n; i++)
//	{
//		if (x[i] == ' ')
//		{
//			for (int j = i; j < n - 1; j++)
//			{
//				x[j] = x[j + 1];
//			}
//			x[n - 1] = NULL;
//			i--;
//			n--;
//		}
//		else break;
//	}
////Xoa ky tu trong dau chuoi
//	for (int i = n - 1; i >= 0; i--)
//	{
//		if (x[i] == ' ')
//		{
//			x[i] = NULL;
//			n--;
//		}
//		else break;
//	}
////Xoa ky tu trong khong hop le (giua 2 tu chi co 1 ky tu trong)
//	for (int i = 1; i<n - 1; i++)
//	{
//		if (x[i] == x[i + 1]){
//			for (int j = i; j<n - 1; j++){
//				x[j] = x[j + 1];
//			}
//			x[n - 1] = NULL;
//			i--;
//			n--;
//		}
//	}
//}
//
////Dem so tu trong chuoi
//    void DemSoTuTrongChuoi(char x[])
//{ 
//    int i;
//    int soTu=0;
//    for(i=0; i<strlen(x)-1; i++)
//    {
//        if(x[i]==' ' && x[i+1]!=' ') 
//        {
//            soTu++;
//        }
//    }
//       if(x[0]!=' ') 
//       {
//         soTu++;
//       }
//        printf("\nChuoi \"%s\" co %d tu.",x,soTu);
//}
//
////Dao nguoc chuoi
//int Length(char s[])
//{
//    int i = 0;
//    while (s[i] != NULL)
//        ++i;
//    return i ;
//}
//char *DaoNguoc(char str[])
//{
//    int length = Length(str);
//    char *temp = new char[length + 1];
//    for (int i = 0; i < length; i++)
//    {
//        temp[i] = str[length - 1 - i];
//    }
//    temp[length] = NULL;
//    return temp;
//}
// 
//void InDaoNguoc(char str[])
//{
//    int length = Length(str);
//    printf("\nChuoi sau khi dao nguoc la: ");
//    for (int i = length - 1; i >= 0; i--)
//    {
//        printf("%c", str[i]);
//    }
//}
//
//void InHoaKyTuDau(char s[])
//{
//    int i;
//    if(s[0]!=' ')
//    {
//      s[0]=s[0]-32;
//      for(i=1;i<strlen(s);i++)
//      {
//        if(s[i]==' ' && s[i+1]!=' ' && s[i+1]>='a' && s[i+1]<='z' )
//        {
//          s[i+1]=s[i+1]-32;
//        }          
//        }
//        }
//        else
//        {
//            for(i=0;i<strlen(s);i++)
//            {
//                if(s[i]==' ' && s[i+1]!=' ' && s[i+1]>='a' && s[i+1]<='z' )                                                            
//                {
//                    s[i+1]=s[i+1]-32;
//                }          
//            }
//        }
//        printf("%s",s);
//}
//
//
//int main()
//{
//	char x[100];
//	printf("Nhap chuoi:"); gets_s(x,100);
//	ChuanHoaChuoi(x);
//	printf("Chuoi duoc chuan hoa: ");
//	puts(x);
//	InHoaKyTuDau(x);
//	DemSoTuTrongChuoi(x);
//	char *kq = DaoNguoc(x);
//    InDaoNguoc(x);
//    printf("\nChuoi sau khi dao nguoc la: %s", kq);
//}