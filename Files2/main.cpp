#include <iostream>
#include <fstream>

using namespace std;

struct Student{
int id;
string name;
int marks;
int age;
};

void insert_data(ofstream &write){
  Student s1;
  cout<<"\n\t Enter id : ";
  cin>> s1.id;
  cout<< "\n\t Enter name : ";
  cin.get();
  getline(cin,s1.name);
  cout<<"\n\t enter marks: ";
  cin>>s1.marks;
  cout<<"\n\t Enter age : ";
  cin>> s1.age;

  write <<s1.id<<endl;
  write<<s1.name;
  write<<endl<<s1.marks<<endl<<s1.age;
}
Student get_data(ifstream &read){
    Student obj;
    read>>obj.id;
    read.get();
    getline(read,obj.name);
    read>>obj.marks;
    read>>obj.age;
    return obj;

}
void print_data(Student s){
    cout<< "\n\t Record is :";
    cout<< "\n\t Id: "<<s.id;
    cout <<"\n\t Name : "<<s.name;
    cout<< "\n\t Marks :"<<s.marks;
    cout << "n\t Age :"<<s.age;
}
int main()
{
/*   ofstream write("record.txt",ios::app);
 *   cout<<"\n\t Enter record 1 ";
 *   insert_data(write);
 *    cout<<"\n\t Enter record 2 ";
 *   insert_data(write);
 *    cout<<"\n\t Enter record 3 ";
 *   insert_data(write);
 */

    ifstream read;
    read.open("record.txt",ios::in);
      Student s1;
       s1=get_data(read);
    while(!read.eof()){

        s1=get_data(read);
        print_data(s1);


    }


    return 0;
}
