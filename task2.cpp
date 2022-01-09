#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream myFile;
    
    int n,i=0;
    
    cin>>n;
    
    string data;
    
    myFile.open("example.txt");
    
    for(;i<=n && getline(myFile,data);++i)
    {
    
    cout<<data<<endl;
    
    }
    
    myFile.close();
    
    return 0;         
}
