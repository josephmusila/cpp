#ifndef PATIENTS_H
#define PATIENTS_H
#include <iostream>
#include <string>

using namespace std;

class Patients
{
private:
     int patientNumber;
    public:
        Patients();


        string firstName;
        string lastName;
        int age;

        void setNumber(int patNumber);
        int getNumber();

        string PatientRoom( int age);


};

#endif // PATIENTS_H
