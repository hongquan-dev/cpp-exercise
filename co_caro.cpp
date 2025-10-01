#include <iostream>
using namespace std;
void In_Co_Caro(char a[3][3]){
    cout << "-------------\n";
    cout << "| " << a[0][0] << " | " << a[0][1] << " | " << a[0][2] << " |\n";
    cout << "| " << a[1][0] << " | " << a[1][1] << " | " << a[1][2] << " |\n";
    cout << "| " << a[2][0] << " | " << a[2][1] << " | " << a[2][2] << " |\n";
    cout << "-------------\n";
}
void Nhap(char a_, char a[3][3], int hang, int cot){
    a[hang][cot] = a_;
}
bool Ket_Qua(char a[3][3]){
    for (int i = 0; i < 3; i++){
        int dem = 0;
        int m = 0;
        while (m < 3){
            if (a[i][m] == a[i][m+1]){
                dem++;
                m++;
            }
            else{
                break;
            }
        }
        if (dem == 3){
            return true;
        }
    }
    return false;
}
int main(){
    char a[3][3] = {{'o','o',' '},{'o',' ','o'},{'o','o','o'}};
    cout << Ket_Qua(a);
}