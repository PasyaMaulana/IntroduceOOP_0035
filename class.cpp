#include <iostream>
using namespace std;

class Mobil
{
public:
    string nama_mobil;
    string tipe_mobil;

private:
    int harga_mobil;

public:
    void input_data()
    {
        cout << "Masukkan nama mobil: ";
        cin >> nama_mobil;
        cout << "Masukkan tipe mobil: ";
        cin >> tipe_mobil;
        cout << "Masukkan harga mobil: ";
        cin >> harga_mobil;
    }
    void output_data()
    {
        cout << "Harga mobil = " << harga_mobil << endl;
    }
};

int main()
{
    Mobil nazar;
    nazar.input_data();
    cout << endl;
    cout << "Nama mobil = " << nazar.nama_mobil << endl;
    cout << "Tipe mobil = " << nazar.tipe_mobil << endl;
    nazar.output_data();
}