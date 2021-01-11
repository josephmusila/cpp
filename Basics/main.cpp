#include <iostream>
#include <cmath>

using namespace std;


   double cuble(double num){
   return num*num*num;
   }

    string yname(){
        string name;
        int remCounts=2; //denotes remaining guesses

        int maxi=0;  //maxi==number of gueses
        string conclusion;

        while(maxi<3){
             cout<<"enter the random name: ";
            getline(cin,name);
            if(name=="jose"){
                  conclusion="You win!!";
                  return conclusion;
            }else{
                   if(remCounts>0){
                    cout<<"Incorrect!! You have " <<remCounts--<<" attempts remaining"<<endl;
                   }
                conclusion="you loose";

            }

              maxi++;
}

    return conclusion;

    }
    string checkHacked(){
        string email;
        int loadingPoint=0;
         cout<<"check if you are being spoofed in 1 second !!!!!\n";
        cout<<"please enter your email: ";
        getline(cin,email);


    cout <<"Checking";
        while(loadingPoint<=100){
            loadingPoint;
            loadingPoint +=10;
             cout<<"....";

        }
        cout<<"100% checked\n";
        cout <<"you are not being spoofed";

    }

int main()
{
   cout<< checkHacked();
    return 0;
}
