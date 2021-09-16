/* 
 * Name: Joel Sanchez
 * Assignment: HW #1 (Gaddis_9 6.7)(Celsius Temperature Table)
 * Class: CSC-17A Fall 2021
 * Instructor: Dr. Lehr
 * Date: September 12th, 2021
 */

#include <iostream>
#include <iomanip>

using namespace std;

float celsius (float); 

int main(int argc, char** argv) {
    
    cout << fixed << left << setprecision(1);
    
    cout << setw(12) << "Fahrenheit" << "|" << setw(12) << "Celsius" << endl;
    cout << "-------------------------"<< endl;
    
    for (int f = 0; f < 21; f++){
        
        cout << setw(12) << f << "|" << setw(12) << celsius(f) << endl; 
        
    }

    return 0;
}

float celsius (float fahrenheit){
   
    float celsius = (1.8 * fahrenheit) + 32; 

    return celsius; 
}

