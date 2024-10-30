#include <iostream>
#include <fstream>

int main() 
{
    std::ofstream outfile("writeData.txt");  // Create an ofstream object to write to a file

    if (outfile.is_open()) 
    {
        outfile << "Hello, this is a test.\n";
        outfile << "This is second line.\n";
        outfile << "End of file.\n";
        outfile.close();
    }
    else 
    {
        std::cerr << "Unable to open file for writing.\n";
    }
    return 0;
}
