/* 
 * Name: Joel Sanchez
 * Assignment: HW #1 (Gaddis_9 3.13)(Currency)
 * Class: CSC-17A Fall 2021
 * Instructor: Dr. Lehr
 * Date: September 6th, 2021
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    float dollar, yen, euros; 
    float usd_to_yen = 98.93;
    float usd_to_euro = .74;
    
    cout << "Enter a dollar amount: " << endl;
    cin >> dollar; 
    
    yen = dollar * usd_to_yen; 
    euros = dollar * usd_to_euro; 
    
    cout << "That dollar amount is equivalent to "  << yen << " yen and " << euros << " euros." << endl;   
            
    return 0;
}

