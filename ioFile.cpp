#include <fstream>
#include <iostream>
#include <string>
using namespace std;


int main() {
    string Baris;

    ofstream outfile;

    outfile.open ("contoh file.txt");
    cout << ">=menulis file, \'q' untuk keluar" << endl;

    while (true){
        cout <<"_ ";
        getline(cin, Baris);
        if (Baris =="q") break;
        outfile << Baris << endl;
    }

    outfile.close();

    ifstream infile;

    infile.open("contoh.txt");
}
