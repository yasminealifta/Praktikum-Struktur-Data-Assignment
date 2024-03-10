# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Yasmine Alifta</p>


## Dasar Teori

Dalam penulisan sehari-hari pasti menggunakan huruf, angka,tanda baca, dan karakter lainnya. Dalam bahasa pemrograman jenis-jenis angka, huruf, dan karakter lainnya memiliki jenis penyimpanan yang berbeda-beda dan setiap jenis penyimpanan itu biasa dinamakan tipe data[1].

Tipe data adalah jenis data yang akan disimpan di dalam suatu variabel. Tipe data mendefinisikan metode penyimpanan untuk merepresentasikan informasi diinterpretasikan. Tipe data berkaitan erat dengan pemesanan memori untuk variabel karena tipe data variabel menentukan cara kompilator menginterpretasikan isi memori. Tipe data juga menentukan operasi-operasi dan operator apa saja yang dapat dilakukan dan digunakan terhadap variabel yang dibentuk berdaasarkan tipe data yang digunakan[2]. Tipe data dibagi menjadi 3, yaitu:

1.Tipe Data Primitif

Tipe data primitif adalah tipe data yang sederhana dan sudah siap digunakan[2]. Tipe data primitif terdiri dari beberapa jenis, yaitu integer, float, char, dan boolean.
- integer = untuk menampung bilangan bulat
- float = untuk menampung bilangan desimal
- char = untuk menyimpan bentuk apapun seperti, huruf, simbol, ataupun karakter lain
- boolean = untuk menyimpan nilai logika benar atau salah   

2.Tipe Data Abstrak

Tipe data abstrak atau biasa disebut tipe data bentukan pengguna. Pada tipe data abstrak bisa berisi banyak tipe data, jadi nilainya bisa lebih dari satu dan beragam tipe data. Dalam pemrograman berorientasi objek, tipe data abstrak disebut sebagai kelas. Sebuah instance dari suatu kelas disebut objek. Tipe data abstrak adalah dasar untuk memahami dan menerapkan tipe data tertentu, asli atau ditentukan pengguna.

3.Tipe Data Koleksi

Tipe data koleksi adalah tipe data yang digunakan untuk mengelompokkakn dan menyimpan beberapa nilai atau objek secara bersamaan. Ada beberapa tipe data koleksi yang umum digunakan, diantaranya:

- Vektor = Disebut juga array dinamis, yaitu array yang memungkinkan proses insert dan delete elemen bagian tengah array dan seakan-akan terlihat seperti mengubah ukuran array tersebut. Vektor digunakan untuk menyimpan elemen dengan tipe data serupa.

- Array = tipe data array adalah tipe data yang digunakan untuk menyimpan banyak data dalam satu variabel dengan tipe data yang sama. Ciri-ciri bahwa tipe data itu menggunakan array tandanya adalah setelah variabel nya terdapat tanda [][1].

- Map = Mirip dengan array namun indeks nya memungkinkan berupa tipe data selain integer dan indeks tersebut diberi nama "key".
## Guided 

### 1. Tipe Data Primitif

```C++
#include <iostream>
using namespace std;
// Main Program

main()
{
    char op;
    float num1,num2;
    //It allows user to enter operator i ,+,-,*,/
    cout <<"Maasukan operator: ";
    cin >> op;
    // it allows user to enter the operands
    cout <<"Masukkan angka 1 dan 2: ";
    cin >> num1 >> num2;
    //switch statement begins
    switch (op)
    {
        //if user enter +
    case '+':
        cout << num1 + num2;
        break;
    //if user enter -
    case '-':
        cout << num1 - num2;
        break;
    //if user enter *
    case '*':
        cout << num1 * num2;
        break;
    //if user enter /
    case '/':
        cout << num1 / num2;
        break;
    //if the operator is other than +-/*
    //error massage will display
    default:
        cout << "error! operator is not correct";
    } //switch statement ends
    return 0;
}

```

Pada kode diatas program dimulai dari fungsi main(), kemudian pengguna akan diminta memasukkan operator dan angka. Inputan angka yang dimasukkan akan diterima oleh variabel num1 dan num2. Function cout akan meminta user untuk memasukkan operator dan angka. Function cin akan membaca operator dan angka yang telah di masukkan oleh user. Jika operator yang dimasukkan tidak sesuai akan menampilkan pesan error kemudian program dikembalikan ke 0. jika operator benar maka hasilnya akan muncul seperti pada gambar dibawah. Pada kode diatas dimasukkan operator (/) dengan angka yang pertama 20 dan angka yang kedua 2 menghasilkan output 10 yang berarti program diatas berjalan dengan baik.

#### Output:
<img width="385" alt="Screenshot 2024-03-09 170905" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/fad73b02-65ed-4504-ba3b-f7eb555280ad">

#### Full code Sreenshot:
<img width="960" alt="Screenshot 2024-03-09 170905" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/409bf408-7f99-42f8-84d2-dc633366a2f9">

### 2. Tipe Data Abstrak

