#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Baris;
    string namaFile;
 
    cout << "masukkan nama file : ";
    cin >> namaFile;
 
    ofstream outfile;

    outfile.open("namaFile + .txt");
    cout << ">=menulis file, \'q' untuk keluar" << endl;

    while (true)
    {
        cout << "_ ";
        getline(cin, Baris);
        if (Baris == "q")
            break;
        outfile << Baris << endl;
    }

    outfile.close();

    ifstream infile;

    infile.open("namaFIle + .txt");

    cout << endl
         << ">= membuka dan membaca file " << endl;

    if (infile.is_open())
    {
        while (getline(infile, Baris))
        {
            cout << Baris << '\n';
        }
        infile.close();
    }
    else cout <<"unable to open file ";
    return 0;
}
