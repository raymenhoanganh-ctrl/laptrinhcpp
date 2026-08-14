#include <iostream>
using namespace std;
main () {
    char diemChu; // Dùng cho biến 1 ký tự ( char kiểu dữ liệu phù hợp)
    cout << "Moi nhap: " << endl; // nhập ký tự điểm chữ A, B, C, D, F
    cin >> diemChu;
    // Dùng switch-case để quy đổi ra điểm chữ
    switch (diemChu) { // check biến điểm chữ
    case 'A': // biến tương ứng
    cout << "4.0" << endl; // xuất ra giá trị tương ứng biến
    break;
    // bắt buộc phải có break ở cuối case
    case 'B':
    cout << "3.0" << endl;
    break;
    case 'C':
    cout << "2.0" << endl;
    break;
    case 'D':
    cout << "1.0" << endl;
    break;
    case 'F':
    cout << "0.0" << endl;
    break;
    default:
    cout << " Diem chu khong hop le" << endl;

    }

    return 0;
}