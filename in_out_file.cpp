#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
// Read/Write File
struct Sach{
    string ten_sach;
    int nam_xb;
};
int main(){
    fstream sach;
    sach.open("test.txt");
    Sach *lop12 = new Sach[3];
    for (int i = 0; i < 3; i++){
        getline(sach, lop12[i].ten_sach);
        sach >> lop12[i].nam_xb;
        sach.ignore();
    }
    for (int i = 0; i < 3; i++){
        cout << lop12[i].ten_sach << endl;
        cout << lop12[i].nam_xb << endl;
    }
}