// /* File program : cetak1.c
// Melewatkan elemen struktur sbg parameter fungsi scr nilai */
// #include <stdio.h>
// void cetak_tanggal(int, int, int);
// main()
// {
//    struct date { /* definisi lokal dari tipe date */
//       int month;
//       int day;
//       int year;
//    } today;

//    printf("Enter the current date (mm-dd-yyyy): ");
//    scanf("%d-%d-%d", &today.month, &today.day, &today.year);

//    cetak_tanggal(today.month, today.day, today.year);
//    }
//    void cetak_tanggal(int mm, int dd, int yy)
//    {
//    static char *nama_bulan[] = {
//    "Wrong month", "January", "February", "March",
//    "April", "May", "June", "July", "August",
//    "September", "October", "November", "December"
//    };
//    printf("Todays date is %s %d, %d\n\n",
//    nama_bulan[mm],dd,yy);
// } 

// Versi cpp : 
#include <iostream>
#include <string> // Tambahkan untuk menggunakan tipe data string
using namespace std;

void cetak_tanggal(int, int, int);

int main() {
    // Definisi struktur date sebagai lokal di dalam main
    struct Date {
        int month;
        int day;
        int year;
    } today;

    cout << "Enter the current date (mm-dd-yyyy): ";
    cin >> today.month >> today.day >> today.year;

    cetak_tanggal(today.month, today.day, today.year);

    return 0;
}

void cetak_tanggal(int mm, int dd, int yy) {
    // Mengganti array char dengan string
    static string nama_bulan[] = {
        "Wrong month", "January", "February", "March",
        "April", "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    cout << "Today's date is " << nama_bulan[mm] << " " << dd << ", " << yy << endl << endl;
}
