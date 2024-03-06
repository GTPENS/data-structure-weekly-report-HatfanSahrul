#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* tail=NULL;

void buat(Node*& head, int a);
void tampil(Node* head);
void forTail(Node* head, Node*& tail);
void sisipkanSetelah(Node*& head, int after, int value);
void sisipkanSebelum(Node*& head, int before, int value);
void pencari(Node*& head, int i);
void hapus(Node*& head);
void hpsNodeIndex(Node *&head, int index);
void hpsNodeData(Node *&head, int data);

int main(){
    Node* head=NULL;
    buat(head, 10);
    tampil(head);
    buat(head, 30);
    tampil(head);
    buat(head, 47);
    tampil(head);
    buat(head, 76);
    tampil(head);
    sisipkanSetelah(head, 30, 45);
    tampil(head);
    sisipkanSebelum(head, 10, 37);
    tampil(head);
    pencari(head, 47);
    tampil(head);
    hpsNodeIndex(head, 2);
    tampil(head);
    hpsNodeData(head, 47);
    tampil(head);
    hapus(head);
}

void buat(Node*& head, int a){
    Node* newNode = new Node();
    newNode->data = a;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        tail = head; 
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    forTail(head, tail);
}
void tampil(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void forTail(Node* head, Node*& tail){
    tail=head;
    while(tail->next != NULL){
        tail=tail->next;
    }
    // cout<<"tail is "<<tail->data<<endl;
}
void pencari(Node*& head, int i){
    Node* cari=head;
    while(cari->data!=i){
        cari=cari->next;
    }
    cout<<"pencarian "<<cari->data<<" "<<cari->next<<endl;
}
void sisipkanSetelah(Node*& head, int after, int value){
    Node* newNode = new Node();
    newNode->data = value;

    Node* temp = head;
    while (temp != nullptr && temp->data != after) {
        temp = temp->next;
    }

    if (temp != nullptr) {
        newNode->next = temp->next;
        temp->next = newNode;
    } else {
        cout << "data " << after << " tidak ada" << endl;
    }  
}
void sisipkanSebelum(Node*& head, int before, int value){
    Node* newNode = new Node();
    newNode->data = value;

    Node* temp = head;
    while (temp != nullptr && temp->next->data != before) {
        temp = temp->next;
    }

    if (temp != nullptr) {
        newNode->next = temp->next;
        temp->next = newNode;
    } else {
        cout << "data " << before << " tidak ada" << endl;
    }  
}
void hapus(Node*& head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void hpsNodeIndex(Node *&head, int index){
    cout<<"menghapus node ke-"<<index<<endl;
    Node* newNode=head;
    Node* bridge=head;
    for(int k=0;k<index;k++){
        newNode=newNode->next;
    }
    for (int i = 0; i < index-1; i++){
        bridge=bridge->next;
    }
    bridge->next=newNode->next;

    delete newNode;
}

void hpsNodeData(Node *&head, int data){
    cout<<"menghapus node dengan nilai "<<data<<endl;
    Node* newNode=head;
    Node* bridge=new Node();
    while(newNode->next->data!=data){
        newNode=newNode->next;
    }
    bridge=newNode;
    newNode=newNode->next;
    bridge->next=newNode->next;
    
    delete newNode;
}