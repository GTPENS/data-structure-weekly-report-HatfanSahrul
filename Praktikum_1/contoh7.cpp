// /* File program : posisi2.c
// Fungsi parameternya berupa pointer yg menunjuk ke struktur */
// #include <stdio.h>
// struct koordinat
// {
//     int x;
//     int y;
// };
// void tukar_xy(struct koordinat *);
// main()
// {
//     struct koordinat posisi;
//     printf("Masukkan koordinat posisi (x, y) : ");
//     scanf("%d, %d", &posisi.x, &posisi.y);
//     printf("x, y semula = %d, %d\n", posisi.x, posisi.y);
//     tukar_xy(&posisi);
//     printf("x, y sekarang = %d, %d\n", posisi.x, posisi.y);
// }
// void tukar_xy(struct koordinat *pos_xy)
// {
//     int z;
//     z = (*pos_xy).x;
//     (*pos_xy).x = (*pos_xy).y;
//     (*pos_xy).y = z;
// }

//Versi cpp :
#include <iostream>
using namespace std;

// Definisikan struktur koordinat sebagai global
struct Koordinat {
    int x;
    int y;
};

// Deklarasi fungsi tukar_xy dengan parameter bertipe pointer ke Koordinat
void tukar_xy(Koordinat *);

int main() {
    // Gunakan struktur Koordinat
    Koordinat posisi;

    cout << "Masukkan koordinat posisi (x, y): ";
    cin >> posisi.x >> posisi.y;

    cout << "x, y semula = " << posisi.x << ", " << posisi.y << endl;

    tukar_xy(&posisi);

    cout << "x, y sekarang = " << posisi.x << ", " << posisi.y << endl;

    return 0;
}

// Implementasi fungsi tukar_xy dengan parameter bertipe pointer ke Koordinat
void tukar_xy(Koordinat *pos_xy) {
    int z;
    z = pos_xy->x;
    pos_xy->x = pos_xy->y;
    pos_xy->y = z;
}
