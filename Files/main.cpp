#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream foutput;
   ifstream finput;
   int membersCount=0;
      string members;
        int id=1;
      while(membersCount<3 && id<100){
        cout<< "enter your name: ";
        getline(cin,members);
        finput.open("text2.txt");
        foutput.open("text2.txt",ios::app);

        if(finput.is_open())
        foutput<<id<<". "<<members<<"\n";
        id++;
        membersCount++;
        finput.close();
        foutput.close();

      }

   cout<<"\n data has been added to the file"<<endl;


        string mytext;
        ifstream obj("text2.txt");
        while(getline(obj,mytext)){
         cout<<mytext<<"\n";
        }
        obj.close();
    return 0;
}
