#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "programming";


    int position = s.find("gram"); // Find the postion of 'g' character;

    if(position != -1) //if find() dosn't found "gram" it will return -1;
    {
        cout << position << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    return 0;
}
