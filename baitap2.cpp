#include <iostream>
#include <string> // Khai báo thư viện để sử dụng kiểu dữ liệu string và hàm getline
using namespace std;
int main() {
    // 1. Khai báo 2 tên biến kiểu string để lưu thông tin
    string hoten;
    string lophoc;
    // 2. Nhập Họ và tên (chứa khoảng trắng)
    cout << "Nhap ho ten: ";
    getline(cin, hoten);
    // 3. Nhập Lớp học (chứa khoảng trắng)
    cout << "Nhap lop hoc: ";
    getline(cin, lophoc);
    // 4. In kết quả ra màn hình
    cout << "Xin chao, " << hoten << ", lop" << lophoc << "!" << endl;
    return 0;

}