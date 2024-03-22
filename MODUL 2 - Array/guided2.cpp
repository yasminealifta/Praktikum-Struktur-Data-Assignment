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