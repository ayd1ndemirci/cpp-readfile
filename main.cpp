#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    string myText;

    string file;

    cout << "Icerigi okunacak dosya adi girin: ";

    cin >> file;

    cout << file << ": ";

    ifstream ReadFile(file);

    while (getline (ReadFile, myText)) {
        cout << myText;
    }

    ReadFile.close();
}
