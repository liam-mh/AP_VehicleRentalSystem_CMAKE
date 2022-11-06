#pragma once
#include <string>
#include <cstring>

using namespace std;

class Vehicle
{
private:
    char registration[8];
    string type, make, model;
    int age;

public:
    Vehicle();
    Vehicle(char registration[8], string type, string make, string model, int age);
    ~Vehicle();

    int costPerDay();
    void displayVehicle();

    char getReg() {return registration[8];}
    string getType() {return type;}
    string getMake() {return make;}
    string getModel() {return model;}
    int getAge() {return age;}
};

