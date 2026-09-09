#include <iostream>
using namespace std;

int main() {
    // Initial population
     long current_population = 312032486;

    // Seconds in a year (365 days)
    const int seconds = 365 *24* 60* 60;

    // Events per year
     long births = seconds / 7;
     long deaths = seconds / 13;
     long immigrants = seconds / 45;

    // Net change per year
    long long net_change = births - deaths + immigrants;

    // Display population for the next 5 years
    for (int year = 1; year <= 5; year++) {
        current_population += net_change;
        cout << "Year " << year << " population: " << current_population << endl;
    }

    return 0;
}
