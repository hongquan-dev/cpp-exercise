#include <iostream>
using namespace std;

void Cout_Matrix(int a[100][100], int hang, int cot){
    for (int i = 0; i < hang; i++){
        for (int j = 0; j < cot; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void Matrix_1(int a_[100][100], int a[], int *len){
    int m = 0, n = 0, max = 0;
    for (int i = 0; i < 10; i++){
        bool check = true;
        int dem = 0;
        for (int j = 0; j < i; j++){
            if (a[i] == a[j]){
                check = false;
                --*len;
                break;
            }
        }
        if (check == true){
            a_[0][m++] = a[i];
            for (int k = 0; k < 10; k++){
                if (a[i] == a[k]){
                    dem++;
                }
            }
            if (dem >= max){
                max = dem;
            }
            a_[1][n++] = dem;
        }
    }
    for (int i = 0; i < *len; i++){
        cout << "Gia tri " << a_[0][i] << " xuat hien " << a_[1][i] << " lan " << endl;
    }
    for (int i = 0; i < *len; i++){
        if (a_[1][i] == max){
            cout << "Gia tri " << a_[0][i] << " xuat hien nhieu nhat voi " << max << " lan" << endl;
        }
    }
}
void Matrix_2(int a[100][100], int hang, int cot){
    int a_ = 0;
    for (int i = 0; i < hang; i++){
        for (int j = 0; j < cot; j++){
            cout << a_ << " ";
            a_++;
        }
        cout << endl;
    } 
}
void Matrix_3(int a[100][100], int hang, int cot){
    for (int i = 0; i < hang; i++){
        for (int j = 0; j < cot; j++){
            if (i == j){
                a[i][j] = 0;
            }
            else if (i < j){
                a[i][j] = 1;
            }
            else{
                a[i][j] = - 1;
            }
        }
    }
}
void Sort_Arr(int a[100][100], int len, int hang){
    for (int i = 0; i < len; i++){
        for (int j = 1 + i; j < len; j++){
            if (a[hang][j] <= a[hang][i]){
                int temp = a[hang][i];
                a[hang][i] = a[hang][j];
                a[hang][j] = temp;
            }
        }
    }
}

main(){
}