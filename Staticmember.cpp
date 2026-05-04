#include <iostream>
using namespace std;

class mahasiswa {

public:
    static int nim;
    int id;
    string nama;

    void setID();
    void printAll();

    Mahasiswa(string pnama) :nama(pnama) {
        setID();
    }
};

int mahasiswa::nim = 10;
void mahasiswa::setID() {
    id = ++nim;
};

void mahasiswa::printAll() {

    cout << "ID: " << id << endl;
    cout << "Nama: " << nama << endl;
    cout <<endl;
};

int main() {
    mahasiswa mhs1("Lia Kurnia");
    mahasiswa mhs2("Asroni");
    mahasiswa mhs3("Andi kurniawan");
    mahasiswa mhs4("joko Purbo");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    return 0;
}