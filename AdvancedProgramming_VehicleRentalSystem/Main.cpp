#include "Container.h"
#include "Vehicle.h"

#include <iostream>
using namespace std;

int main() {

    int option;

    do
    {
        cout << "" << endl;
        cout << "Vehicle Rental System" << endl;
        cout << "---------------------" << endl;
        cout << "Registration Number    Cost Per Day    Vehicle Type" << endl;
        cout << "-------------------    ------------    ------------" << endl;
        Container::displayAll();

        cout << "1) Add Vehicle" << endl;
        cout << "2) Remove Vehicle" << endl;
        cout << "3) Search for car" << endl;
        cout << "4) Search for bike" << endl;
        cout << "5) Sort vehicles by registration number" << endl;
        cout << "6) Sort vehicles by cost per day" << endl;
        cout << "9) Exit" << endl;
        cout << "" << endl;
        cout << "Please enter option :" << endl;

        cin >> option;

        switch (option)
        {
            case 1: MiniApps::addVehicle(); break;
            case 2: MiniApps::removeVehicle(); break;
            case 3: MiniApps::searchCar(); break;
            case 4: MiniApps::searchBike(); break;
            case 5: MiniApps::sortReg(); break;
            case 6: MiniApps::sortCPD(); break;
        }

    } while (option != 9);

    return 0;
}
