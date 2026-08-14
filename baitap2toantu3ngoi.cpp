#include <iostream>
using namespace std;
main () {
    int a, b, c; // khai báo 3 biến
    cout << "Nhap ba so nguyen a, b, c: " << endl;
    cin >> a >> b >> c;
    // sử dụng toán tử 3 ngôi lồng nhau để tìm ra số lớn nhất
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    cout << "So lon nhat la: " << max << endl;

    return 0;
}