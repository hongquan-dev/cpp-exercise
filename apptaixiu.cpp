#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
void srand(unsigned int seed);
char xuc_xac_1[5][11];
char xuc_xac_2[5][11];
char xuc_xac_3[5][11];
void In_Xuc_Xac(int a, char a_[5][11]){
    char temp_1[5][11] = {{'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                        {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
                        {'|', ' ', ' ', ' ', ' ', 'o', ' ', ' ', ' ', ' ', '|'},
                        {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
                        {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'}};
    char temp_2[5][11] = {{'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                        {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
                        {'|', ' ', ' ', 'o', ' ', ' ', ' ', 'o', ' ', ' ', '|'},
                        {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
                        {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'}};
    char temp_3[5][11] = {{'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                        {'|', ' ', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
                        {'|', ' ', ' ', ' ', ' ', 'o', ' ', ' ', ' ', ' ', '|'},
                        {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'o', ' ', '|'},
                        {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'}};  
    char temp_4[5][11] = {{'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                        {'|', ' ', ' ', 'o', ' ', ' ', ' ', 'o', ' ', ' ', '|'},
                        {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
                        {'|', ' ', ' ', 'o', ' ', ' ', ' ', 'o', ' ', ' ', '|'},
                        {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'}};
    char temp_5[5][11] = {{'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                        {'|', ' ', 'o', ' ', ' ', ' ', ' ', ' ', 'o', ' ', '|'},
                        {'|', ' ', ' ', ' ', ' ', 'o', ' ', ' ', ' ', ' ', '|'},
                        {'|', ' ', 'o', ' ', ' ', ' ', ' ', ' ', 'o', ' ', '|'},
                        {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'}};
    char temp_6[5][11] = {{'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
                        {'|', ' ', ' ', 'o', ' ', ' ', ' ', 'o', ' ', ' ', '|'},
                        {'|', ' ', ' ', 'o', ' ', ' ', ' ', 'o', ' ', ' ', '|'},
                        {'|', ' ', ' ', 'o', ' ', ' ', ' ', 'o', ' ', ' ', '|'},
                        {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'}};                                  
    if (a == 1){
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 11; j++){
            a_[i][j] = temp_5[i][j];
        }
    }    
    }
    switch (a)
    {
    case 1:
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 11; j++){
                a_[i][j] = temp_1[i][j];
            }
        } 
        break;
    case 2:
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 11; j++){
                a_[i][j] = temp_2[i][j];
            }
        } 
        break;
    case 3:
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 11; j++){
                a_[i][j] = temp_3[i][j];
            }
        } 
        break;
    case 4:
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 11; j++){
                a_[i][j] = temp_4[i][j];
            }
        } 
        break;
    case 5:
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 11; j++){
                a_[i][j] = temp_5[i][j];
            }
        } 
        break;
    case 6:
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 11; j++){
                a_[i][j] = temp_6[i][j];
            }
        } 
        break;    
    default:
        break;
    }
}
void In_3_Xuc_Xac(char a[5][11], char b[5][11], char c[5][11]){
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 11; j++){
            cout << a[i][j];
        }
        cout << "  ";
        for (int j = 0; j < 11; j++){
            cout << b[i][j];
        }
        cout << "  ";
        for (int j = 0; j < 11; j++){
            cout << c[i][j];
        }
        cout << endl;
    }
}
int Xuc_Xac(){
    int res = (rand() % 6) + 1;
    return res;
}
char Tung_3_Xuc_Xac(int temp){
    int res = temp;
    if (res >= 3 && res <= 10){
        return '0';
    }
    else{
        return '1';
    }
}
void In_Ket_Qua_ND_Chon(char temp){
    if (temp == '1'){
        cout << "Tai";
    }
    else{
        cout << "Xiu";
    }
}
void Tro_Choi(int *tai_khoan){
    char player_chose;
    do{
        cout << "==================================\n";
        cout << "Tai khoan: " << *tai_khoan << endl;
        cout << "Hay chon | 1 : Tai | 0 : Xiu | : ";
        cin >> player_chose;
        cout << "==================================\n";
    }
    while (player_chose != '0' && player_chose != '1');
    int so_tien_nhap;
    do{
        cout << "Dat cuoc ( 0  < So_Tien <= " << *tai_khoan << ") : "; 
        cin >> so_tien_nhap;
    }
    while (so_tien_nhap <= 0 || so_tien_nhap > *tai_khoan);
    cout << "==================================\n";
    int xx_1 = Xuc_Xac(), xx_2 = Xuc_Xac(), xx_3 = Xuc_Xac();
    int xx_tong = xx_1 + xx_2 + xx_3;
    In_Xuc_Xac(xx_1, xuc_xac_1);
    In_Xuc_Xac(xx_2, xuc_xac_2);
    In_Xuc_Xac(xx_3, xuc_xac_3);
    In_3_Xuc_Xac(xuc_xac_1, xuc_xac_2, xuc_xac_3);
    cout << "==================================\n";
    if (Tung_3_Xuc_Xac(xx_tong) == player_chose){
        *tai_khoan = *tai_khoan + so_tien_nhap*2;
        cout << "Ban chon: "; In_Ket_Qua_ND_Chon(player_chose);
        cout << "\nBan Win!\n";
        cout << "So tien hien tai la: " << *tai_khoan << endl;
        cout << "==================================\n";
    }
    else{
        *tai_khoan = *tai_khoan - so_tien_nhap;
        cout << "Ban chon: "; In_Ket_Qua_ND_Chon(player_chose);
        cout << "\nBan Lose!\n";
        cout << "So tien hien tai la: " << *tai_khoan << endl;
        cout << "==================================\n";
    }
}
void Giao_Dien(char *chose_, int *tai_khoan){
    cout << "==================================\n";
    cout << "1. Nap tien\n";
    cout << "2. Rut tien\n";
    cout << "3. Choi Tai Xiu\n";
    cout << "==================================\n";
    cout << "Tai khoan: " << *tai_khoan << endl;
    cout << "==================================\n";
    char chose;
    do{
        cout << "Hay nhap lua chon cua ban: ";
        cin >> chose;
        *chose_ = chose;
        cout << "==================================\n";
    }
    while (chose != '1' && chose != '2' && chose != '3');
}
void Nap_Tien(int *tai_khoan){
    cout << "Tai khoan: " << *tai_khoan << endl;
    cout << "Hay nhap so tien can nap: ";
    int temp; cin >> temp;
    *tai_khoan += temp;
    cout << "So tien hien tai la: " << *tai_khoan << endl;
    cout << "==================================\n";
}
void Rut_Tien(int *tai_khoan){
    cout << "Tai khoan: " << *tai_khoan << endl;
    int temp, a = 0;
    do{
        if (a == 0){
            cout << "Nhap so tien can rut ( 0 < So_Tien <= " << *tai_khoan << " ) : ";
            cin >> temp;
            a = 1;
        }
        if (a != 0){
            cout << "==================================\n";
            cout << "So tien rut khong hop le!\nNhap so tien can rut ( 0 < So_Tien <= " << *tai_khoan << " ) : ";
            cin >> temp;
        }
    }
    while (temp <= 0 || temp > *tai_khoan);
    *tai_khoan -= temp;
    cout << "So tien hien tai la: " << *tai_khoan << endl;
    cout << "==================================\n";
}
int main(){
    srand(time(NULL));
    int tai_khoan = 0;
    char chose;
    char chose_continue;
    do{
        Giao_Dien(&chose, &tai_khoan);
        if (chose == '1'){
            Nap_Tien(&tai_khoan);
        }
        else if (chose == '2'){
            if (tai_khoan == 0){
                cout << "Tai khoan = 0 khong the rut!\n";
                cout << "==================================\n";
            }
            else{
                Rut_Tien(&tai_khoan);
            }
        }
        else{
            if (tai_khoan == 0){
                cout << "Tai khoan = 0 khong the choi!\n";
                cout << "==================================\n";
            }
            else{
                Tro_Choi(&tai_khoan);
            }
        }
        cout << "Nhap Y/y de tiep tuc: ";
        cin >> chose_continue;
    }
    while (chose_continue == 'y' || chose_continue == 'y');
    cout << "==================================\n";
    cout << "Chuong trinh ket thuc!\n";
}