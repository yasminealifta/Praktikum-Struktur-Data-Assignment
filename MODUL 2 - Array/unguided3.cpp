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
