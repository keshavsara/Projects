#include<bits/stdc++.h>
using namespace std;

int main() {
    int enter;
    int car = 0, bike = 0, rikshaw = 0;

    while (true) {
        cout << "Press 1 to enter car" << endl;
        cout << "Press 2 to enter bike" << endl;
        cout << "Press 3 to enter rikshaw" << endl;
        cout << "Press 4 to show the record" << endl;
        cout << "Press 5 to delete the record" << endl;
        cout << "Press 6 to exit" << endl;
        cin >> enter;

        if (enter == 1) {
            car++;
            cout << "Car is added" << endl;
        } else if (enter == 2) {
            bike++;
            cout << "Bike is added" << endl;
        } else if (enter == 3) {
            rikshaw++;
            cout << "Rikshaw is added" << endl;
        } else if (enter == 4) {
            cout << "Cars: " << car << endl;
            cout << "Bikes: " << bike << endl;
            cout << "Rikshaws: " << rikshaw << endl;
        } else if (enter == 5) {
            car = 0;
            bike = 0;
            rikshaw = 0;
            cout << "Record deleted" << endl;
        } else if (enter == 6) {
            exit(0);
        } else {
            cout << "Invalid Input" << endl;
        }
    }

    return 0;
}
