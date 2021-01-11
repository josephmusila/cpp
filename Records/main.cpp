#include <iostream>


using namespace std;

 class Student{
     public:
    string Name;
    string Year;
    string Major;

    Student(string aName,string aYear,string aMajor){
        Name=aName;
        Year=aYear;
        Major=aMajor;
    }

};

int main()
{
    cout<< "        Records" <<endl;
    cout << "-------------------------------"<<endl;

    int id=1;
    string Sname;
    string Myear;
    string smajor;
    int scount=0;
    while(scount<=5 && id<6){
        cout <<"ID "<< id<<endl;
        cout<<"enter your name: ";
        getline(cin,Sname);

        cout<<"enter your Major: ";
        getline(cin,smajor);

         cout<<"enter your Year: ";
            getline(cin,Myear);



        if(Sname=="" ||smajor=="" || Myear==""){

            cout<< "no field is empty";
            return 0;



        }else{
            id++;
             scount ++;
             Student studentr(Sname,Myear,smajor);
            cout<< "-------------------------"<<endl;
            cout<<"my Name is "<<studentr.Name<<endl;
            cout<< "-------------------------"<<endl;
            cout<<"my major is "<<studentr.Major<<endl;
            cout<< "-------------------------"<<endl;



        }




    }

    return 0;
}
