#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "kokkit.h" // Include the base Chef class
#include <string> // Include strings
using namespace std;

class ItalianChef : public Chef // Inherit from Chef class
{
public:
    ItalianChef(const string& name); // Constructor //store the name in string
    void MakePasta();                    // Method
    void MakeBread();                    // Method
    ~ItalianChef();                      // Destructor


};

#endif // ITALIANCHEF_H

