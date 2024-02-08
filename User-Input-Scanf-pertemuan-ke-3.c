



/*
Ambil empat variabel bilangan bulat a, b, x dan y.
Pindai nilai variabel dari pengguna menggunakan fungsi scanf().
Sekarang cetak output dari persamaan berikut: (a*b) + (x*y)
*/


#include<stdio.h>


int main()
{

    int a,b,x,y;

    printf("Enter the value of a, b, x and y:\n");
    scanf("%d%d%d%d",&a,&b,&x,&y);

    printf("%d\n",(a*b)+(x*y));

    return 0;
}

/*

Program ini adalah sebuah contoh sederhana dalam bahasa C yang membaca empat nilai dari pengguna (a, b, x, dan y), dan kemudian menghitung hasil dari ekspresi (a * b) + (x * y). Berikut adalah penjelasan langkah demi langkah:

1. ```#include<stdio.h>``` - Ini adalah preprocessor directive yang memasukkan file header ```stdio.h``` ke dalam program. Ini diperlukan karena program menggunakan fungsi ```printf()``` dan ```scanf()``` yang terdefinisi di dalam file header tersebut.

2. ```int main()``` - Ini adalah fungsi utama dari program. Eksekusi program dimulai dari sini.

3. ```int a, b, x, y;``` - Ini adalah deklarasi empat variabel bertipe integer: a, b, x, dan y.

4. ```printf("Enter the value of a, b, x and y:\n");``` - Ini mencetak pesan ke layar yang meminta pengguna untuk memasukkan nilai a, b, x, dan y.

5. ```scanf("%d%d%d%d", &a, &b, &x, &y);``` - Ini membaca input dari pengguna dalam bentuk empat nilai bertipe integer dan menyimpannya dalam variabel a, b, x, dan y.

6. ```printf("%d\n", (a*b) + (x*y));``` - Ini adalah pernyataan yang mencetak hasil dari ekspresi (a * b) + (x * y) ke layar. Ekspresi ini adalah hasil dari perkalian nilai a dan b ditambah dengan perkalian nilai x dan y.

7. ```return 0;``` - Ini mengakhiri fungsi ```main()``` dan mengembalikan nilai 0, menandakan bahwa program telah berakhir dengan sukses.

*/
