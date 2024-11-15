#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
#include <fstream>

void compute(int hours,double rate,double & grosspay,double & federalincometax,double & netpay, int & count);
int main()
{
    ifstream inFile("emplyee.txt" , ios::in);
    if( ! inFile)
    {
        cerr << "File could not be opened\n";
        exit(1);
    }
}=

