#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile("people.txt");

    int population;
    int year = 1910;

    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "(each * represents 1000 people)" << endl;

    while (inputFile >> population)
    {
        cout << year << " ";

        for (int i = 0; i < population / 1000; i++)
        {
            cout << "*";
        }

        cout << endl;
        year += 20;
    }

    inputFile.close();

    return 0;
}