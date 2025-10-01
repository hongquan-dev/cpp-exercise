#include <iostream>
#include <math.h>
using namespace std;


int Find_Max(int a, int b){
    if (a >= b){
        return a;
    }
    else{
        return b;   
    }
}
void Max(int a, int b, int c, int d){
    int max_1 = Find_Max(a, b);
    int max_2 = Find_Max(c, d);
    int max = Find_Max(max_1, max_2);
    cout << max;
}
bool Check_Triangle(int a, int b, int c){
    if ((a+b) <= c || (a+c) <= b || (b+c) <= a){
        return false;
    }
    else return true;
}
void Check_Number(int a){
    int a_;
    while (a > 0){
        a_ = a % 10;
        cout << a_ << endl;
        a = a/10;
    }
}
void Find_Amstrong(int a){
    for (int i = 100 ; i <= a; i++){
        int temp, check = 0, i_ = i;
        while (i_ > 0){
            temp = i_ % 10;
            check += pow(temp, 3);
            i_ /= 10;
        }
        if (check == i){
            cout << i << endl;
        }
        else{
            continue;
        }
    }
}
int Giai_Thua(int a){
    if (a == 0){
        return 1;
    }
    else{
        return a * Giai_Thua(a - 2);
    }
}
bool Check_SNT(int a){
    if (a < 2){
        return false;
    }
    else if (a == 2){
        return true;
    }
    else{
        for (int i = 2; i < a; i++){
            if (a % i == 0){
                return false;
                break;
            }
        }
    }
    return true;
}
bool Check_SHH(int a){
    int check = 0;
    for (int i = 1; i < a; i++){
        if (a % i == 0){
            check += i;
        }
    }
    if (check == a){
        return true;
    }
    else{
        return false;
    }
}
int Fib(int a){
    if (a == 1 || a == 2){
        return 1;
    }
    else{
        return Fib(a - 1) + Fib(a - 2);
    }
}
void Bang_Cuu_Chuong(int a){
    for (int i = 1; i <= 9; i++){
        cout << a << " * " << i << " = " << a*i << endl;
    }
}


int main(){
}