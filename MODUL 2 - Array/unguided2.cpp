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
