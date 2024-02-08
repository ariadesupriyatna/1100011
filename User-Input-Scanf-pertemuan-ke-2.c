/*
Ambil suhu kota Dhaka sebagai masukan dalam skala Celsius
dari pengguna menggunakan fungsi scanf()
dan ubah ke Fahrenheit dan cetak. [Rumus: F = C(9/5) +32]

*/

#include<stdio.h>


int main()
{
    double celsius,farenheit;

    printf("Enter the temperature in Celsius:");
    scanf("%lf",&celsius);

    farenheit=((celsius*(9.0/5.0))+32);
    printf("%lf\n",farenheit);

    return 0;
}

/*

Program ini adalah sebuah program sederhana dalam bahasa C yang mengonversi suhu dari skala Celsius ke Fahrenheit. Berikut adalah penjelasan langkah demi langkah:

1. ```#include<stdio.h>``` - Ini adalah preprocessor directive yang memasukkan file header ```stdio.h``` ke dalam program. Ini diperlukan karena program menggunakan fungsi ```printf()``` dan ```scanf()``` yang terdefinisi di dalam file header tersebut.

2. ```int main()``` - Ini adalah fungsi utama dari program. Eksekusi program dimulai dari sini.

3. ```double celsius, farenheit;``` - Ini adalah deklarasi dua variabel, ```celsius``` dan ```farenheit```, yang bertipe ```double```. Variabel ```celsius``` akan menyimpan suhu dalam skala Celsius yang dimasukkan oleh pengguna, sedangkan variabel ```farenheit``` akan menyimpan hasil konversi ke skala Fahrenheit.

4. ```printf("Enter the temperature in Celsius:");``` - Ini mencetak pesan ke layar yang meminta pengguna untuk memasukkan suhu dalam skala Celsius.

5. ```scanf("%lf",&celsius);``` - Ini membaca input dari pengguna yang berupa suhu dalam skala Celsius, dan menyimpannya dalam variabel ```celsius```.

6. ```farenheit=((celsius*(9.0/5.0))+32);``` - Ini adalah rumus untuk mengonversi suhu dari skala Celsius ke Fahrenheit. Nilai suhu dalam skala Celsius dikalikan dengan 9/5, lalu ditambahkan dengan 32, sesuai dengan rumus konversi Fahrenheit. Hasilnya disimpan dalam variabel ```farenheit```.

7. ```printf("%lf\n",farenheit);``` - Ini mencetak hasil konversi suhu dari skala Celsius ke Fahrenheit ke layar.

8. ```return 0;``` - Ini mengakhiri fungsi ```main()``` dan mengembalikan nilai 0, menandakan bahwa program telah berakhir dengan sukses.

*/
