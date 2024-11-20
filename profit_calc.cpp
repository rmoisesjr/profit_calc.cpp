// Include necessary headers for input/output and file handling
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

//we use the #include <fstream> header allows you to work with file streams, 
//enabling your program to read from and write to files. It provides the following classes to manipulate files.
#include <fstream>

// Functon declarations for computing profit and average profit
void compute(int hours,double rate,double & grosspay,double & federalincometax,double & netpay, int & count);

int main(){
  // Open the file "data.txt" in read mode
  // like we said before <fstream> helps us manipulate files like reading and writting in it ,
  //inFile is not an action, but the name of the variable that holds the file stream.
  //A file stream is like a pipe that connects your program to a file on your computer.

//Input file stream (ifstream): This pipe lets your program read data from a file.
//Output file stream (ofstream): This pipe lets your program write data to a file.
//File stream (fstream): This pipe lets your program both read and write to a file.

    fstream inFile("data.txt" , ios::in);
    if( ! inFile)
    {
        cerr << "File could not be opened\n";
        exit(1);
    }
    return 0;
}

