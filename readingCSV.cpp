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
    void head(){
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
    }
};

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
    file.close();
}



int main() {
    // std::fstream file;
    // file.open("customer_churn_data.csv");

    // if (!file.is_open()) {
    //     std::cerr << "Error: Could not open the file!" << std::endl;
    //     return -1;
    // }
dataset file("customer_churn_data.csv");
// std::string line;
// while (file.head()) {
//     std::stringstream ss(line);
//     std::string field;
//     count++;
    // if(count<=6){
    //     break;
    // }
    // while (std::getline(ss, field, ',')) {
    //     // 'field' now contains one value from the CSV
    //     std::cout << "Field: " << field << std::endl;
    //     // You can convert 'field' to other data types if needed
    // }
// }
file.head();
// cout<<line<<endl<<file.size<<endl;

    return 0;
}