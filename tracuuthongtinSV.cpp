#include <iostream>
using namespace std;

void Display_equa(){
    cout << "=============================================" << endl;
    cout << "|    ID    |   1   |   2   |   3   |   4   |" << endl; 
    cout << "=============================================" << endl;
}
void Display_end(){
    cout << "=============================================";
}
void Display_table(int a[100][100], int hang, int cot){
    Display_equa();
    for (int i = 0; i < hang; i++){
        for (int j = 0; j < cot; j++){
            cout << "|   " << a[i][j] << "   ";
        }
        cout << "|";
        cout << endl;
    }
    Display_end();
}
void Display_table_id(int a[100][100], int id){
    int check = -1;
    for (int i = 0; i < 4; i++){
        if (id == a[i][0]){
            check = i;
        }
    }
    if (check == -1){
        cout << "khong ton tai ID sinh vien nay!";
    }
    else{
        Display_equa();
        for (int i = 0; i < 5; i++){
            cout << "|   " << a[check][i] << "   ";
        }
        cout << "|\n";
        Display_end();
        cout << endl;
    }
}

int main(){
    int a[100][100] = {{6001,7,7,8,9},{6002,7,6,7,8},{6003,7,9,6,7},{6004,7,6,8,8}};
    char check;
    int choose;
    int id;
    do{
        cout << "Hay chon 1, 2: ";
        cin >> choose;
        if (choose == 1){
            Display_table(a, 4, 5);
        }
        else if (choose == 2){
            cout << "Hay nhap ID can tim kiem: "; cin >> id;
            Display_table_id(a, id);
        }
        cout << "\n\nHay nhap Y, y de tiep tuc\nMuon dung chuong trinh nhap N, n: ";
        cin >> check;
    }   
    while(check == 'Y' || check == 'y'); 
    cout << "Chuong trinh ket thuc!";
}