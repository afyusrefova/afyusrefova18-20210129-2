#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct COMPUTER
{
	string brand;
	string type;
	double price;
	int yearOfManufacture;
	
};

//functions in usage
void initComputers(vector<COMPUTER>sampleItem);
void showComputers(vector<COMPUTER> computer);