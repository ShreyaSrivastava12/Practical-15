#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    ofstream myFile;
    
    myFile.open("example.txt");
    
    myFile<<"Write this to the file..\nWelcome to c++ programming..\n";
    
    myFile.close();
    
    return 0;         
}
