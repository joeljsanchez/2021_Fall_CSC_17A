/* 
 * Name: Joel Sanchez
 * Assignment: HW #1 (Gaddis_9 7.6)(Rain or Shine)
 * Class: CSC-17A Fall 2021
 * Instructor: Dr. Lehr
 * Date: September 12th, 2021
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string maxSunnyDays(int, int, int); 

int main(int argc, char** argv) {
    
    char weather [3][30]; 
    ifstream rainShine;
    string file = "RainOrShine.txt";
    int rainyJune = 0, rainyJuly = 0, rainyAugust = 0, rainy;
    int cloudyJune = 0, cloudyJuly = 0, cloudyAugust = 0, cloudy; 
    int sunnyJune = 0, sunnyJuly = 0, sunnyAugust = 0, sunny; 
           
    rainShine.open(file);
    cout << "Reading Data from " << file << "\n\n"; 
    
    for (int month = 0; month < 3; month++){
        for(int day = 0; day < 30; day++){
            rainShine >> weather[month][day];
            cout << weather [month][day] << endl;
            switch (month) {
                case 0:
                    switch (weather[month][day]){
                        case 'R':
                            rainyJune++;
                            break;
                        case 'C':
                            cloudyJune++;
                            break; 
                        case 'S':
                            sunnyJune++;
                            break;
                    }
                break;
                case 1:
                    switch (weather[month][day]){
                        case 'R':
                            rainyJuly++;
                            break;
                        case 'C':
                            cloudyJuly++;
                            break;
                        case 'S':
                            sunnyJuly++;
                            break;
                    }
                break;
                case 2:
                    switch (weather[month][day]){
                        case 'R': 
                            rainyAugust++;
                            break;
                        case 'C':
                            cloudyAugust++;
                            break;
                        case 'S':
                            sunnyAugust++;
                            break;
                    }
                break;
            }
        }
    }
    rainShine.close();
     
    rainy = rainyJune + rainyJuly + rainyAugust;
    cloudy = cloudyJune + cloudyJuly + cloudyAugust;
    sunny = sunnyJune + sunnyJuly + sunnyAugust;
    
    //Report the Statistics
    
    cout << "June Weather Report" << endl;
    cout << "----------------------------------------" << endl; 
    cout << "Rainy Days in June: " << rainyJune << endl;
    cout << "Cloudy Days in June: " << cloudyJune << endl;
    cout << "Sunny Days in June: " << sunnyJune << "\n\n";
    
    cout << "July Weather Report" << endl;
    cout << "----------------------------------------" << endl; 
    cout << "Rainy Days in July: " << rainyJuly << endl;
    cout << "Cloudy Days in July: " << cloudyJuly << endl;
    cout << "Sunny Days in July: " << sunnyJuly << "\n\n";
    
    cout << "August Weather Report" << endl;
    cout << "----------------------------------------" << endl; 
    cout << "Rainy Days in August: " << rainyAugust << endl;
    cout << "Cloudy Days in August: " << cloudyAugust << endl;
    cout << "Sunny Days in August: " << sunnyAugust << "\n\n";
    
    cout << "Overall Weather Report" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Total Rainy Days: " << rainy << endl;
    cout << "Total Cloudy Days: " << cloudy << endl;
    cout << "Total Sunny Days: " << sunny << "\n\n";
    
    cout << "The month with the most sunny days is " << maxSunnyDays(sunnyJune, sunnyJuly, sunnyAugust) << endl;
    
    return 0;
}

string maxSunnyDays(int june, int july, int august){
    string maxSunnyMonth; 
    if (june > july && june > august){
        string strJune = to_string(june);
        maxSunnyMonth = "June with " + strJune + " days!";
    }
    else if (july > june && july > august){
        string strJuly = to_string(july);
        maxSunnyMonth = "July with " + strJuly + " days!";
    }
    else if (august > june && august > july){
        string strAug = to_string(august);
        maxSunnyMonth = "August with " + strAug + " days!";
    } 
    return maxSunnyMonth;
}