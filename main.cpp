#include <iostream>
#include <fstream>
#include "string.h"


using namespace std;

int main()
{
    ofstream o("archivo",ios::binary);
    char str[10];
    cin>>str;
    o.write(str,10);
    o.close();

    ofstream i("archivo",ios::binary);
    char str2[10];
    i.read(str2,10);
    cout<<"lei: "<<str2;
    return 0;
}
