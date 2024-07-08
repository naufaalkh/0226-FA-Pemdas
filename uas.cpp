#include <iostream>
using namespace std;

class MasukUniversitas
{
public:
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;
    string snbt, snbp;

public:
    MasukUniversitas()
    {
        uangPendaftaran = 0;
        int uangSemesterPertama = 0;
        int uangBangunan = 0;
        int totalBiaya = 0;
        // enkapsulasi (membungkus)
    }
    virtual void namaJalurMasuk(string a, string b)
    {
        snbt = a;
        snbp = b;
        return;
    }

    void setUangPendaftaran(int nilai)
    {
        this->uangPendaftaran = nilai;
    }

    float getUangPendaftaran()
    {
        return uangPendaftaran;
    }
};

class SNBT : public MasukUniversitas
{
public:
    void namaJalurMasuk()
    {
        cout << "Masukkan uang pendaftaran:" << endl;
        cin >> uangPendaftaran;
        cout << "Masukkan uang semester pertama " << endl;
        cin >> uangSemesterPertama;
        cout << "Masukkan uang bangunan:" << endl;
        cin >> uangBangunan;
        cout << "total biaya";
    }
};

class SNBP : public MasukUniversitas
{
public:
    void namaJalurMasuk()
    {
        cout << "Masukkan uang pendaftaran:" << endl;
        cin >> uangPendaftaran;
        cout << "Masukkan uang semester pertama " << endl;
        cin >> uangSemesterPertama;
        cout << "total biaya:";
    }
};

int main()
{
    MasukUniversitas ak;
    while (true)
    {
        cout << "\nPilih jalur masuk:" << endl;
        cout << "1. SNBT" << endl;
        cout << "2. SNBP" << endl;
        cout << "3. Keluar" << endl;
        cout << "\nPilih: ";

        char ch;
        cin >> ch;
        cout << endl;

        switch (ch)
        {
        case '1':
        {

            break;
        }
        case '3':
        {
            return 0;
        }
        default:
        {
            cout << "Invalid option" << endl;
            break;
        }
        }
    }
}
