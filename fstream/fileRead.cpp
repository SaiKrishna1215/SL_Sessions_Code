#include <iostream>
#include <fstream>

int main() 
{
    std::ifstream infile("readData.txt");

    if (infile.is_open()) 
    {
        std::string line;
        while (std::getline(infile, line))
        {
            std::cout << line << '\n';
        }
        infile.close();
    }
    else 
    {
        std::cerr << "Unable to open file for reading.\n";
    }

    return 0;
}
