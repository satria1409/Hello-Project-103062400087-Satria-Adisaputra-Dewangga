#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL; // gunakan NULL untuk kompiler lawas
    return newNode;
}

void displayList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << "[" << temp->data << "]";
        if (temp->next != NULL) cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteAfter(Node* prevNode) {
    if (prevNode == NULL || prevNode->next == NULL) {
        cout << "Tidak ada node yang bisa dihapus setelah simpul ini." << endl;
        return;
    }
    Node* temp = prevNode->next;
    prevNode->next = temp->next;
    delete temp;
}

void freeList(Node* &head) {
    Node* curr = head;
    while (curr != NULL) {
        Node* nxt = curr->next;
        delete curr;
        curr = nxt;
    }
    head = NULL;
}

int main() {
    // Buat linked list: [10] -> [20] -> [30] -> [40] -> [50]
    Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);
    head->next->next->next->next = createNode(50);

    cout << "Linked List awal: ";
    displayList(head);

    // Cari node dengan data 20, lalu hapus node setelahnya (yaitu 30)
    Node* current = head;
    while (current != NULL && current->data != 20) {
        current = current->next;
    }

    if (current != NULL) {
        deleteAfter(current);
    } else {
        cout << "Node dengan data 20 tidak ditemukan." << endl;
    }

    cout << "Linked List setelah penghapusan (menghapus setelah 20): ";
    displayList(head);

    // Bersihkan memori sisa sebelum keluar
    freeList(head);
    return 0;
}