```C++
#include <stdio.h>

struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    //menggunakan struct
    struct Mahasiswa mhs1,mhs2;
    //mengisi nilai ke struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;

    //mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Umur: %d\n", mhs2.age);
    return 0;
}

```

Kode diatas berjalan dengan menggunakan fungsi struct Mahasiswa yang terdiri dari 3 komponen yaitu, name dengan tipe data char, address dengan tipe data char, dan age dengan tipe data integer. Dengan menggunakan struct dapat menyimpan beberapa data dalam satu variabel. Setelah mengisi nilai ke struct mhs1 dan mhs2 maka isi struct akan tercetak menggunakan printf. Seperti pada gambar dibawah.

#### Output:
<img width="351" alt="Screenshot 2024-03-09 171106" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/256c62e1-a8ba-49e9-8dec-9a5f93d7435a">


#### Full code Sreenshot:
<img width="960" alt="Screenshot 2024-03-09 171106" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/2528db77-d131-4914-b919-b90bd6b70f12">

### 3. Tipe Data Koleksi

```C++
#include <iostream>
using namespace std;

int main()
{
    //deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;

    //mencetak array
    cout << "Isi array pertama :" << nilai[0] << endl;
    cout << "Isi array kedua :" << nilai[1] << endl;
    cout << "Isi array ketiga :" << nilai[2] << endl;
    cout << "Isi array keempat :" << nilai[3] << endl;
    cout << "Isi array kelima :" << nilai[4] << endl;
    return 0;
}
```
Pada kode diatas, nilai array di deklarasikan di inisialisasikan ke setiap elemen array. Seperti pada nilai array pertama di inisialisasikan dengan nilai 23. Setelah di inisialisasikan kode akan mencetak array menggunakan fungsi cout. Jika proses berhasil dijalankan kode akan mengembalikan nilai 0.
#### Output:
<img width="344" alt="Screenshot 2024-03-09 171220" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/1fb3794d-f8db-4a10-829e-97b1fa8b0ad7">


#### Full code Sreenshot:
<img width="960" alt="Screenshot 2024-03-09 171220" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/9813d3ac-d4a2-463c-8188-97e584fa137d">

## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

```C++
#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int bilangan1, bilangan2, bilangan3;
  float rataRata;

  // Meminta input dari pengguna
  cout << "Masukkan bilangan 1: ";
  cin >> bilangan1;
  cout << "Masukkan bilangan 2: ";
  cin >> bilangan2;
  cout << "Masukkan bilangan 3: ";
  cin >> bilangan3;

  // Menghitung total dan rata-rata
  int total = bilangan1 + bilangan2 + bilangan3;
  rataRata = static_cast<float>(total) / 3; // Konversi integer ke float

  // Menampilkan hasil perhitungan
  cout << "Rata-rata dari " << bilangan1 << ", " << bilangan2 << ", dan " << bilangan3 << " adalah: " << rataRata << endl;

  return 0;
}

```
Program diatas digunakan untuk menghitung rata-rata dari 3 bilangan yang di masukkan. program tersebut menggunakan deklarasi variabel dengan tipe data float dan integer. Untuk meminta inputan dari user menggunakan fungsi cout untuk menampilkan pesan instruksi nya.Setelah inputan di masukkan fungsi cin akan membaca dan mengambil inputan tersebut dan menyimpannya ke variabel bilangan. Setelah semua angka dimasukkan maka program akan menghitung total rata-rata dari ketiga bilangan dengan menambahkan ketiga bilangan dan mengkonversi total nya ke dalam bentuk float. Setelah itu program akan menampilkan hasilnya menggunakan fungsi cout dan setelah program berakhir akan mengembalikan nilai 0.
#### Output:
<img width="347" alt="Screenshot 2024-03-09 112113" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/45b5bbbd-dfee-4776-a028-87cc8c6109ee">

#### Full code Screenshot:
<img width="960" alt="Screenshot 2024-03-09 112113" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/f556b300-bf7f-4d8e-9459-17a76914693a">

Kesimpulan dari materi tipe data primitif:

Tipe data primitif adalah tipe data yang sudah umum dan siap digunakan tanpa perlu merakukan perubahan dan menjadi tipe data yang sangat dasar dalam membuat sebuah program.



### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

Fungsi class:

Class berfungsi untuk membuat tipe data kompleks dengan atribut dan metode yang dapat diakses melalui objek. Aksesibilitas anggota class adalah private, yang berarti jika objek anggota dari class itu sendiri ingin dipublikasikan, maka harus menggunakan publik.

Fungsi struct:

Struct digunakan untuk menyimpan data dengan struktur yang sederhana dan biasanya tidak memiliki metode atau fungsi terkait. Biasanya sering digunakan untuk keperluan ata sederhana dan kompleks, dan dapat diakses secara langsung tanpa pembuatan objek. Struct aksesibilitasnya adalah publik

