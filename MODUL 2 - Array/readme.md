# <h1 align="center">Laporan Praktikum Modul Array</h1>
<p align="center">Yasmine Alifta</p>

## Dasar Teori

Array merupakan sebuah koleksi yang memuat komponen-komponen bertipe data sama, dengan jumlah komponen tetap[1]. Array dapat berupa satu dimensi atau multidimensi berdasarkan jumlah arah pertumbuhan array. Berikut adalah beberapa jenis array:

1. Array Satu Dimensi

Array satu dimensi merupakan sebuah array dimana di dalamnya setiap komponen ditata dalam format sebuah daftar (deret atau senarai)[1]. Indeks yang dimiliki dan digunakan untuk mengakses elemen dimulai dari 0 dsn diakhiri jumlah elemen-1. Untuk mendeklarasikannya menggunakan tanda [].

2. Array Dua Dimensi

Array dua dimensi adalah sebuah koleksi yang memuat sejumlah tetap komponen yang ditata dalam baris dan kolom, dimana semua komponen bertipe sama[1]. Setiap baris dan setiap kolom dari sebuah array dua dimensi merupakan sebuah array satu dimensi. Setiap nilai data disimpan dalam format matriks sesuai dengan nilai data yang ditentukan array.

3. Array Multidimensi

Array multidimensi merupakan suatu array yang mempunyai lebih dari satu dimensi dan memiliki kapasitas memori yang lebih besar. Ini adalah kumpulan item yang homogen dimana setiap elemen diakses menggunakan beberapa indeks. 

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

Program ini menampilkan cara mendefinisikan, mengisi, dan menampilkan data dalam array 3 dimensi. Pertama, array arr dideklarasikan dengan 2 lapisan, masing-masing berisi array 3x3. Lalu, perulangan bersarang digunakan untuk meminta pengguna memasukkan nilai untuk setiap elemen array. Kemudian, loop bersarang yang serupa digunakan untuk menampilkan nilai elemen array dengan label. Terakhir, loop bersarang tanpa label digunakan untuk menampilkan data array secara ringkas.

#### Output :
<img width="207" alt="Screenshot 2024-03-23 122529" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/ffcbdab6-a337-485e-90e4-bf107027bc88">

#### Full Code Screenshoot :
<img width="960" alt="Screenshot 2024-03-23 122740" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/60a9da25-c00f-4878-bce7-4b7fd3abf4ff">



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
Program diatas untuk mencari nilai maksimal pada Array. Program meminta user untuk memasukkan panjang array dan nilai elemen array. Kemudian, program mencari nilai maksimum dengan membandingkan setiap elemen array. Jika ada elemen yang lebih besar dari nilai maksimum saat ini, maka nilai maksimum diperbarui dan lokasinya disimpan. Program akan menampilkan nilai maksimum dan lokasinya ke layar.
#### Output :
<img width="432" alt="Screenshot 2024-03-23 121458" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/460d7572-7fd1-4c3c-ae60-79b83497e081">

#### Full Code Screenshoot :
<img width="960" alt="Screenshot 2024-03-23 122145" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/220fa272-c4f1-42cd-aa84-67c49fb009e5">



## Unguided 

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!
```C++
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Masukkan jumlah data: ";
  cin >> n;

  int data[n];
  for (int i = 0; i < n; i++) {
    cout << "Masukkan data ke-" << i + 1 << ": ";
    cin >> data[i];
  }

  cout << endl << "Data Array: ";
  for (int i = 0; i < n; i++) {
    cout << data[i] << " ";
  }

  cout << endl << endl << "Nomor Genap: ";
  for (int i = 0; i < n; i++) {
    if (data[i] % 2 == 0) {
      cout << data[i] << " ";
    }
  }

  cout << endl << endl << "Nomor Ganjil: ";
  for (int i = 0; i < n; i++) {
    if (data[i] % 2 == 1) {
      cout << data[i] << " ";
    }
  }

  cout << endl << endl;

  return 0;
}
```

