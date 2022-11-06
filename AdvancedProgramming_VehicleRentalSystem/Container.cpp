#include "Container.h"

#include <iostream>
using namespace std;

Container::Container() {};
Container::~Container() {};

//void Container::insertInto(Vehicle() obj)
//{
//    vehicles.push_back(obj)
//};

void Container::displayAll()
{
    vector<Vehicle>::iterator vit(vehicles.begin());
    while (vit != vehicles.end())
    {
        cout << vehicles.
    }
        cout << *(vit) << '';
};