```C++
#include <iostream>

class Mahasiswa {
private:
    std::string nama;
    std::string ttl;
public:
    Mahasiswa(std::string nama, std::string ttl) {
        this->nama = nama;
        this->ttl = ttl;
    }
    void tampil() {
        std::cout << "Nama: " << nama << std::endl;
        std::cout << "Ttl : " << ttl << std::endl;
    }
};

struct Asal {
private:
    std::string asal;
    int umur;
public:
    Asal(std::string asal, int umur) {
        this->asal = asal;
        this->umur = umur;
    }
    void tampil() {
        std::cout << "Asal: " << asal << std::endl;
        std::cout << "Umur: " << umur << std::endl;
    }
};

int main() {
    Mahasiswa mhs("Yasmine Alifta", "8 Juli 2004");
    mhs.tampil();

    Asal asal("Pati", 19);
    asal.tampil();

    return 0;
}
```
Kode program diatas memiliki 2 kelas yaitu Mahasiswa dan Asal. Kelas Mahasiswa memiliki 2 atribut yaitu nama dan ttl, Asal juga memiliki 2 atribut yaitu asal dan umur. Program tersebut menggunakan tipe data string dan integer. String digunakan untuk menyimpan nama mahasiswa , ttl dan asal. Integer digunakan untuk menyimpan umur. Semua program akan dicetak menggunakan fungsi cout dan akan menampilkan output seperti pada gambar dibawah. Ketika program telah berjalan dengan benar maka akan mengembalikan nilai 0.

#### Output:
<img width="341" alt="Screenshot 2024-03-09 113425" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/8dbe8cda-caed-4d33-9ca1-fc934cd4c1ad">

#### Full code Screenshot:
<img width="960" alt="Screenshot 2024-03-10 180640" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/1e39cbdc-40c5-401c-8b95-69eb87498ed7">


### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map.
```C++
#include <iostream>
#include <map>

using namespace std;

int main() {
  // Membuat map
  map<string, int> buah;

  // Menambahkan data ke map
  buah["Apel"] = 20;
  buah["Jeruk"] = 21;
  buah["Mangga"] = 22;
  buah["Anggur"] = 25;
  buah["Melon"] = 10;

  // Menampilkan data map
  for (auto it = buah.begin(); it != buah.end(); ++it) {
    cout << it->first << " : " << it->second << endl;
  }

  // Mencari data di map
  auto it = buah.find("Apel");
  if (it != buah.end()) {
    cout << "Buah Apel : " << it->second << endl;
  } else {
    cout << "Buah Apel tidak ditemukan" << endl;
  }

  return 0;
}

```
Pada kode program diatas, kode membuat objek dari kelas map dengan nama "buah" dan menginisialisasinya. Kemudian kode menambahkan data ke map "buah". Data yg ditambahkan adalah kombinasi key dan nilai, yang dimana key nya adalah nama buah dan nilai adalah jumlah buah yang ada.Kemudian untuk menampilkan data buah nya menggunakan perulangan for. Kode akan mencari data di map menggunakan fungsi find yang akan mencari dan mengembalikan iterasi ke data yang ditemukan. Jika tidak ditemukan, fungsi find akan mengembalikan nilai end dan mencetak pesan menggunakan fungsi cout bahwa buah tidak ditemukan. Jika buah yang dicari ditemukan kode akan mencetak jumlah buah yang tersedia menggunakan fungsi cout dan akan mengembalikan nilai 0.
#### Output:
<img width="373" alt="Screenshot 2024-03-09 113621" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/de8212e7-2657-47bd-8802-ac110d6cacc0">

#### Full code Screenshot:
<img width="960" alt="Screenshot 2024-03-09 113621" src="https://github.com/yasminealifta/Praktikum-Struktur-Data-Assignment/assets/161322990/c544942d-2fec-47e6-b026-bb6ebc1724bb">

Perbedaan Array dan Map:

Array adalah struktur data yang statis yang menyimpan elemen-elemen dengan tipe data yang sama yang didefinisikan oleh pemilik array. Memiliki indeks yang berurutan dan harus berurutan, tidak mengandung elemen yang berbeda tipe data, didefinisikan menggunakan tanda [], dapat didefinisikan menggunakan konstanta dan nilai indeks. 

Map adalah sekumpulan elemen yang didefinisikan oleh key dan nilai yang dipetakan. Memiliki indeks yang berupa key yang dapat berupa tipe data selain integer, dapat mengandung elemen yang berbeda tipe data, memiliki key dan nilai yang berbeda tipe data, dapat didefinisikan menggunakan std::map.


## Kesimpulan
Tipe data merupakan klasifikasi data yang menjelaskan kepada komputer bagaimana program akan dijalankan. Pengetahuan tentang tipe data yang berbeda seperti, integer, float, array, string, map, char, boolean, sangat membantu dalam membuat dan mengembangkan program yang efektif.
## Referensi
[1] Nugraha, M. (2021). Dasar pemrograman dengan C++ materi paling dasar untuk menjadi programmer berbagai platform. Deepublish.

[2] MT, S. H. S., & MCs, I. W. J. S. (2020). Konsep Algoritme dan Aplikasinya dalam Bahasa Pemrograman C++. Penerbit Andi.

