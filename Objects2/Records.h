#ifndef RECORDS_H
#define RECORDS_H
#include <iostream>
#include <string>

using namespace std;

class Records
{
    public:
        Records();
        int age;
        string major;
        string names;

        void setName(string name);
        string getName();


};

#endif // RECORDS_H
