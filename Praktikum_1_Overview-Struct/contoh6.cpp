// /* File program : cetak2.c
// Melewatkan struktur sebagai parameter fungsi */
// #include <stdio.h>
// struct date { /* definisi global dari tipe date */
//     int month;
//     int day;
//     int year;
// };
// void cetak_tanggal(struct date);
// main()
// {
//     struct date today;

//     printf("Enter the current date (mm-dd-yyyy): ");
//     scanf("%d-%d-%d", &today.month, &today.day, &today.year);
//     cetak_tanggal(today);
// }
// void cetak_tanggal(struct date now)
// {
//     static char *nama_bulan[] = {
//     "Wrong month", "January", "February", "March",
//     "April", "May", "June", "July", "August",
//     "September", "October", "November", "December"
//     };
//     printf("Todays date is %s %d, %d\n\n",
//     nama_bulan[now.month], now.day, now.year);
// } 

// Versi cpp :
#include <iostream>
#include <string> // Tambahkan untuk menggunakan tipe data string
using namespace std;

// Definisikan struktur date sebagai global
struct Date {
    int month;
    int day;
    int year;
};

// Deklarasi fungsi cetak_tanggal dengan parameter bertipe Date
void cetak_tanggal(Date);

int main() {
    // Gunakan struktur Date
    Date today;

    cout << "Enter the current date (mm-dd-yyyy): ";
    cin >> today.month >> today.day >> today.year;

    cetak_tanggal(today);

    return 0;
}

// Implementasi fungsi cetak_tanggal dengan parameter bertipe Date
void cetak_tanggal(Date now) {
    // Mengganti array char dengan string
    static string nama_bulan[] = {
        "Wrong month", "January", "February", "March",
        "April", "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    cout << "Today's date is " << nama_bulan[now.month] << " " << now.day << ", " << now.year << endl << endl;
}
