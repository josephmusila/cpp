#include <iostream>

using namespace std;

    class Chef{
    public:
        void makesChicken(){
        cout<< "the chef makes chicken";
        }
        void makeSalad(){
            cout<< "the chef makes salad";
        }
        void makeSpecialDish(){
            cout<< "the chef makes bbq ribs";
        }

    };
    class ItalianChef : public Chef{
        public:
        void MakePasta(){
        cout<< "the chef makes Pasta";

        }
        void makeSpecialDish(){
        cout<< "the chef makes itali";
        }
    };

int main()
{
    Chef chef;


    ItalianChef itChef;

    itChef.makeSpecialDish();

  return 0;
}
