#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    int i = 0;
    int arr[17];
    int LN, NN, TG;
    int Tong = 0;
    float TB;
    
                                //Nhập số n thỏa yêu cầu//

    do 
        {
            cout << "Chon so luong mang n: ";
            cin >> n;
                if (n <= 5 || n > 16) 
                {
                    cout << "gia tri sai hay nhap lai" << "\n";
                }
                else if (n > 5 && n <= 16)
                {
                    cout << "Vay so mang la: " << n << "\n";
                }
        }
    while (n <= 5 || n > 16); 
    
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


                                //Tìm lớn nhất, nhỏ nhất//

    LN = arr[0];
    if (n >= 2)
        {
            NN = arr[1];
            i = 2;
        }
    else { cout << "\nkhong du gia tri";}
        
        if (LN < NN) 
            {
                TG = LN;
                NN = TG;
                LN = NN;
            }
        else if (LN == NN)
            {
                do 
                    {
                        if(i >= n) 
                            {
                                cout << "\nloi";
                                break;
                            }
                        for (i; i < i+1; i++)
                            {
                                TG = arr[i];
                            }
                        if (TG > LN)
                            {
                                NN = LN;
                                LN = TG;
                            }    
                    }
                while(LN != NN);
            }

    for(i;i < n;i++)
    {
        if(LN < arr[i])
            {LN = arr[i];}
        if(NN > arr[i])
            {NN = arr[i];}
    }        

cout << "\nSo lon nhat trong mang la: " << LN;
cout << "\nSo nho nhat trong mang la: " << NN;

                                //Tìm giá trị trung bình của mảng//

for(i = 0; i < n; i++)
    {
        Tong = Tong + arr[i];
    }
TB = Tong / (float) n;
cout << "\n";
cout << "Trung binh cua mang la: " << setprecision(3) << fixed << TB;
}







