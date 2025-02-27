#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cctype>

using namespace std;

//Prototypes
void unsorted(char[], int, ofstream &output);
void sorted(char names[][20], int scores[], int size, ofstream &output);
void terminate(void);
void average(int scores[], ofstream &output);
void dataSort(char namesList[][20], int scores[], int size);