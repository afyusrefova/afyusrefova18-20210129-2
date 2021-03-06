
#include <iostream>
#include <vector>
#include <string>
#include "afyusrefova18.h"
using namespace std;

void initComputers(vector<COMPUTER>sampleItem)
{
    sampleItem = { {"Apple", "pc", 4000, 2021},
        {"Lenovo", "pc", 1400, 2020},
        {"Acer", "laptop", 2000, 2020},
        {"Dell", "pc", 1600, 2021},
        {"HP", "laptop", 800, 2018} };
}

void showComputer(COMPUTER computer)
{
    cout << computer.brand<<", ";
    cout << computer.type<<", ";
    cout << computer.price << ", ";
    cout << computer.yearOfManufacture << endl;
    /*for (int i = 0; i < computer.size(); i++)
    {
            cout << computer[i].brand << ", " << computer[i].type << ", " << computer[i].price << ", " << computer[i].yearOfManufacture;
    }
    */
}

void createComputer(vector<COMPUTER>createC, COMPUTER comp1)
{
    comp1.brand = "Google";
    comp1.type = "laptop";
    comp1.price = 1700;
    comp1.yearOfManufacture = 2021;

    createC.push_back(comp1);
}

COMPUTER enterComputer()
{
    COMPUTER comp2;
    cin >> comp2.brand;
    cin >> comp2.type;
    cin >> comp2.price;
    cin >> comp2.yearOfManufacture;

    return comp2;
}

void showComputers(vector <COMPUTER> comp3)
{
    for (int i = 0; i < comp3.size(); i++)
    {
        showComputer(comp3[i]);
    }
}

