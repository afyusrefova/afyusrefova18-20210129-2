
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

void showComputers(vector<COMPUTER> computer)
{
    for (int i = 0; i < computer.size(); i++)
    {
        if (computer[i].brand == "Apple")
        {
            cout << computer[i].brand << ", " << computer[i].type << ", " << computer[i].price << ", " << computer[i].yearOfManufacture;
        }
    }
    
}

void createComputer(vector<COMPUTER>createC, COMPUTER comp1)
{
    comp1.brand = "Google";
    comp1.type = "laptop";
    comp1.price = 1700;
    comp1.yearOfManufacture = 2021;

    createC.push_back(comp1);
}
