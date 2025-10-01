#include <iostream>
#include <string.h>
using namespace std;
// struct Name_struct{
//     Member;
// };
struct Sinh_Vien{
    string ten;
    float diem;
    int lop;
    string diachi;
    
    void Cin_Str(){
        cout << "Hay nhap ten: "; getline(cin, ten);
        cout << "Hay nhap diem: "; cin >> diem;
        cout << "Hay nhap lop: "; cin >> lop; cin.ignore();
        cout << "Hay nhap diachi: "; getline(cin, diachi);
    }

    void Cout_Str(){
        cout << ten << " " << diem << " " << lop << " " << diachi;
    }
};
struct Giao_Vien{
    string ten;
    int mgv;
    float luong;
    string diachi;
    Giao_Vien(){
        ten = "Linh Chi";
        mgv = 123456;
        luong = 7.500;
        diachi = "Hai Duong";
    }
    Giao_Vien(string ten_, int mgv_, float luong_, string diachi_){
        ten = ten_;
        mgv = mgv_;
        luong = luong_;
        diachi = diachi_;
    }
    void Cout_Str(){
        cout << ten << " " << mgv << " " << luong << " " << diachi;
    }
};
struct So_Phuc{
    int a, b;
    // operater
    // KieuTraVe operator ToanTu (SoPhuc other){
    //  return;
    //}
    So_Phuc operator + (So_Phuc other){
        So_Phuc tong;
        tong.a = a + other.a;
        tong.b = b + other.b;
        return tong;
    }
    bool operator == (So_Phuc other){
        return a == other.a && b == other.b;
    }
    // insertion
    friend istream& operator >> (istream& in, So_Phuc &other){
        in >> other.a >> other.b;
        return in;
    }
    // extraction
    friend ostream& operator << (ostream& out, So_Phuc other){
        out << other.a << " " << other.b;
        return out;
    }
};
struct Time{
    float h, p, s;
};
struct Ticket
{
    string name;
    Time time;
};
struct Hoc_Sinh{
    string ten;
    int diem;
    bool operator < (Hoc_Sinh other){
        return diem < other.diem;
    }
    bool operator > (Hoc_Sinh other){
        return diem > other.diem;
    }
};


int main(){
    Hoc_Sinh _12[3];
    for (int i = 0; i < 3; i++){
        cout << "Hay nhap ten hs " << i + 1 << " :" << endl;
        cin >> _12[i].ten;
        cout << "Hay nhap diem hs " << i + 1 << " :";
        cin >> _12[i].diem;
    }
    for (int i = 0; i < 3; i++){
        for (int j = 1 + i; j < 3; j++){
            if (_12[i].diem > _12[j].diem){
                int temp = _12[i].diem;
                _12[i].diem = _12[j].diem;
                _12[j].diem = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++){
        cout << _12[i].ten << " " << _12[i].diem << endl;
    }
}