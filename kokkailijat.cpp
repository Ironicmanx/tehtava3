#include "kokkit.h"
#include <iostream>

using namespace std;


Chef::Chef(const std::string& name)
{
    this->name = name;
  cout << name << " makes food" <<endl;
}

void Chef::MakeSalad()
{
    cout << name << " makes salad" <<endl;
}

void Chef::MakeSoup()
{
  cout << name << " makes soup" << endl;
}

Chef::~Chef()
{
    cout << name << " has finished cooking" <<endl;
  if (name == "Gordon Ramsay")
    {
        cout<<"Gordon is also tired"<<endl;
    }
}
