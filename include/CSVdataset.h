#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class dataset
{
private:
    string inputFile;
    std::fstream file;
    int curr_line=0;
public:
    
    dataset(string input);
    ~dataset();
    int size=0;
    void head();
    
};

