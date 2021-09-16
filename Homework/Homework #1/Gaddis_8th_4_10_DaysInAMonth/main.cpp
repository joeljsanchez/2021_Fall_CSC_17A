/* 
 * Name: Joel Sanchez
 * Assignment: HW #1 (Gaddis_9 4.10)(Days in a Month)
 * Class: CSC-17A Fall 2021
 * Instructor: Dr. Lehr
 * Date: September 6th, 2021
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv){

    int month, year, days_in_month; 
    
    cout << "Enter a month (1-12): " << endl;
    cin >> month;
    
    cout << "Enter a year: " << endl;
    cin >> year; 
    
    if (month >=1 && month <= 12){
        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 9 || month == 11 || month == 12){
            days_in_month = 31;
        }
        else if (month == 4 || month == 6 || month == 8 || month == 10){
            days_in_month = 30;
        }
        else{
            if ((year % 100) == 0){
                if ((year % 400) == 0){
                    days_in_month = 29;
                }
                else{
                    days_in_month = 28;
                }
            }
            else{
                if((year % 4) == 0){
                    days_in_month = 29;
                }
                else{
                    days_in_month = 28;
                }
            }    
        }    
    }    
    else {
        cout << "Invalid numerical input! Enter a number between 1 and 12." << endl;
    }
    
    cout << days_in_month << " days";
    
    return 0;
}

