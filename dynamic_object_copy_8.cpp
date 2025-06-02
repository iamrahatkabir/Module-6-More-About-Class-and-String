#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
    string country;
    int jersey;

    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }

};

int main()
{
    Cricketer *hasim = new Cricketer("pakishtan", 10);  
    Cricketer *afridi = new Cricketer("Pakishtan", 19);

    // afridi->country = hasim->country;
    // afridi->jersey = hasim->jersey;

    *afridi = *hasim;

    delete hasim;
    cout << afridi->country << " " << afridi->jersey;
    
    return 0;
}
