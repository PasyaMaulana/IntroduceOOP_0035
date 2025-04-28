#include <iostream>
using namespace std;

class PersegiPanjang
{
private:
    int panjang;
    int lebar;
    int luas;

public:
    void inputData()
    {
        cout << "Masukkan panjang: ";
        cin >> panjang;
        cout << "Masukkan lebar: ";
        cin >> lebar;
    }

    void hitungLuas()
    {
        luas = panjang * lebar;
    }

    void outputData()
    {
        cout << "Luas Persegi Panjang = " << luas;
    }
};

int main()
{
    PersegiPanjang pp;

    pp.inputData();
    pp.hitungLuas();
    pp.outputData();
}