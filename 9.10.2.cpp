#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s,g;
    cout<<"enter the string"<<endl;
    getline(cin,s);
    g=s.substr(1,5);
    cout<<g;
    cout<<"the size of the string is "<<s.size();
    //cin.getline(s,20);
    cout<<s;
}
