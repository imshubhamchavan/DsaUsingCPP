#include <iostream>
using namespace std;

int main(){
    string a;
    string b;
    string c;

    cout<<"you can choose either black or white.\n";
    cout<<"enter the hat color for b:";
    cin>>b;
    
    cout<<"enter the hat color for c:";
    cin>>c;

    if(b=="white" && c=="black" || b=="black" && c=="white"){
        cout<<"a either wearing black hat or white hat ";
    }else if(b=="white" && c=="white"){
        cout<<"a is wearing black ";
    }else{
        cout<<" c is wearing black";
    }

}