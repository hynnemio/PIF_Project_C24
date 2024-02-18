#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    int i = 0;
    int arr[17];
    
                                //Nhập số n thỏa yêu cầu//

    do 
        {
            cout << "Chon so luong mang n: ";
            cin >> n;
                if (n <= 0 || n > 16) 
                {
                    cout << "gia tri sai hay nhap lai" << "\n";
                }
                else if (n > 0 && n <= 16)
                {
                    cout << "Vay so mang la: " << n << "\n";
                }
        }
    while (n <= 0 || n > 16); 


                                //Yêu cầu nhập giá trị của mảng//

    for (i; i < n; i++)
    {
        cout << "nhap gia tri cua arr[" << i <<"] ";
        cin >> arr[i];
    }

    
                                //In ra giá trị mảng//

    cout << "Gia tri cac mang arr[] = { ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "}";


                                //In ra địa chỉ mảng//

    for (i = 0; i < n; i++)
    {
        cout << "\nDia chi cua arr[" << i <<"]: " << &arr[i];
    }
}







