#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar

public:
    bidangDatar() { //constructor
        x = 0;
    }

    virtual void input() = 0; // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
    virtual float Luas(int a) = 0; //fungsi untuk menghitung luas
    virtual float Keliling(int a) = 0; //fungsi untuk menghitung keliling

    void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
        this->x = a;
    }

    int getX() { //fungsi untuk membaca/mengambil nilai dalam x
        return x;
    }
};

class Lingkaran : public bidangDatar {
public:
    void input() {
        int r;
        cout << "Masukkan jejari: ";
        cin >> r;
        setX(r);
    }

    float Luas(int a) {
        return 3.14 * a * a;
    }

    float Keliling(int a) {
        return 2 * 3.14 * a;
    }
};

class Bujursangkar : public bidangDatar {
public:
    void input() {
        int sisi;
        cout << "Masukkan sisi: ";
        cin >> sisi;
        setX(sisi);
    }

    float Luas(int a) {
        return a * a;
    }

    float Keliling(int a) {
        return 4 * a;
    }
};

int main() {
    bidangDatar* objek;

    // Lingkaran
    cout << "Lingkaran dibuat" << endl;
    objek = new Lingkaran();
    objek->input();
    cout << "Luas Lingkaran = " << objek->Luas(objek->getX()) << endl;
    cout << "Keliling Lingkaran = " << objek->Keliling(objek->getX()) << endl;

    // Bujursangkar
    cout << "Bujursangkar dibuat" << endl;
    objek = new Bujursangkar();
    objek->input();
    cout << "Luas Bujursangkar = " << objek->Luas(objek->getX()) << endl;
    cout << "Keliling Bujursangkar = " << objek->Keliling(objek->getX()) << endl;

    delete objek;

    return 0;
}

