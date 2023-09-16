#ifndef KOKKIT_H
#define KOKKIT_H

#include <string>
using namespace std;
class Chef
{
public:
    Chef(const string& name); // Constructor
    void MakeSalad();             // Method
    void MakeSoup();              // Method
    ~Chef();                      // Destructor


protected:
    string name;
};

#endif // KOKKIT_H
