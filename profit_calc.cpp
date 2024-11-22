// Include necessary headers for input/output and file handling and error handling
#include <string>
//allows input and output possible,enables us to use  "cout" and "cin" usage.
#include <iostream>
//This header is used to control the formatting of the input and output.
//It provides tools called manipulators to set things like width, precision, alignment, fill characters, and more when displaying data.
#include <iomanip>
//instead of using  the "std::cout", which is long we use "namespace std" to code in a shorter and easier way.
using namespace std;
//Is a header that is useful for memory management,program usage,random number management and error handling
#include <cstdlib>

//This header allows you to work with file streams, 
//enabling your program to read from and write to files. It provides the following classes to manipulate files.
#include <fstream>

// Functon declarations for computing profit and average profit
void compute(int hours,double rate,double & grosspay,double & federalincometax,double & netpay, int & count);

int main(){
  // Open the file "data.txt" in read mode
  // like we said before <fstream> helps us manipulate files like reading and writting in it ,
  //inFile is not an action, but the name of the variable that holds the file stream.

  //A file stream is like a pipe that connects your program to a file on your computer.

//Below are options we can use based on what we need to accomplish to the file.

//Input file stream (ifstream): This pipe lets your program read data from a file.
//Output file stream (ofstream): This pipe lets your program write data to a file.
//File stream (fstream): This pipe lets your program both read and write to a file.

//ios::in is a option when using <fstream>
//when we want to read from the file we use "ios::in"
//when we want to write from the file we use "ios::out"

    fstream inFile("data.txt" , ios::in);
//Here we are checking if the filestream (inFIle) was opened successfully.The "!" its a switch that makes something true or untrue
//based on the outcome, ! inFile means: "If the file didn't open, do this."
//It's a way of checking if something didn't work (the file didn't open) and handling the problem.
    if( ! inFile)
    {
//If the file dosen't open ,then it will output "File could not be opened", 
//the "\n" adds a new line.
// "cerr" is the same fundtion as "cout" ,but it is only used to show errors messages.
//"exit(1)" is a way to stop the program if something when wrong ,the value 1 means something is wrong and 0 means ,evrething is good.
//the "exit(1)"" is part of the <cstdlib> header.
        cerr << "File could not be opened\n";
        exit(1);
    }
//  Declare variables for salesperson name, total sales, cost of sales, net profit,
// total net profit.    

    string employee;
    int hours;
    double rate, grosspay, federalicometax, netpay;
    int count=1;

    while (inFile>>employee>>hours>>rate)
    {
        compute(hours, rate, grosspay, federalincometax, netpay, count);

        cout<<setw(13)<<employee<<setw(9)<<hours<<setw(9)<<rate<<setw(9)
        <<grosspay<<setw(9)<<federalincometax<<setw(9)<<netpay<<endl;

    }

    return 0;

    void
   

// For each entry:
// Call the compute function to calculate net profit and update total net profit and count
// Print the salesperson's name, total sales, cost of sales, and net profit
    void compute(int hours,double rate,double & grosspay,double & federalincometax,double & netpay, int & count){
    profit = total_sales - cost_of_sales;
    total_net_profit += profit;

void compute(int hours,double rate,double & grosspay,double & federalincometax,double & netpay, int & count);
{
    grosspay = hours * rate;
    federalincometax= grosspay * .15;
    netpay = grosspay - federalincometax;

    count = count +1;
    
}


    


    return 0;
}

