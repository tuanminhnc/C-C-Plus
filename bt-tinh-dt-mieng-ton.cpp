/*
Bai tap tinh dien tich phan hinh con lai ma khong can do
Time 9:53
6/12/2023
*/
#include <iostream>
using namespace std;

//Begin main function
int main() {

    /*
        1. Thong bao ra man hinh bai tap tinh dien tich phan hinh con lai co phu thuoc vao vi tri cat khong
        2. Thuc hien tinh dien tich phan hinh con lai
    */
    //Buoc 1
    cout << "Bai tap tinh dien tich phan hinh con lai cua mieng ton sau khi cat" << endl;
    cout << "- Tu mot mieng ton hinh vuong co canh a + b" << endl;
    cout << "- bac tho cat di mot manh hinh vuong co canh bang a - b (cho a> b)" << endl;
    cout << "- Dien tich phan hinh con lai co phu thuoc vao vi tri cat khong ?" << endl << endl;
    
    //Buoc 2
    /*
        Dien tich hinh vuong ban dau = (a + b)^2
        Dien tich hinh vuong khi da cat = (a - b)^2
        Dien tich phan con lai la = (a + b)^2 - (a - b)^2
        = a^2 + 2ab + b^2 - (a^2 - 2ab + b^2)
        = a^2 + 2ab + b^2 - a^2 + 2ab - b^2
        = 2ab + 2ab
        = 4ab
        => Dien tich phan con lai khong phu thuoc vi tri cat

        = [(a + b) + (a - b)] * [(a + b) - (a - b)]
        = 2a * 2b 
        = 4ab

        
    */
    cout << "- Dien tich mieng ton ban dau la: (a + b)^2" << endl;
    cout << "- Dien tich mieng ton da cat di la: (a - b)^2" << endl << endl;
    cout << "Ta co: Dien tich phan hinh con lai = Dien tich mieng ton ban dau - Dien tich mieng ton da cat di" << endl;
    cout << "=> Dien tich phan hinh con lai la: (a + b)^2 - (a - b)^2" << endl;
    cout << "=> a^2 + 2ab + b^2 - (a^2 - 2ab + b^2)" << endl;
    cout << "=> a^2 + 2ab + b^2 - a^2 + 2ab - b^2" << endl;
    cout << "=> 2ab + 2ab = 4ab" << endl;
    cout << "Vay dien tich phan hinh con lai khong phu thuoc vao bi tri cat" << endl;
    
    return 0;
}