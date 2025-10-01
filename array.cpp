#include <iostream>
#include <math.h>
using namespace std;

void Cout_Arr(int a[], int len){
    for (int i = 0; i < len; i++){
        cout << a[i] << " ";
    }
}
void Array_1(int a[], int len){
    cout << "Gia tri : ";
    for (int i = 0; i < len; i++){
        if (a[i] < 0){
            cout << a[i] << " ";
        }
    }
}
void Array_2(int a[], int len){
    for (int i = 0; i < len; i++){
        if (a[i] % 2 != 0){
                cout << a[i] << " ";
            }
    }
}
void Array_3(int a[], int len, int x){
    int res;
    for (int i = 0; i < len; i++){
        if (a[i] == x){
            res = i;
        }
    }
    cout << res;
}
void Array_4(int a[], int len){
    int max = a[0];
    int max_ = a[0];
    for (int i = 0; i < len; i++){
        if (a[i] >= max){
            max = a[i]; //max = 1
        }
        for (int i = 0; i < len; i++){
            if (a[i] >= max_ && a[i] != max){
                max_ = a[i];
                break;
            }
        }
    }
    
    cout << max + max_;
}
void Array_5(int a[], int len){
    for (int i = 0; i < len; i++){
        for (int j = 1 + i; j < len; j++){
            if (a[i] >= 0 && a[j] >= 0 && a[j] <= a[i]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            if (a[i] < 0 && a[j] < 0 && a[j] <= a[i]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < len; i++){
        cout << a[i] << " ";
    }
}
void Array_6(int a[], int *len){
    for (int i = *len - 1; i >= 0; i--){
        if (i % 2 != 0){
            for (int j = i; j < *len; j++){
                a[j] = a[j+1];
            }
            *len -= 1;
        }
    }
}
void Array_7(int a[], int *len){
    int max = a[0];
    for (int i = 0; i < *len; i++){
        if (a[i] >= max){
            max = a[i];
        }
    }
    for (int i = *len - 1; i >= 0; i--){
        if (a[i] == max){
            for (int j = i; j < *len; j++){
                a[j] = a[j+1];
            }
            --*len;
        }
    }
}
void Array_8(int a[], int *len, int x){
    int min_x = abs(a[0] - x);
    for (int i = 0; i < *len; i++){
        if (abs(a[i] - x) <= min_x){
            min_x = abs(a[i] - x);
        }
    }
    for (int i = *len - 1; i >= 0; i--){
        if (abs(a[i] - x) == min_x){
            for (int j = i; j < *len; j++){
                a[j] = a[j+1];
            }
            --*len;
        }
    }
}
void Array_9(int a[], int *len, int x){
    int max = a[0];
    for (int i = *len - 1; i >= 0; i--){
        if (a[i] >= max){
            max = a[i];
        }
        a[i+1] = a[i];
    }
    a[0] = x;
    ++*len;
    for (int i = *len - 1; i >= 0; i--){
        if (a[i] == max){
            for (int j = *len - 1; j >= i + 1; j--){
                a[j+1] = a[j];
            }
            a[i+1] = x;
            ++*len;
            }
    }
}
void Array_10(int a[], int *len, int x){
    for (int i = *len - 1; i >= 0; i--){
        if (a[i] % 2 == 0){
            for (int j = *len - 1; j >= i + 1; j--){
                a[j+1] = a[j];
            }
            a[i+1] = x;
            ++*len;
        }
    }
}
void Array_11(int a[], int chan[], int le[], int len){
    int m = 0, n = 0;
    for (int i = 0; i < len; i++){
        if (a[i] % 2 == 0){
            chan[m++] = a[i];
        }
        else{
            le[n++] = a[i];
        }
    }
    Cout_Arr(chan, 5);
    Cout_Arr(le, 5);
}
void Array_12(int a[], int arr_1[], int arr_2[], int len){
    int i = 0, j = 0, m = 0, n = len - 1;
    while (i < 5 && j < 6){
        if (arr_1[i] % 2 == 0){
            a[m++] = arr_1[i++];
        }
        else{
            a[n--] = arr_1[i++];
        }
        if (arr_2[j] % 2 == 0){
            a[m++] = arr_2[j++];
        }
        else{
            a[n--] = arr_2[j++];
        }
    }
    Cout_Arr(a, len);
}
void Array_13(int a[], int len){
    int i = 0;
    while (i < len){
        int b;
        cout << "Hay nhap a[" << i << "]: ";
        cin >> b;
        bool check = true;
        for (int j = 0; j < i; j++){
            if (a[j] == b){
                check = false;
            }
        }
        if (check == true){
            a[i++] = b;
        }
    }
} 
void Array_14(int a[], int *len){
    for (int i = 0; i < *len; i++){
        for (int j = 0; j < i; j++){
            if (a[j] == a[i]){
                for (int k = i; k < *len; k++){
                    a[k] = a[k+1];
                }
                --i;
                --*len;
            }
        }
    }
}
void Array_15(int a[], int b[], int c[], int a_, int b_){
    int i = 0, j = 0, m = 0;
    while (i < a_ && j < b_){
        if (a[i] <= b[j]){
            c[m++] = a[i++];
        }
        else{
            c[m++] = b[j++];
        }
    }
    while (i < a_){
        c[m++] = a[i++];
    }
    while (j < b_){
        c[m++] = b[j++];
    }
}
void Array_16(int a[], int len){
    int max = 0;
    for (int i = 0; i < len; i++){
        bool check = true;
        for (int j = 0; j < i; j++){
            if (a[j] == a[i]){
                check = false;
            }
        }
        if (check == true){
            int count = 0;
            for (int k = 0; k < len; k++){
                if (a[i] == a[k]){
                    count++;
                }
                if (count >= max){
                    max = count;
                }
            }
            cout << "Gia tri " << a[i] << " xuat hien " << count << " lan" << endl;
        }
    }
    for (int i = 0; i < len; i++){
        bool check = true;
        for (int j = 0; j < i; j++){
            if (a[j] == a[i]){
                check = false;
            }
        }
        if (check == true){
            int count = 0;
            for (int k = 0; k < len; k++){
                if (a[i] == a[k]){
                    count++;
                }
            }
            if (count == max){
                cout << "Phan tu " << a[i] << " xuat hien nhieu nhat voi " << max << " lan " << endl;
            }
        }
    }
}
  
int main(){
}