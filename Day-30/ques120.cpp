//Write a program to Develop complete mini project using arrays, strings and functions.

#include <iostream>
#include <string>
using namespace std;


const int MAX_ACTIVITIES = 10;
void displayStats(string names[], float emissions[], int count);
void getSuggestion(float total);

int main() {
    string activityNames[MAX_ACTIVITIES];
    float emissions[MAX_ACTIVITIES];
    int count = 0;
    float totalEmission = 0;

    cout << "Eco-Friendly Carbon Footprint Tracker\n";

    activityNames[0] = "Car Commute (km)"; emissions[0] = 0.12;
    activityNames[1] = "Public Transport (km)"; emissions[1] = 0.04;
    activityNames[2] = "Meal (Beef)"; emissions[2] = 3.0;
    count = 3;

    for(int i = 0; i < count; i++) {
        totalEmission += emissions[i];
    }

    displayStats(activityNames, emissions, count);
    
    cout << "\nTotal Daily Carbon Estimate: " << totalEmission << " kg CO2" << endl;
    getSuggestion(totalEmission);

    return 0;
}

void displayStats(string names[], float emissions[], int count) {
    cout << "\nActivity Impact Factors:\n";
    for(int i = 0; i < count; i++) {
        cout << i + 1 << ". " << names[i] << ": " << emissions[i] << "kg per unit\n";
    }
}

void getSuggestion(float total) {
    if(total > 2.0) {
        cout << "Suggestion: Try carpooling or plant-based meals to reduce your impact!" << endl;
    } else {
        cout << "Great job! Your carbon footprint is relatively low." << endl;
    }
}