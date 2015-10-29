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
        
        if(charNum == 2)
        {
            cout << " ";
        }
        else if(charNum == 3)
        {
            cout << ",";
        }
        else if(charNum == 4)
        {
            cout << ".";
        }
        else if(charNum == 5)
        {
            cout << "A";
        }
        else if(charNum == 6)
        {
            cout << "B";
        }
        else if(charNum == 7)
        {
            cout << "C";
        }
        else if(charNum == 8)
        {
            cout << "D";
        }
        else if(charNum == 9)
        {
            cout << "E";
        }
        else if(charNum == 10)
        {
            cout << "F";
        }
        else if(charNum == 11)
        {
            cout << "G";
        }
        else if(charNum == 12)
        {
            cout << "H";
        }
        else if(charNum == 13)
        {
            cout << "I";
        }
        else if(charNum == 14)
        {
            cout << "J";
        }
        else if(charNum == 15)
        {
            cout << "K";
        }
        else if(charNum == 16)
        {
            cout << "L";
        }
        else if(charNum == 17)
        {
            cout << "M";
        }
        else if(charNum == 18)
        {
            cout << "N";
        }
        else if(charNum == 19)
        {
            cout << "O";
        }
        else if(charNum == 20)
        {
            cout << "P";
        }
        else if(charNum == 21)
        {
            cout << "Q";
        }
        else if(charNum == 22)
        {
            cout << "R";
        }
        else if(charNum == 23)
        {
            cout << "S";
        }
        else if(charNum == 24)
        {
            cout << "T";
        }
        else if(charNum == 25)
        {
            cout << "U";
        }
        else if(charNum == 26)
        {
            cout << "V";
        }
        else if(charNum == 27)
        {
            cout << "W";
        }
        else if(charNum == 28)
        {
            cout << "X";
        }
        else if(charNum == 29)
        {
            cout << "Y";
        }
        else if(charNum == 30)
        {
            cout << "Z";
        }

    }
    
    cout << endl;
    cout << endl;
    return 0;
}
