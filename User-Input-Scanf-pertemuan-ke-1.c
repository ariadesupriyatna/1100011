/*

Ambil alfabet huruf kecil sebagai masukan dari pengguna dan cetak versi kapital dari huruf tersebut. [Jika pengguna memberikan masukan 'a', Anda harus mencetak 'A']

*/



#include<stdio.h>


int main()
{

    char letter;

    printf("Enter a small letter: \n");
    scanf("%c",&letter);
    printf("Capital version is: %c\n",letter-32);

    return 0;
}


/*

Mari kita jelaskan program tersebut langkah demi langkah:

1. ```#include<stdio.h>``` - Ini adalah preprocessor directive yang memasukkan file header ```stdio.h``` ke dalam program. Ini diperlukan karena program menggunakan fungsi ```printf()``` dan ```scanf()``` yang terdefinisi di dalam file header tersebut.

2. ```int main()``` - Ini adalah fungsi utama dari program. Eksekusi program dimulai dari sini.

3. ```char letter;``` - Ini adalah deklarasi variabel ```letter``` yang bertipe ```char```, yang akan digunakan untuk menyimpan huruf kecil yang dimasukkan oleh pengguna.

4. ```printf("Enter a small letter: \n");``` - Ini mencetak pesan ke layar yang meminta pengguna untuk memasukkan sebuah huruf kecil.

5. ```scanf("%c",&letter);``` - Ini membaca input dari pengguna dan menyimpannya dalam variabel ```letter```.

6. ```printf("Capital version is: %c\n",letter-32);``` - Ini mencetak hasil konversi huruf kecil yang dimasukkan oleh pengguna menjadi huruf besar. Huruf besar dihasilkan dengan mengurangkan 32 dari nilai ASCII huruf kecil. Kemudian hasilnya dicetak ke layar.

7. ```return 0;``` - Ini mengakhiri fungsi ```main()``` dan mengembalikan nilai 0, menandakan bahwa program telah berakhir dengan sukses.

*/
