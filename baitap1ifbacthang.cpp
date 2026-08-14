#include <iostream>
using namespace std;
int main() {
    float diem;
    cout << "nhap diem" << endl;
    cin >> diem;
    // Kiểm tra điều kiện hợp lệ của điểm
    if (diem <= 0 || diem >= 10)
    {
        cout << "Diem khong hop le" << endl;
    }
    else if (diem >= 8)
    {
        cout << "Xep loai Gioi" << endl;
    }
    else if (diem >= 6.5)
    {
        cout << "Xep loai Kha" << endl;
    }
    else if (diem >= 5)
    {
        cout << "Xep loai Tb" << endl;
    }
    else 
    {
        cout << "Xep loai Yeu" << endl;
    }
    return 0;
}