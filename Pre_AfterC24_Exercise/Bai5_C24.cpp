#include <iostream>
#include <stdint.h>
using namespace std;
struct infor
{
    char name[32] ;
    char mssv[8] ;
    uint8_t course_c[2];
}; 
void infor_input(struct infor &stu_infor)
    {
        rewind(stdin);
        cout << "Nhap ten sinh vien: ";
        gets(stu_infor.name);
        rewind(stdin);
        cout << "Nhap ma so sinh vien: ";
        gets(stu_infor.mssv);
        cout << "Nhap khoa: ";
        cin >> stu_infor.course_c;
    }
void infor_print(struct infor stu_infor)
    {
        cout << "\nTen sinh vien: " << stu_infor.name;
        cout << "\nMa so sinh vien: " << stu_infor.mssv;
        cout << "\nKhoa: " << stu_infor.course_c;
    }
int main()
{
    int n, i;
    cout << "So luong sinh vien can nhap: ";
    cin >> n;
    struct infor arr[n+1];
    for(i=1; i < n + 1; i++)
        {
            cout << "\n\t\t\t\tNhap thong tin sinh vien " << i <<"\n";
            infor_input(arr[i]);
            // infor_print(i);
        }
    for(i=1; i <= n; i++)
        {
            cout << "\n\t\t\t\tThong tin sinh vien " << i <<"\n";
            infor_print(arr[i]);
        }

}

