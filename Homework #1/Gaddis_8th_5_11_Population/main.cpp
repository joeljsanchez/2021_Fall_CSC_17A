/* 
 * Name: Joel Sanchez
 * Assignment: HW #1 (Gaddis_9 5.11)(Population)
 * Class: CSC-17A Fall 2021
 * Instructor: Dr. Lehr
 * Date: September 11th, 2021
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
//  Input:
    int population;
    float avg_growth_rate;
    int days_growth;
    
 
    //Initial Number of organisms (Int) (Must be more than or equal to 2)
    cout << "What is the organism's initial population?" << endl; 
    cin >> population; 
    
    if(population < 2){
        cout << "(Error: Invalid Numerical Input) Please enter initial population greater than 1." << endl;
        exit(0);
    }
    
    //average daily population increase (percentage) (Float) (Positive or Zero rate)
    cout << "What is the daily average population increase(Example: 0%, .2%, 4%, 25%, 100%, 20000%)?" << endl; 
    cin >> avg_growth_rate;
    
    if(avg_growth_rate < 0){
        cout << "(Error: Invalid Numerical Input) Please enter a population increase percent greater than 0." << endl;  
    }
    else if (avg_growth_rate == 0){
        char response;
        cout << "An average population increase of zero will not change the population's size. Do want to continue? (Yes(Y) or No(N))" << endl;
        cin >> response; 
        
        if (response == 'Y'|| response == 'y'){
            cout << "The Daily Average Population Growth is " << avg_growth_rate << " %." << endl; 
        }
        else if (response == 'N' || response == 'n'){
            exit(0); 
        }
        else{
            cout << "(Error: Invalid Character Input) Program Terminated. Please rerun the application." << endl;
            exit(0);
        }
    }
   
    //number of days the organisms will multiply (Int) (Must be more than or equal to 1)
    cout << "How many days will the organism multiply?" << endl; 
    cin >> days_growth;
    
    if(days_growth < 1){
        cout << "(Error: Invalid Numerical Input) Please enter a value greater than or equal to 1." << endl;
        exit(0);
    }
    
    for (int i = 1; i <= days_growth; i++){
        float decimal_growth = avg_growth_rate/100;
        
        population = (decimal_growth + 1) * population;
        cout << "The organism's population after day " << i << " is " << population << "." << endl;
    }
    return 0;
}