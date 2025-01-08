#include <stdio.h>
#include <stdlib.h>

int main()
{
    // -------------------- Praktikum 10 --------------------
    // Menampilkan garis pemisah untuk memulai praktikum
    printf("--------------------Praktikum 10--------------------\n\n\n");

    // -------------------- Percobaan 1 --------------------
    // Menampilkan penjelasan fungsi percobaan 1
    printf("Percobaan 1\n");
    printf("Fungsi: Program ini akan terus meminta input karakter dari pengguna hingga 'X' dimasukkan.\n");
    // Program untuk mengecek karakter yang dimasukkan dan berhenti jika 'X' atau 'x' dimasukkan
    char huruf_1;
    while(huruf_1 != 'X'){
        printf("Masukkan sebuah karakter (berhenti bila karakter merupakan X atau x besar): ");
        scanf("%c", &huruf_1);
        fflush(stdin); // Membersihkan input buffer
    }
    printf("Program dihentikan karena Anda memasukkan 'X'.\n\n");

    // Menampilkan garis pemisah
    printf("--------------------------------------------------------------------\n");
    printf("--------------------------------------------------------------------\n\n\n");

    // -------------------- Percobaan 2 dan 3 --------------------
    // Menampilkan penjelasan fungsi percobaan 2 dan 3
    printf("Percobaan 2 dan 3\n");
    printf("Fungsi: Program ini akan menerima input bilangan dari pengguna dan menghitung total, rata-rata, maksimum, dan minimum bilangan tersebut.\n");
    // Program untuk menghitung total, rata-rata, maksimum, dan minimum dari input bilangan
    int angka_2, $angka_2 = 0, i_2 = 0, max_2 = 0, min_2, rata2_2;
    char jwb_2 = 'y';

    while(jwb_2 == 'y'){
        i_2++; // Menghitung jumlah input
        printf("Masukkan bilangan ke-%d: ", i_2);
        scanf("%d", &angka_2);
        
        // Menentukan nilai maksimum dan minimum
        if(max_2 < angka_2) max_2 = angka_2;
        if(min_2 > angka_2) min_2 = angka_2;

        // Menjumlahkan bilangan
        $angka_2 += angka_2;
        fflush(stdin);

        printf("Mau memasukkan data lagi [y/t]? ");
        scanf("%c", &jwb_2);

        // Garis pemisah untuk percobaan ini
        printf("--------------------------------------------------------------------\n");
        printf("--------------------------------------------------------------------\n\n");
    }

    // Menampilkan hasil akhir dari perhitungan
    printf("Total bilangan = %d\n", $angka_2);
    rata2_2 = $angka_2 / i_2;
    printf("Rata-rata: %d\n", rata2_2);
    printf("Maksimum: %d\n", max_2);
    printf("Minimum: %d\n", min_2);

    // Menampilkan garis pemisah untuk percobaan berikutnya
    printf("--------------------------------------------------------------------\n");
    printf("--------------------------------------------------------------------\n\n\n");

    // -------------------- Percobaan 4 --------------------
    // Menampilkan penjelasan fungsi percobaan 4
    printf("Percobaan 4\n");
    printf("Fungsi: Program ini akan menampilkan hasil penjumlahan angka dari 1 hingga angka yang dimasukkan oleh pengguna.\n");
    // Program untuk menampilkan hasil penjumlahan dari angka 1 sampai angka yang dimasukkan oleh user
    int angka_3, $angka_3 = 0;
    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &angka_3);

    for(int i = 1; i <= angka_3; i++){
        printf("%d ", $angka_3);
        $angka_3 += i; // Menambahkan angka yang sedang dihitung ke dalam total
    }
    fflush(stdin);

    // Menampilkan garis pemisah untuk percobaan berikutnya
    printf("\n--------------------------------------------------------------------\n");
    printf("--------------------------------------------------------------------\n\n\n");

    // -------------------- Percobaan 5 --------------------
    // Menampilkan penjelasan fungsi percobaan 5
    printf("Percobaan 5\n");
    printf("Fungsi: Program ini akan menghitung jumlah karakter dan jumlah spasi dalam kalimat yang dimasukkan oleh pengguna.\n");
    // Program untuk menghitung jumlah karakter dan spasi dalam kalimat yang dimasukkan oleh user
    int kalimat_5 = 0, spasi_5 = 0;
    char input_5;
    printf("Masukkan sembarang kalimat: ");
    while(1){
        scanf("%c", &input_5);
        if(input_5 == '\n'){
            break; // Berhenti saat user menekan enter
        }
        if(input_5 == ' ')
            spasi_5++; // Menambahkan jumlah spasi
        else
            kalimat_5++; // Menambahkan jumlah karakter selain spasi
    }
    printf("Jumlah karakter = %d\n", kalimat_5);
    printf("Jumlah spasi = %d", spasi_5);

    // Menampilkan garis pemisah untuk percobaan berikutnya
    printf("\n--------------------------------------------------------------------\n");
    printf("--------------------------------------------------------------------\n\n\n");

    // -------------------- Percobaan 6 --------------------
    // Menampilkan penjelasan fungsi percobaan 6
    printf("Percobaan 6\n");
    printf("Fungsi: Program ini akan menghitung jumlah digit dari sebuah bilangan yang dimasukkan oleh pengguna.\n");
    // Program untuk menghitung jumlah digit dari sebuah bilangan
    int angka_6, 
        $angka_6 = 0, 
        digit_6 = 0;
    printf("Masukkan sejumlah bilangan: ");
    scanf("%d", &angka_6);

    while(angka_6 != 0){
        digit_6 = angka_6 % 10; // Mengambil digit terakhir
        $angka_6 += digit_6; // Menambahkan digit ke total
        angka_6 /= 10; // Menghapus digit terakhir
        printf("%d", digit_6);
        if(angka_6 > 0)
            printf(" + "); // Menampilkan tanda '+' antar digit
    }
    printf(" = %d", $angka_6);

    // Menampilkan garis pemisah untuk percobaan berikutnya
    printf("\n--------------------------------------------------------------------\n");
    printf("--------------------------------------------------------------------\n\n\n");

    // -------------------- Percobaan 7 --------------------
    // Menampilkan penjelasan fungsi percobaan 7
    printf("Percobaan 7\n");
    printf("Fungsi: Program ini akan menghitung berapa lama waktu yang dibutuhkan untuk mencapai biaya haji dengan cicilan per bulan dan kenaikan tahunan.\n");
    // Program untuk menghitung berapa lama waktu yang dibutuhkan untuk mencapai biaya haji
    int biaya_haji = 0, gaji = 0, jumlah_gaji = 0, hasil_naik = 0, i_7 = 0;
    float kenaikan;

    printf("Biaya haji: ");
    scanf("%d", &biaya_haji);
    printf("Kenaikan tiap tahun (%%): ");
    scanf("%f", &kenaikan);
    kenaikan /= 100; // Mengubah persen menjadi desimal
    printf("Cicilan tiap perbulan: ");
    scanf("%d", &gaji);

    hasil_naik = biaya_haji;
    while(jumlah_gaji < hasil_naik){
        jumlah_gaji += gaji; // Menambahkan cicilan per bulan
        i_7++;
        if(i_7 % 12 == 0){ // Setiap tahun, biaya haji naik
            hasil_naik += (biaya_haji * kenaikan);
        }
        printf("Cicilan bulan ke-%d\tJumlah cicilan = %d\tBiaya Haji = %d\n", i_7, jumlah_gaji, hasil_naik);
    }
    printf("Tiket haji lunas pada bulan ke-%d", i_7);

    return 0;
}
