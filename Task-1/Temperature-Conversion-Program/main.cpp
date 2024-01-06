#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    float cel ,fah,kel;
    int option,n;

    do {

        cout << "\n\t\t** Welcome To Our Temperature Conversion Program ** .\t\t\n\n" << endl;

        cout << " \t\t1. Celsius to Fahrenheit.\n\n";
        cout << " \t\t2. Celsius to kelvin. \n\n";
        cout << " \t\t3. Fahrenheit to Celsius. \n\n";
        cout << " \t\t4. kelvin to Celsius. \n\n";
        cout << " \t\t5. Celsius to Fahrenheit and Kelvin.\n\n";
        cout << "Choose from following option: ";
        cin >> option;
        switch (option) {

            case 1:
                cout << "\nEnter Your Temperature in Celsius :";
                cin >> cel;
                fah = (1.8 * cel) + 32.0;  //temperature conversion formula
                cout << " \nTemperature in degree Fahrenheit: " << fah << " F" << endl;
                break;

            case 2:

                cout << "\nEnter Your Temperature in Celsius :";
                cin >> cel;
                kel = (cel + 273);  //temperature conversion formula
                cout << " \nTemperature in degree kelvin: " << kel << " K" << endl;
                break;

            case 3:

                cout << "\nEnter Your Temperature in Fahrenheit :";
                cin >> fah;
                cel = (fah - 32.0) / 1.8;  //temperature conversion formula
                cout << " \nTemperature in degree Celsius: " << cel << " C" << endl;
                break;

            case 4:
                cout << "\nEnter Your Temperature in kelvin :";
                cin >> fah;
                cel = (kel - 273);  //temperature conversion formula
                cout << " \nTemperature in degree Celsius: " << cel << " C" << endl;
                break;


            case 5:

                cout << "\nEnter Your Temperature in Celsius :";
                cin >> cel;
                kel = (cel + 273);  //temperature conversion formula
                fah = (1.8 * cel) + 32.0;  //temperature conversion formula
                cout << " \nTemperature in degree Fahrenheit: " << fah << "F" << endl;
                cout << " \nTemperature in degree kelvin: " << kel << " K" << endl;
                break;
        }
        cout<<"\n\tDo you perform anthor operations ? press 1 to continue and 0 to exist";
        cin>>n;
    } while (n);

    return 0;
}
