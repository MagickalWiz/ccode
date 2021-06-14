#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <random>

using namespace std;
const int arraylength = 20000;

int main(){
	int i;
	int randNum;
	string randchar;
	string word = "";
	array<string,arraylength> wordlist;
		ifstream filename("10000.txt");
		if(filename.is_open())
		{   for(i = 0; i < arraylength; ++i)
			{
				filename >> wordlist[i];
			}
		}
	
	for (i = 0; i<10; i++){
		randNum = rand() % 26 + 96;randchar = char(randNum);
		word = word + randchar;
		cout << word << '\n';
	}
}