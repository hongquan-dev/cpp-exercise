#include <iostream>
using namespace std;
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
int *Pointer(int a){
    int *b = &a;
    return b;
}
int main(){
    int **a = new int*[2];
    for (int i = 0; i  <2; i++){
        a[i] = new int[2];
    }
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cin >> a[i][j];
        }
    }
        for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}