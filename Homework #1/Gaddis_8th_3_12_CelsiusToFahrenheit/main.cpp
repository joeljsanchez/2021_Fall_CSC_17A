/* 
 * Name: Joel Sanchez
 * Assignment: HW #1 (Gaddis_9 3.12)(Celsius to Fahrenheit)
 * Class: CSC-17A Fall 2021
 * Instructor: Dr. Lehr
 * Date: September 6th, 2021
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Fahrenheit = f, Celsius = c
    float c, f; 
    float c_to_f = 1.8; 

    cout << "Enter the temperature (in degrees Celsius): " << endl;
    cin >> c;
    //convert Celsius to Fahrenheit
    f = ((c_to_f)*c) + 32; 
    
    cout << "The temperature (in degrees Fahrenheit) is: " << f << endl; 
 
    return 0;
}