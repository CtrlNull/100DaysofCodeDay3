// This program reads data from a file inot an array.
#include <iostream>
#include <fstream>
using namespace std;

int main()
 {
     cont int Array_Size = 10;      // Array send_size 
     int numbers[ARRAY_SIZE]        // Array witn 10 elements
     int count = 0;                 // Loop count variable
     ifstream inputFile;            // Input files stream object

     // Open the file.
     inputFile.open("TenNumbers.text");

     // Read the numbers from the files into the array.
     while (count < ARRAY_SIZE && inputFile >> numbers[count])
        count++;

    // Close the file
    inputFile.close();

    // Display the numbers read:
    cout << "The numbers are: ";
    for ( count = 0; count < ARRAY_SIZE; count++)
        count << numbers[count] << " ";
        count << endl;
        return 0;

 }