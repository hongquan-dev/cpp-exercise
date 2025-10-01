#include <iostream>
#include <math.h>
using namespace std;

struct Dia_Chi{
    string thanh_pho;
    string quan;
    string duong;
};
struct Nhan_Vien{
    int ma_nv;
    string ten_nv;
    int tuoi;
    Dia_Chi Co_Quan;
    Dia_Chi Nha_Rieng;
};
struct Toa_Do{
    int x;
    int y;
    int Space(){
        return abs(x - y);
    }
    void Cin_Space(){
        cin >> x;
        cin >> y;
    }
};
struct Phan_So{
    int tu;
    int mau;
    void Cout_Ps(){
        cout << tu << "/" << mau;
    }
    int UCLN(int a, int b){
        a = abs(a);
        b = abs(b);
        if (b == 0){
            return a;
        }
        return UCLN(b, a % b);
        
    }
    void Toi_Gian(int *a, int *b){
        int ucln = UCLN(*a, *b);
        *a = *a / ucln;
        *b = *b / ucln; 
    }
    Phan_So operator + (Phan_So other){
        tu = tu * other.mau;
        other.tu = other.tu * mau;
        mau = mau * other.mau;
        Phan_So plus;
        plus.tu = tu + other.tu;
        plus.mau = mau;
        Toi_Gian(&plus.tu, &plus.mau);
        return plus;
    }
    Phan_So operator - (Phan_So other){
        tu = tu * other.mau;
        other.tu = other.tu * mau;
        mau = mau * other.mau;
        Phan_So minus;
        minus.tu = tu - other.tu;
        minus.mau = mau;
        Toi_Gian(&minus.tu, &minus.mau);
        return minus;
    }
    Phan_So operator * (Phan_So other){
        Phan_So times;
        times.tu = tu * other.tu;
        times.mau = mau * other.mau;
        Toi_Gian(&times.tu, &times.mau);
        return times;
    }
    Phan_So operator / (Phan_So other){
        Phan_So divide; // not divice
        int temp = other.tu;
        other.tu = other.mau;
        other.mau = temp;
        divide.tu = tu * other.tu;
        divide.mau = mau * other.mau;
        Toi_Gian(&divide.tu, &divide.mau);
        return divide;
    }
};
void CT_PhanSo(){
    cout << "Hay nhap tu va mau ps 1: ";
    Phan_So a; cin >> a.tu >> a.mau;
    cout << "Hay nhap tu va mau ps 2: ";
    Phan_So b; cin >> b.tu >> b.mau;
    int chose;
    do{
        cout << "Hay chon phep tinh: 1.+ | 2.- | 3.* | 4./ : ";
        cin >> chose;
    }
    while (chose != 1 && chose != 2 && chose != 3 &&chose != 4);
    switch (chose){
        case 1:{
            a.Cout_Ps(); cout << " + "; b.Cout_Ps(); cout << " = ";
            Phan_So c = a + b;
            c.Cout_Ps();
            break;
        }
        case 2:{
            a.Cout_Ps(); cout << " - "; b.Cout_Ps(); cout << " = ";
            Phan_So c = a - b;
            c.Cout_Ps();
            break;
        }
        case 3:{
            a.Cout_Ps(); cout << " * "; b.Cout_Ps(); cout << " = ";
            Phan_So c = a * b;
            c.Cout_Ps();
            break;
        }
        case 4:{
            a.Cout_Ps(); cout << " / "; b.Cout_Ps(); cout << " = ";
            Phan_So c = a / b;
            c.Cout_Ps();
            break;
        }
    }
}
void CT_PhanSo_Final(){
    char check;
    do{
        CT_PhanSo();
        cout << "\nHay nhap Y/y de tiep tuc: ";
        cin >> check;
    }
    while(check == 'Y' || check == 'y');
    cout << "Chuong trinh ket thuc";
}
int main()
{
}