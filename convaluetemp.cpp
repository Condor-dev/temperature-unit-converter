#include <iostream>
using std::cout,std::cin;

int main() { float inputdata, celsius, kelvin = 0; int fahrenheit,dataselect;

cout <<"\n Inserisci\n1 per conversione da celsius a fahrenheit\n"
     <<"2 per conversione da fahrenheit a celsius\n"
     <<"3 per conversione da celsius a kelvin\n"
     <<"4 per conversione da kelvin a celsius\n"
     <<"5 per conversione da fahrenheit a kelvin\n"
     <<"6 per conversione da kelvin a fahrenheit\n\n"
     << "--->  "; cin >> dataselect;

if (dataselect = 1)
    {   
        cout << "inserisci il valore celsius da convertire\n --->  ";
        cin >> inputdata;
        celsius = inputdata;
        fahrenheit = (inputdata * 9/5) + 32;
        kelvin = inputdata > 0 ? inputdata + 273.15 : 273.15 - inputdata;
        cout << "il valore celsius " << celsius << " convertito in fahrenheit è " << fahrenheit << "\n"
        "ed in kelvin è " << kelvin;
    
    };

};
