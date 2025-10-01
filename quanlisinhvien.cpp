#include <iostream>
#include <string.h>
#include <iomanip>
#include <cstdlib> // setw : Giới hạn độ rộng xuất lên hình, left căn trái và right căn phải
using namespace std;
struct Sinh_Vien{
    int id;
    string ten;
    string gioitinh;
    float kt1;
    float kt2;
    float cc;
    float gk;
    float ck;
    float sum;
    void Sum(){
        sum = kt1 + kt2 + cc + gk + ck;
    }
    float Sum_(){
        sum = kt1 + kt2 + cc + gk + ck;
        return sum;
    }
    void Cout(){
        cout << left << setw(5) << "ID" << setw(10) << "TEN" << setw(10) << "GIOITINH" << setw(5) << "KT1" <<  setw(5) << "KT2" <<  setw(5) << "DCC" <<  setw(5) << "DGK" <<  setw(5) << "DCK" <<  setw(5) << "TONG" << endl;
        cout << "======================================================\n";
        cout << left << setw(5) << id << setw(10) << ten << setw(10) << gioitinh << setw(5) << kt1 <<  setw(5) << kt2 <<  setw(5) << cc <<  setw(5) << gk <<  setw(5) << ck <<  setw(5) << sum << endl << endl;
    }
    void Cout_(){
        cout << left << setw(5) << id << setw(10) << ten << setw(10) << gioitinh << setw(5) << kt1 <<  setw(5) << kt2 <<  setw(5) << cc <<  setw(5) << gk <<  setw(5) << ck <<  setw(5) << sum << endl;
    }
    float Diem_TB(){
        float res = (kt1 + kt2 + gk + ck) / float(4);
        return res;
    }
    Sinh_Vien operator = (Sinh_Vien other){
        Sinh_Vien res;
        res.id = id = other.id;
        res.ten = ten = other.ten;
        res.gioitinh = gioitinh = other.gioitinh;
        res.kt1 = kt1 = other.kt1;
        res.kt2 = kt2 = other.kt2;
        res.cc = cc = other.cc;
        res.gk = gk = other.gk;
        res.ck = ck = other.ck;
        res.sum = sum = other.sum;
        return res;
    }
};
Sinh_Vien lop12[30];
// int temp_siso = 6;
// int *siso = &temp_siso;
int siso = 6;
void Swap(float *a, float *b){
    float temp = *a;
    *a = *b;
    *b = temp;
}
void Them_Ban_Ghi(int *siso){
    int temp = *siso;
    cout << "Hay nhap ID: "; cin >> lop12[temp].id;
    cout << "Hay nhap Ten: "; cin >> lop12[temp].ten;
    cout << "Hay nhap Gioi tinh( 1 Nam | 2 Nu ): "; cin >> lop12[temp].gioitinh;
    cout << "Hay nhap Kt1: "; cin >> lop12[temp].kt1;
    cout << "Hay nhap Kt2: "; cin >> lop12[temp].kt2;
    cout << "Hay nhap Diem chuyen can: "; cin >> lop12[temp].cc;
    cout << "Hay nhap Diem giua ki: "; cin >> lop12[temp].gk;
    cout << "Hay nhap Diem cuoi ki: "; cin >> lop12[temp].ck;
    lop12[temp].Sum();
    *siso = *siso + 1;
}
void Xoa_Ban_Ghi(int id, int *siso){
    int temp = *siso;
    for (int i = 0; i < *siso; i++){
        if (lop12[i].id == id){
            for (int j = i; j < *siso; j++){
                lop12[j].id = lop12[j+1].id;
                lop12[j].ten = lop12[j+1].ten;
                lop12[j].gioitinh = lop12[j+1].gioitinh;
                lop12[j].kt1 = lop12[j+1].kt1;
                lop12[j].kt2 = lop12[j+1].kt2;
                lop12[j].cc = lop12[j+1].cc;
                lop12[j].gk = lop12[j+1].gk;
                lop12[j].ck = lop12[j+1].ck;
                lop12[j].sum = lop12[j+1].sum;
            }
            *siso = *siso - 1;
            break;
        }
    }
}
void Cap_Nhat_Ban_Ghi(int id, int *siso){
    for (int i = 0; i < *siso; i++){
        if (id == lop12[i].id){
            cout << "Cap nhat bang ghi moi" << endl;
            cout << "ID moi: "; cin >> lop12[i].id;
            cout << "Ten moi: "; cin >> lop12[i].ten;
            cout << "Gioi tinh moi: "; cin >> lop12[i].gioitinh;
            cout << "Kt1 moi: "; cin >> lop12[i].kt1;
            cout << "KT2 moi: "; cin >> lop12[i].kt2;
            cout << "Chuyen can moi: "; cin >> lop12[i].cc;
            cout << "Giua ki moi: "; cin >> lop12[i].gk;
            cout << "Cuoi ki moi: "; cin >> lop12[i].ck;
            lop12[i].Sum();
        }
    }
}
void Quan_Sat_Tat_Ca(int *siso){
    lop12[0].Cout();
    for (int i = 1; i < *siso; i++){
        lop12[i].Cout_();
        cout << endl;
    }
}
void Diem_TB_Sinh_Vien_Duoc_Chon(int id, int *siso){
    for (int i = 0; i < *siso; i++){
        if (id == lop12[i].id){
            cout << "Ket qua la: ";
            cout << lop12[i].Diem_TB() << endl;
        }
    }
}
void Sinh_Vien_Tong_Diem_Cao_Nhat(int *siso){
    float max = lop12[0].Sum_();
    for (int i = 0; i < *siso; i++){
        if (lop12[i].Sum_() >= max){
            max = lop12[i].Sum_();
        }
    }
    for (int i = 0; i < *siso; i++){
        if (lop12[i].Sum_() == max){
            lop12[i].Cout();
        }
    }
}
void Sinh_Vien_Tong_Diem_Thap_Nhat(int *siso){
    float min = lop12[0].Sum_();
    for (int i = 0; i < *siso; i++){
        if (lop12[i].Sum_() <= min){
            min = lop12[i].Sum_();
        }
    }
    for (int i = 0; i < *siso; i++){
        if (lop12[i].Sum_() == min){
            lop12[i].Cout();
        }
    }
}
void Tim_SV_Bang_ID(int id, int *siso){
    for (int i = 0; i < *siso; i++){
        if (id == lop12[i].id){
            lop12[i].Cout();
        }
    }
}
void Sap_Xep_Bang_Bang_ID(int *siso){
    for (int i = 0; i < *siso; i++){
        for (int j = 0 + i; j < *siso; j++){
            if (lop12[i].sum >= lop12[j].sum){
                Sinh_Vien temp = lop12[i];
                lop12[i] = lop12[j];
                lop12[j] = temp;
            }
        }
    }
}
void Hien_Thi_Yeu_Cau(){
    cout<<"=========================================="<<"\n";
    cout<<" MENU "<<"\n";
    cout<<"=========================================="<<"\n";
    cout<<" 1. Them ban ghi sinh vien"<<"\n";
    cout<<" 2. Xoa ban ghi sinh vien"<<"\n";
    cout<<" 3. Cap nhat ban ghi sinh vien"<<"\n";
    cout<<" 4. Quan sat tat ca ban ghi sinh vien"<<"\n";
    cout<<" 5. Tinh diem trung binh cua sinh vien da chon"<<"\n";
    cout<<" 6. Hien thi sinh vien co tong diem cao nhat"<<"\n";
    cout<<" 7. Hien thi sinh vien co tong diem thap nhat"<<"\n"; 
    cout<<" 8. Tim sinh vien boi ID"<<"\n"; 
    cout<<" 9. Sap xep cac ban ghi boi tong diem"<<"\n"; 
}

