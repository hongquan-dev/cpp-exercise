#include <iostream>
#include <string.h>
using namespace std;
int Size_Str(char *s){
    int len = 0;
    while (*s != '\0'){
        len++;
        s++;
    }
    return len;
}
void Rever_Str(char *s){
    int len = Size_Str(s);
    int i = 0, j = len - 1;
    while (i < j){
        char temp = *(s + i);
        *(s + i) = *(s + j);
        *(s + j) = temp;
        i++; j--;
    }
}
int Count_Str(char *s){
    int count = 0;
    bool check = false;
    int len = Size_Str(s);
    for (int i = 0; i < len; i++){
        if (i == 0 && s[0] != ' ' && s[0] != '\t'){
            count++;
        }
        if (s[i] == ' ' || s[i] == '\t'){
            check = true;
        }
        else if (check == true){
            count++;
            check = false;
        }
    }
    return count;
}
void Delete_Space(char *s){
    int len = Size_Str(s);
    for (int i = len - 1; i >= 0; i--){
        if (s[i] == ' '){
            for (int j = i; j < len; j++){
                s[j] = s[j+1];
            }
        }
    }
}
int Find_Id(char *s, char *sub){
    int len_1 = Size_Str(s);
    int len_2 = Size_Str(sub);
    for (int i = 0; i < len_1; i++){
        for (int i = 0; i < len_1; i++){
            if (sub[0] == s[i]){
                bool check = true;
                int m = 0, n = i;
                while (m < len_2){
                    if (sub[m] != s[n]){
                        check = false;
                    }
                    m++;
                    n++;
                }
                if (check == true){
                    return i;
                }
            }
        }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
    }
    return 0;
}
bool Check_Dx(char *s){
    int len = Size_Str(s);
    int i = 0, j = len - 1;
    bool check = true;
    while (i < j){
        if (s[i] != s[j]){
            check = false;
            break;
        }
        i++;
        j--;
    }
    return check;
}
void Replace_Str(char *s, char a, char b){
    int len = Size_Str(s);
    for (int i = 0; i < len; i++){
        if (s[i] == a){
            s[i] = b;
        }
    }
}
void First_Upper(char *s){
    bool check = false;
    int len = Size_Str(s);
    for (int i = 0; i < len; i++){
        if (i == 0 && s[0] != ' ' && s[0] != '\t'){
            s[i] = s[i] - 32;
        }
        if (s[i] == ' ' || s[i] == '\t'){
            check = true;
        }
        else if (check == true){
            s[i] = s[i] - 32;
            check = false;
        }
    }
}


int main(){
    int a;
    cin >> a;
    cout << a;
    string b;
    getline(cin >> std::ws, b);
    cout << b;
}