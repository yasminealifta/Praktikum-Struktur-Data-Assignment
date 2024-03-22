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
