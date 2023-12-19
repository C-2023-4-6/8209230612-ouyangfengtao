#include <iostream>
#include "mytemperature.h"
using namespace std;
int main() {
    cout <<"Celsius\t\tFahrenheit\t|\tFahrenheit\tCelsius" <<endl;
    cout << "=====================================================" <<endl;
    double fah = 120.0;
    for (double cel = 40.0 ; cel >= 31.0; cel--) {
        
       cout << cel << "\t\t" << celsius_to_fah(cel) << "\t\t|\t" << fah << "\t\t" << fahrenheit_to_cels(fah) <<endl;
       fah =fah-10;
    }

    return 0;
}