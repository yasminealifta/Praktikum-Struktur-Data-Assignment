# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Yasmine Alifta</p>

## Dasar Teori

Array merupakan sebuah koleksi yang memuat komponen-komponen bertipe data sama, dengan jumlah komponen tetap[1]. Array dapat berupa satu dimensi atau multidimensi berdasarkan jumlah arah pertumbuhan array. Berikut adalah beberapa jenis array:

1. Array Satu Dimensi

Array satu dimensi merupakan sebuah array dimana di dalamnya setiap komponen ditata dalam format sebuah daftar (deret atau senarai)[1]. Untuk mendeklarasikannya menggunakan tanda []

2. Array Dua Dimensi

Array dua dimensi adalah sebuah koleksi yang memuat sejumlah tetap komponen yang ditata dalam baris dan kolom, dimana semua komponen bertipe sama[1]. Setiap baris dan setiap kolom dari sebuah array dua dimensi merupakan sebuah array satu dimensi. Setiap nilai data disimpan dalam format matriks sesuai dengan nilai data yang ditentukan array.

3. Array Multidimensi

Array multidimensi merupakan suatu array yang mempunyai leboh dari satu dimensi. Ini adalah kumpulan item yang homogen dimana setiap elemen diakses menggunakan beberapa indeks.

## Guided 

### 1. Program Input Array Tiga Dimensi

```C++
#include <iostream>
using namespace std;
// program input array 3 dimensi
int main()
{
    //d deklarasi array
    int arr[2][3][3];
    // input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z <<"]=";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // output array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z <<"] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}
```


### 2. Program Mencari Nilai Maksimal pada Array

```C++
#include <iostream>
using namespace std;
int main()
{
    // deklarasi variabel
    int maks, a, i = 1, lokasi = 0;
    cout << "Masukkan panjang array: ";
    // masukkan data
    cin >> a;
    int *array = new int[a];
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    // 
    maks = array[0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
}
```

## Unguided 

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!
```C++

```
#### Output :


#### Full Code Screenshoot :

### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!
```C++
```

#### Output :
#### Full Code Screenshoot :


### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!

```C++
```

#### Output :
#### Full Code Screenshoot :

## Kesimpulan


## Referensi
[1] R. H. Sianipar, Pemrograman C++ untuk pemula. Penerbit INFORMATIKA, 2014.