int main(){
    lop12[0] = {6001, "Quan", "Nam", 7, 9, 2, 7, 8, 33};
    lop12[1] = {6002, "Hoa", "Nu", 9, 10, 1, 6, 8, 34};
    lop12[2] = {6003, "Khanh", "Nam", 8, 9, 3, 7, 9, 36};
    lop12[3] = {6004, "Trang", "Nu", 10, 7, 0, 8, 6, 31};
    lop12[4] = {6005, "Duong", "Nam",7, 10, 3, 5, 6, 31};
    lop12[5] = {6006, "Tuan", "Nam", 6, 5, 0, 9, 5, 25};
    
    int chose;
    char check;
    do{
        Hien_Thi_Yeu_Cau();
        do{
            cout << "=========================\n";
            cout << "Hay nhap yeu cau cua ban: ";
            cin >> chose;
        }
        while (chose < 1 || chose > 9);
        switch (chose)
        {
        case 1:
            Them_Ban_Ghi(&siso);
            break;
        case 2:
            cout << "Nhap ID can xoa: ";
            int temp; cin >> temp;
            Xoa_Ban_Ghi(temp, &siso);
            break;
        case 3:
            cout << "Nhap ID can cap nhat: ";
            int temp1; cin >> temp1;
            Cap_Nhat_Ban_Ghi(temp1, &siso);
            break;
        case 4:
            Quan_Sat_Tat_Ca(&siso);
            break;
        case 5:
            cout << "Nhap ID sinh vien diem tb: ";
            int temp2; cin >> temp2;
            Diem_TB_Sinh_Vien_Duoc_Chon(temp2, &siso);
            break;
        case 6:
            Sinh_Vien_Tong_Diem_Cao_Nhat(&siso);
            break;
        case 7:
            Sinh_Vien_Tong_Diem_Thap_Nhat(&siso);
            break;
        case 8:
            cout << "Nhap ID sinh vien can tim: ";
            int temp3; cin >> temp3;
            Tim_SV_Bang_ID(temp3, &siso);
            break;
        case 9:
            Sap_Xep_Bang_Bang_ID(&siso);
            break;
        default:
            break;
        }
        cout << "==================================\n";
        cout << "Nhap Y/y de tiep tuc chuong trinh: ";
        cin >> check;
    }
    while (check == 'Y' || check == 'y');
    cout << "Chuong trinh ket thuc!";
}