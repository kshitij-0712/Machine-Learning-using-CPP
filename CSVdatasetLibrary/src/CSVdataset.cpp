#include "CSVdataset.h"

dataset::dataset(string input) 
    :inputFile(input)
{
    
    file.open(inputFile);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open the file!" << std::endl;
    }
    std::string line;
    while (std::getline(file,line)) {
        // std::stringstream ss(line);
        // std::string field;
        size++;
    }
    file.clear();
    file.seekg(0,std::ios::beg);
}
dataset::~dataset()
{
    if (file.is_open()) {
        file.close(); // Ensure the file is closed when the object is destroyed
    }
}
void dataset::head(){
        // prints first 5 lines
        int count=0;
        std::string line;
        while(std::getline(file,line)){
        //    std::stringstream ss(line); 
            cout<<line<<endl;
            count++;
            if(count==6){
                break;
            }

        }
        file.clear();
        file.seekg(0, std::ios::beg);
    }