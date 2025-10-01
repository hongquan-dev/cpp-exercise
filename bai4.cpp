#include <iostream>
#include <string>
using namespace std;

struct SinhVien {
    int ma;         
    string ten;      
    string lop;     
    float diem;      
    string hanhKiem;
};

struct Node {
    SinhVien data;
    Node* prev;
    Node* next;
};
typedef Node* node;

struct LienKetDoi {
    node head;
    node tail;
};

void initialize(LienKetDoi &list) {
    list.head = list.tail = NULL;
}

node makeNode(SinhVien sv) {
    Node* newNode = new Node;
    newNode->data = sv;
    newNode->prev = newNode->next = NULL;
    return newNode;
}

void insertLast(LienKetDoi &list, SinhVien sv) {
    Node* newNode = makeNode(sv);
    if (list.head == NULL) { 
        list.head = list.tail = newNode;
    } 
    else {
        list.tail->next = newNode;
        newNode->prev = list.tail;
        list.tail = newNode;
    }
}

void xuat(LienKetDoi list) {
    Node* temp = list.head;
    if (temp == NULL) {
        cout << "Danh sach rong !" << endl;
        return;
    }
    cout << "Danh sach sinh vien: " << endl;
    while (temp != NULL) {
        cout << "Ma: " << temp->data.ma 
             << ", Ten: " << temp->data.ten 
             << ", Lop: " << temp->data.lop
             << ", Diem: " << temp->data.diem 
             << ", Hanh kiem: " << temp->data.hanhKiem << endl;
        temp = temp->next;
    }
}

void sinhvienHKY(LienKetDoi list) {
    Node* temp = list.head;
    bool found = false;
    cout << "Danh sach sinh vien hanh kiem yeu !" << endl;
    while (temp != NULL) {
        if (temp->data.hanhKiem == "Yeu") {
            cout << "Ma: " << temp->data.ma 
                 << ", Ten: " << temp->data.ten 
                 << ", Lop: " << temp->data.lop
                 << ", Diem: " << temp->data.diem << endl;
            found = true;
        }
        temp = temp->next;
    }
    if (!found) cout << "Khong co sinh vien hkiem yeu !" << endl;
}

void deleteFirst(LienKetDoi &list) {
    if (list.head == NULL) {
        cout << "Danh sach rong !" << endl;
        return;
    }

    Node* temp = list.head;
    list.head = list.head->next; 

    if (list.head != NULL) {
        list.head->prev = NULL;
    } 
    else {
        list.tail = NULL; 
    }

    delete temp;
}

void nhap(LienKetDoi &list, int n) {
    for (int i = 0; i < n; i++) {
        SinhVien sv;
        cout << "Nhap ma sv: "; cin >> sv.ma;
        cout << "Nhap ten sv: "; fflush(stdin); getline(cin, sv.ten);
        cout << "Nhap lop: "; fflush(stdin); getline(cin, sv.lop);
        cout << "Nhap diem tong ket: "; cin >> sv.diem;
        cout << "Nhap hanh kiem: ";fflush(stdin); getline(cin, sv.hanhKiem);

        insertLast(list, sv);
    }
}

int main() {
    LienKetDoi list;
    initialize(list);

    int n;
    cout << "Nhap so luong sinh vien: " << endl;
    cin >> n;

    nhap(list, n);

    cout << "Danh sach sinh vien sau khi nhap: " << endl;
    xuat(list);

    cout << "Sinh vien co hanh kiem yeu: " << endl;
    sinhvienHKY(list);

    cout << "Xoa sinh vien dau danh sach" << endl;
    deleteFirst(list);

    cout << "Danh sach sau khi xoa: " << endl;
    xuat(list);
}
