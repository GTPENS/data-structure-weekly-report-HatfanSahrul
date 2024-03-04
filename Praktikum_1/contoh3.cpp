// /* File program : student2.c
// Array struktur untuk menyimpan data-data student */
// #include <stdio.h>
// #define MAKS 20
// struct date { //definisi global dr tipe date
//     int month;
//     int day;
//     int year;
// };
// struct student { //definisi global dr tipe student
//     char name[30];
//     struct date birthday;
// };
// //deklarasi global dari variabel student
// struct student data_mhs[MAKS];
// main()
// {
//     int i=0, sudah_benar, jml;
//     char lagi;
//     //memasukkan data
//     do
//     {
//         printf("Name : ");
//         fgets(data_mhs[i].name,sizeof data_mhs[i].name,stdin);
//         printf("Birthday (mm-dd-yyyy): ");
//         scanf("%d-%d-%d",
//         &data_mhs[i].birthday.month,
//         &data_mhs[i].birthday.day,
//         &data_mhs[i].birthday.year);
//         printf("\n");
//         i++;
//         printf("Mau memasukkan data lagi [Y/T] ? ");
//     do
//     {
//         lagi = getchar( ); //baca tombol
//         sudah_benar = (lagi == 'Y') || (lagi== 'y')||
//         (lagi == 'T') || (lagi == 't');
//     } while(! sudah_benar);
//         //hapus sisa data dalam penampung keyboard
//         fflush(stdin);
//         printf("\n");
//     } while(lagi == 'Y' || lagi == 'y');
//         jml = i;
//         //menampilkan data
//         printf("DATA SISWA\n");
//     for (i=0; i<jml; i++)
//     {
//         printf("%d. Name : %s", i+1, data_mhs[i].name);
//         printf(" Birthday : %d-%d-%d\n\n",
//         data_mhs[i].birthday.month,
//         data_mhs[i].birthday.day,
//         data_mhs[i].birthday.year );
//     };
// }

//Versi cpp : 
#include <iostream>
#include <string> // Tambahkan untuk menggunakan tipe data string
#include <limits> // untuk limit numeric
using namespace std;

#define MAKS 20

struct Date {
    int month;
    int day;
    int year;
};

struct Student {
    string name;
    Date birthday;
};

Student data_mhs[MAKS]; // Menggunakan array struktur secara global

int main() {
    int i = 0, jml;
    char lagi;

    // Memasukkan data
    do {
        cout << "Name : ";
        getline(cin, data_mhs[i].name); // Mengganti fgets dengan getline untuk membaca baris
        cout << "Birthday (mm-dd-yyyy): ";
        cin >> data_mhs[i].birthday.month >> data_mhs[i].birthday.day >> data_mhs[i].birthday.year;
        cout << endl;
        i++;

        cout << "Mau memasukkan data lagi [Y/T] ? ";
        do {
            cin >> lagi; // Baca karakter
        } while (tolower(lagi) != 'y' && tolower(lagi) != 't'); // Ubah ke huruf kecil dan periksa

        // Hapus sisa data dalam penampung keyboard
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << endl;
    } while (lagi == 'y');

    jml = i;

    // Menampilkan data
    cout << "DATA SISWA" << endl;
    for (i = 0; i < jml; i++) {
        cout << i + 1 << ". Name : " << data_mhs[i].name << endl;
        cout << "   Birthday : " << data_mhs[i].birthday.month << "-"
             << data_mhs[i].birthday.day << "-" << data_mhs[i].birthday.year << endl
             << endl;
    }

    return 0;
}
