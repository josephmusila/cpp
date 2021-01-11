#include "Patients.h"

Patients::Patients()
{

}
    void Patients::setNumber( int patNumber){
        patientNumber=patNumber;
    };
    int Patients::getNumber(){
        return patientNumber;
    };
    string Patients::PatientRoom( int age)
        {
            string patientR;
            cout<<patientR;
            if(age<18)
            {
                patientR="visit room number 19A";
                return patientR;
            }else{
                patientR="visit room number 19B";
                return patientR;
            }
        }
