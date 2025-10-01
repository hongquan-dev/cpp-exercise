#include <iostream>
#include <vector>
using namespace std;
void Cin_Vec(vector<int> &v, int n){
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
}
void Cout_Vec(vector<int> &v){
    for (auto v_ = v.begin(); v_ != v.end(); ++v_){
        cout << *v_ << " ";
    }
}
float Sum_Vec(vector<int> v){
    float sum = 0;
    for (int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    return float(sum);
}
void So_Chan(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        if (v[i] % 2 != 0){
            v.erase(v.begin() + i);
        }
    }
}
void Delete_k(vector<int> &v, int k){
    for (int i = 0; i < v.size(); i++){
        if (i == k){
            v.erase(v.begin() + i);
            break;
        }
    }
}
void Insert(vector<int> &v){
    cout << "Vi tri can them: ";
    int pos; cin >> pos;
    cout << "Gia tri do la: ";
    int val; cin >> val;
    v.insert(v.begin() + pos, val);
}
void Delete_Trung(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < i; j++){
            if (v[j] == v[i]){
                v.erase(v.begin() + i);
            }
        }
    }
}
int *Vector_To_Arr(vector<int> v, int *a){
    a = new int[v.size()];
    for (int i = 0; i < v.size(); i++){
        *(a + i) = v[i];
    }
    return a;
}
void Mix_Vector(vector<int> a, vector<int> b, vector<int> &c){
    for (int i = 0; i < a.size(); i++){
        bool check = true;
        for (int j = 0; j < i; j++){
            if (a[i] == c[j]){
                check = false;
            }
        }
        if (check == true){
            c.push_back(a[i]);
        }
    }
    for (int i = 0; i < b.size(); i++){
        bool check = true;
        for (int j = 0; j < a.size() + b.size(); j++){
            if (b[i] == c[j]){
                check = false;
            }
        }
        if (check == true){
            c.push_back(b[i]);
        }
    }
}
void Cin_Vec_Matrix(vector<vector<int>> &matrix, int hang, int cot){
    for (int i = 0; i < hang; i++){
        for (int j = 0; j < cot; j++){
            cout << "matrix[" << i << "][" << j <<"] = ";
            cin >> matrix[i][j];
        }
    }
}
void Cout_Vec_Matrix(vector<vector<int>> matrix, int hang, int cot){
    for (int i = 0; i < hang; i++){
        for (int j = 0; j < cot; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    vector<int> v;
    char chose;
    int len = 0;
    do{
        cout << "Chon (Them : 1 | Xoa : 0) = ";
        cin >> chose;
        if (chose == '1'){
            len++;
            int pos;
            do{
                cout << "Vi tri can them " << "(0 <= pos < " << len << "): "; 
                cin >> pos;
            }
            while (pos < 0 || pos >= len);
            cout << "Gia tri them: ";
            int val; cin >> val;
            if (val < 0){
                Cout_Vec(v);
                cout << endl;
                break;
            }
            else{
                v.insert(v.begin() + pos, val);
                Cout_Vec(v);
                cout << endl;               
            }
        }
        if (chose == '0'){
            int pos;
            if (len == 0){
                cout << "Chua co phan tu nao de xoa\n";
            }
            else{
                do{
                cout << "Vi tri can xoa " << "(0 <= pos < " << len << "): "; 
                cin >> pos;
                }
                while (pos < 0 || pos >= len);
                v.erase(v.begin() + pos);
                len--;
                Cout_Vec(v);
                cout << endl;
            }
        }
    }
    while (chose == '1' || chose == '0');
    cout << "Chuong trinh ket thuc";
}
   