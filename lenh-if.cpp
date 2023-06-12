/*
Bai tap lenh if
Time 8:32
6/12/2023
*/
#include <iostream>
using namespace std;

//Begin main function
int main() {

    /*
    1. Thong bao ra man hinh bai tap lenh if
    2. Thuc hien lenh if
    3. Khoi tao bien de thuc hien lenh nhap
    */
    
    //Buoc 1
    cout << "Bai tap lenh if" << endl;
    int x;
    //Buoc 2
    cout << "Nhap vao tuoi cua ban: ";
    cin >> x;

    //Buoc 3
    if (x < 0 || x > 100) {
        cout << "tuoi cua ban khong duoc be hon 0 va lon hon 100" << endl;
    } else {
        cout << "Tuoi cua ban la: " << x << endl;
    }
        if (x == 0) {
            cout << "The gioi chao mung ban" << endl;
        }
       /*  }
            else {
                cout << "Tuoi cua ban la: " << x << endl;
            } */

        return 0;
}