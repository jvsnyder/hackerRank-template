#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	stringstream convert;
	int vecCount;
	int k;
	ifstream file("input.txt");
	string content;

	file >> content;//file to string
	convert << content;//string to stringstream
	convert >> vecCount;//stringstream to int

	convert.str(std::string());//clear out string stream;
	convert.clear();

	file >> content;
	convert << content;
	convert >> k;

	convert.str(std::string());//clear out string stream;
	convert.clear();

	vector<int> vec(vecCount);
	int holdPrice;
	for (int ndx = 0; ndx < vecCount; ndx++)
	{
		file >> content;
		convert << content;
		convert >> vec[ndx];
		convert.str(std::string());//clear out string stream;
		convert.clear();
		
	}
	
	int hold;
	cin >> hold;
	return 0;
}