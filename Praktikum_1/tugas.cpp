// 1. Definisikan sebuah struktur (misalkan namanya = record) yang memiliki 3 buah
// field berupa sebuah integer (misalkan namanya = loop), sebuah array karakter
// dengan 5 elemen (misalkan namanya = word) dan sebuah float (misalkan namanya
// = sum). 

#include <iostream>
using namespace std;

struct record{
    int loop;
    string word;
    float sum;
};

int main(){
    //2. Deklarasikan sebuah variabel struktur (misalkan namanya = sample) yang didefinisikan memiliki tipe struktur record. 
    record sample={1, "Hatfan", 14.57f};

    return 0;
}
