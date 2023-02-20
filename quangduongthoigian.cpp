#include <iostream>

using namespace std;

int main() {
    int speed, time, distance;

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;

    cout << "How many hours has it traveled? ";
    cin >> time;

    cout << "your DIstance traveled ";
  
      cout << "Hour\tDistance Traveled\n";
    cout << "--------------------------------\n";

    for (int hour = 1; hour <= time; hour++) {
        int distance = speed * hour;
        cout << hour << "\t" << distance << endl;
    }

    return 0;
}