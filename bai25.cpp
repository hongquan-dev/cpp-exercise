#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

struct DuAn {
    int ma;
    string ten;
    string quymo;
    float kinhphi;
};

struct Node {
    DuAn data;
    Node *left;
    Node *right;
};
typedef Node* node;

node makeNode(DuAn data) {
    node tmp = new Node;
    tmp->data = data;
    tmp->left = NULL;
    tmp->right = NULL;

    return tmp;
}

struct Tree {
    node root;
};

void initializeTree(Tree &tree) {
    tree.root = NULL;
}

node insertTree(node root, DuAn data) {
    if (root == NULL) {
        return makeNode(data);
    }
    if (data.kinhphi >= root->data.kinhphi) {
        root->right = insertTree(root->right, data);
    }
    else if (data.kinhphi < root->data.kinhphi) {
        root->left = insertTree(root->left, data);
    }

    return root;
}

void traversalTree(node root) {
    if (root != NULL) {
        traversalTree(root->left);
        cout << left << setw(5) << root->data.ma << setw(5) << root->data.ten << setw(5) << root->data.quymo << setw(5) << root->data.kinhphi << endl;
        traversalTree(root->right);
    }
}

void checkKinhPhi10Ty(node root) {
    if (root != NULL) {
        checkKinhPhi10Ty(root->left);
        if (root->data.kinhphi > (float)10) {
            cout << left << setw(5) << root->data.ma << setw(5) << root->data.ten << setw(5) << root->data.quymo << setw(5) << root->data.kinhphi << endl;
        }
        checkKinhPhi10Ty(root->right);
    }
}

void checkKinhPhi(node root, float money) {
    if (root != NULL) {
        checkKinhPhi(root->left, money);
        if (root->data.kinhphi == money) {
            cout << "Co su an kinh phi 100 ty !" << endl;
            return;
        }
        checkKinhPhi(root->right, money);
    }
}

int main() {
    int n;
    do {
        cout << "Nhap n: "; cin >> n;
    }
    while (n <= 0);

    Tree tree;
    initializeTree(tree);

    for (int i = 1; i <= n; i++) {
        DuAn tmp;
        cout << "Nhap ma du an: "; cin >> tmp.ma;
        cout << "Nhap ten du an: "; fflush(stdin); getline(cin, tmp.ten);
        cout << "Nhap quy mo du an: "; fflush(stdin); getline(cin, tmp.quymo);
        cout << "Nhap kinh phi du an: "; cin >> tmp.kinhphi;

        tree.root = insertTree(tree.root, tmp);
    }

    traversalTree(tree.root);
    cout << "---------------------------------------------" << endl;
    checkKinhPhi10Ty(tree.root);
    cout << "---------------------------------------------" << endl;
    checkKinhPhi(tree.root, 100);
}