#include <iostream>
using namespace std;

void convertKilometer() {
	float km, miles;
	cout<< "Enter  Kilometers to convert: ";
	cin>> km;
	
	miles= km*0.621;
	
	cout<< km << " km = " <<miles << " miles"<<endl;
}

void convertCelsius() {
	float C, F;
	cout<< "Enter temperature in Celsius to convert: ";
	cin>> C;
	
	F= (C * 9/5) + 32;
	
	cout<< C << " Celsius = " <<F << " Fahrenheit"<<endl;
}

void convertSeconds() {
    int totalSeconds, hours, mins, secs;
    cout << "Enter the time in seconds to convert: ";
    cin >> totalSeconds;
    hours = totalSeconds / 3600;
    mins = (totalSeconds % 3600) / 60;
    secs = totalSeconds % 60;
    cout<<totalSeconds<<" seconds = "<<hours<<" hours "<<mins<<" minutes, and "<<secs<<" seconds"<<endl;
}

int main() {
	int choice;
    do {
        cout << "Menu:"<<endl;
        cout << "1. Convert Kilometers to Miles"<<endl;
        cout << "2. Convert Celsius to Fahrenheit"<<endl;
        cout << "3. Convert Seconds into Hours, Minutes & Seconds"<<endl;
        cout << "4. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                convertKilometer();
                break;
            case 2:
                convertCelsius();
                break;
            case 3:
                convertSeconds();
                break;
            case 4:
                cout << "Exiting"<<endl;
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
    
    return 0;
}
