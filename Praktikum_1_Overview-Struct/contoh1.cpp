// /* File program : student1.c
// Mengisi field dr variabel struktur kemudian menampilkannya */
// #include <stdio.h>
// #include <string.h>
// struct date { /* definisi global dari tipe date */
//     int month;
//     int day;
//     int year;
// };
// struct student{ /* definisi global dari tipe student */
//     char name[30];
//     struct date birthday;
// };
// /* deklarasi global dari variabel mhs*/
// struct student mhs;
// main(){
//     /* memberikan nilai kepada field dari struktur mhs */
//     strcpy(mhs.name, "MUHAMMAD IHSAN");
//     mhs.birthday.month = 8;
//     mhs.birthday.day = 10;
//     mhs.birthday.year = 1970;
//     /* menampilkan isi semua field dari struktur mhs */
//     printf("Name : %s\n", mhs.name);
//     printf("Birthday : %d-%d-%d\n",mhs.birthday.month,
//     mhs.birthday.day, mhs.birthday.year);
// }

// versi file cpp : 
#include <iostream>//menambahkan iostream karena akan ada output
#include <stdio.h>
#include <string.h>
#include <string>
struct date { /* definisi global dari tipe date */
    int month;
    int day;
    int year;
};
struct student{ /* definisi global dari tipe student */
    std::string name; //merubah ke tipe data string
    date birthday;// engahpus struct
};
/* deklarasi global dari variabel mhs*/
student mhs;

int main(){ //penambahan int main
    /* memberikan nilai kepada field dari struktur mhs */
    mhs.name ="MUHAMMAD IHSAN";
    mhs.birthday.month = 8;
    mhs.birthday.day = 10;
    mhs.birthday.year = 1970;
    /* menampilkan isi semua field dari struktur mhs */
    std::cout << "Name : " << mhs.name << std::endl;
    std::cout << "Birthday : " << mhs.birthday.month << "-" << mhs.birthday.day << "-" << mhs.birthday.year << std::endl;
}