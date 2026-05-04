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
