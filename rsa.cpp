#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    
    vector<long long int> enigma;
    
    for(int i = 0; i < enigma.size(); i++)
    {
        enigma.at(i) = 0;
    }

    string input;
    cout << "Enter name of input file: ";
    cin >> input;
    cout << endl;
    
    ifstream fin;
    fin.open(input.c_str());
    
    if (!fin.is_open())
    {
        cout << "Error opening " << input << endl;
        return 0;
    }
    
    long long int v;
    while (fin >> v) 
    {
        enigma.push_back(v);
    }
    
    fin.close();
    
    cout << "Encrypted Message: ";
    cout << endl;
    for(int i = 0; i < enigma.size(); i++)
    {
        cout << enigma.at(i) << " ";
    }
    cout << endl;
    
    long long int power = 0;
    long long int charNum = 0;
    
    cout << endl;
    cout << "Decrypted Message: ";
    cout << endl;
    
    
    for(int j = 0; j <= enigma.size()-1; j++)
    {
        power = (enigma.at(j))*(enigma.at(j))*(enigma.at(j))*(enigma.at(j))*(enigma.at(j));
        charNum = (power % 91);
        
        cout << "This be too long" << endl;

    }
    
    cout << endl;
    cout << endl;
    return 0;
}
