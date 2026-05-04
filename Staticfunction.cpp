#include <iostream>
#include <string> //menyertakan library string
using namespace std;

class Mahasiswa { //membuat class Mahasiswa

private:
    static int nim;
public:
    int id;
    string nama;

    void setID();
    void printAll();