Program diatas meminta pengguna untuk memasukkan jumlah data, kemudian membaca data tersebut dan menyimpannya dalam sebuah array. Program kemudian memisahkan data menjadi dua kategori: angka genap dan angka ganjil. Program kemudian menampilkan semua data dalam array, diikuti dengan daftar angka genap dan ganjil secara terpisah.

#### Output :
<img width="235" alt="Screenshot 2024-03-23 123020" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/93991b0c-8a1d-4f35-85cd-9a0cd14bf1bb">

#### Full Code Screenshoot :
<img width="960" alt="Screenshot 2024-03-23 123142" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/f4123b36-5771-436e-a122-82876f9cf73d">



### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!
```C++
#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel untuk menyimpan dimensi array
  int x, y, z;

  // Meminta user untuk memasukkan dimensi array
  cout << "Masukkan jumlah baris: ";
  cin >> x;
  cout << "Masukkan jumlah kolom: ";
  cin >> y;
  cout << "Masukkan jumlah layer: ";
  cin >> z;

  // Deklarasi array tiga dimensi
  int array[x][y][z];

  // Meminta user untuk memasukkan nilai array
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      for (int k = 0; k < z; k++) {
        cout << "Masukkan nilai array[" << i << "][" << j << "][" << k << "]: ";
        cin >> array[i][j][k];
      }
    }
  }

  // Menampilkan nilai array
  cout << endl << "Nilai array:" << endl;
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      for (int k = 0; k < z; k++) {
        cout << array[i][j][k] << " ";
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}
```

Program diatas menunjukkan penggunaan array tiga dimensi. Pengguna memasukkan dimensi array, lalu mengisi nilai setiap elemen array. Program kemudian menampilkan nilai array dalam format tabel. Array tiga dimensi berguna untuk menyimpan data dalam struktur multidimensi, seperti kubus atau matriks 3D.

#### Output :
<img width="226" alt="Screenshot 2024-03-23 123357" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/3521682b-79cd-4812-918b-c750af4ff8ea">

#### Full Code Screenshoot :
<img width="960" alt="Screenshot 2024-03-23 123445" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/2af3dacd-7905-4cff-87d4-bf836e47fd34">



### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!

```C++
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cout << "Masukkan jumlah elemen array: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Masukkan elemen array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Mencari nilai maksimum
  int max = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  // Mencari nilai minimum
  int min = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  // Menghitung nilai rata-rata
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  double avg = (double)sum / n;

  // Menampilkan menu
  int pilihan;
  do {
    cout << "\nMenu:\n";
    cout << "1. Tampilkan nilai maksimum\n";
    cout << "2. Tampilkan nilai minimum\n";
    cout << "3. Tampilkan nilai rata-rata\n";
    cout << "4. Keluar\n";
    cout << "Pilihan: ";
    cin >> pilihan;

    switch (pilihan) {
      case 1:
        cout << "Nilai maksimum: " << max << endl;
        break;
      case 2:
        cout << "Nilai minimum: " << min << endl;
        break;
      case 3:
        cout << "Nilai rata-rata: " << avg << endl;
        break;
      case 4:
        cout << "Terima kasih!" << endl;
        break;
      default:
        cout << "Pilihan tidak valid!" << endl;
    }
  } while (pilihan != 4);

  return 0;
}
```

Program ini meminta pengguna untuk memasukkan jumlah elemen array dan elemen-elemennya. Kemudian, program menghitung nilai maksimum, minimum, dan rata-rata dari array tersebut. Program menampilkan menu yang memungkinkan pengguna untuk melihat nilai maksimum, minimum, dan rata-rata, atau keluar dari program.

#### Output :
<img width="233" alt="Screenshot 2024-03-23 123651" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/885ce79b-74d5-416b-ae17-26ef4b6cfa0c">

<img width="200" alt="Screenshot 2024-03-23 123719" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/73e6384f-70c7-4957-9c1b-3349f9eb135b">


#### Full Code Screenshoot :
<img width="960" alt="Screenshot 2024-03-23 123819" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/89cc58fe-79a7-4645-93c0-9b18067328cd">


## Kesimpulan


## Referensi
[1] R. H. Sianipar, Pemrograman C++ untuk pemula. Penerbit INFORMATIKA, 2014.