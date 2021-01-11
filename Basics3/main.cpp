#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
 int arr[50],size,i,del,count=0;
 cout<<"\t\t\t\t enter array size: ";
 cin>>size;

 cout<<"enter array elements: "<<endl;

 for(i=0;i<size;i++){
    cin>>arr[i];

 }
 cout<<"enter the value to be deleted: ";
 cin>>del;

 for(i=0; i<size;i++){
    if(arr[i]==del){
        for(int j=i;j<(size-1);j++){
            arr[j]=arr[j+1];
        }
        count++;
        break;
    }
 }
 if(cout==0){
    cout<<"element not found..!";

 }else{
    cout<<"element deleted";

 }
    return 0;
}
