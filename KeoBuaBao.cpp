#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
void srand(unsigned int seed);
char Rd_Keo_Bua_Bao(){
    int temp = (rand() % 3) + 1;
    char res = temp + 48;
    return res;
}
void Giao_Dien(int score_computer, int score_player){
    cout << "-------------------------------------\n";
    cout << "|  Computer  :  " << score_computer << "  |  Player  :  " << score_player << "  |\n";
    cout << "-------------------------------------\n";
    cout << "|  1 : Keo  |  2 : Bua  |  3 : Bao  |\n";
    cout << "-------------------------------------\n";
}
void Hien_Thi_Keo_Bua_Bao(char temp){
    if (temp == '1'){
        cout << "Keo";
    }
    else if (temp == '2'){
        cout << "Bua";
    }
    else{
        cout << "Bao";
    }
}
void Tro_Choi(char computer, char player, int *score_computer, int *score_player){
    if (computer == player){
        cout << "Computer: "; Hien_Thi_Keo_Bua_Bao(computer); cout << endl;
        cout << "Player  : "; Hien_Thi_Keo_Bua_Bao(player); cout << endl;
        cout << "---------------------\n";
        cout << "Ket qua la: Draw!" << endl;
    }
    else if (computer - player == 1 || player - computer == 1){
        if (computer > player){
        cout << "Computer: "; Hien_Thi_Keo_Bua_Bao(computer); cout << endl;
        cout << "Player  : "; Hien_Thi_Keo_Bua_Bao(player); cout << endl;
        cout << "--------------\n";
        cout << "Ket qua la: Computer Win!" << endl; 
        *score_computer += 1;           
        }
        else{
        cout << "Computer: "; Hien_Thi_Keo_Bua_Bao(computer); cout << endl;
        cout << "Player  : "; Hien_Thi_Keo_Bua_Bao(player); cout << endl;
        cout << "--------------\n";
        cout << "Ket qua la: Player Win!" << endl; 
        *score_player += 1;          
        }
    }
    else{
        if (computer > player){
        cout << "Computer: "; Hien_Thi_Keo_Bua_Bao(computer); cout << endl;
        cout << "Player  : "; Hien_Thi_Keo_Bua_Bao(player); cout << endl;
        cout << "--------------\n";
        cout << "Ket qua la: Player Win!" << endl;            
        *score_player += 1;          
        }
        else{
        cout << "Computer: "; Hien_Thi_Keo_Bua_Bao(computer); cout << endl;
        cout << "Player  : "; Hien_Thi_Keo_Bua_Bao(player); cout << endl;
        cout << "--------------\n";
        cout << "Ket qua la: Computer Win!" << endl;           
        *score_computer += 1;           
        }
    }
}
void Tro_Choi_Final(int *score_computer, int *score_player){
    char chose_player;
    do{
        cout << endl;
        Giao_Dien(*score_computer, *score_player);
        cout << "Hay nhap lua chon cua ban: "; 
        cin >> chose_player;
    }
    while (chose_player != '1' && chose_player != '2' && chose_player != '3');   
        cout << "-------------------------------------\n";
        char chose_computer = Rd_Keo_Bua_Bao();
        Tro_Choi(chose_computer, chose_player, score_computer, score_player);
}
void Hien_Diem(int score_computer, int score_player){
    cout << "|  Computer  :  " << score_computer << "  |  Player  :  " << score_player << "  |\n";
    cout << "-------------------------------------\n";
}
int main(){
    srand(time(NULL));
    int score_computer = 0, score_player = 0;
    char chose;
    do{
        Tro_Choi_Final(&score_computer, &score_player);
        cout << "-------------------------------------\n";
        if (score_computer == 5){
            Hien_Diem(score_computer, score_player);
            cout << "Rat tiec ban da thua!\n";
            break;
        }
        if (score_player == 5){
            Hien_Diem(score_computer, score_player);
            cout << "Chuc mung ban da chien thang!\n";
            break;
        }
        cout << "Nhap Y/y de tiep tuc: ";
        cin >> chose;
    }
    while (chose == 'y' || chose == 'Y');
    cout << "-------------------------------------\n";
    cout << "Chuong trinh ket thuc!\n";
}