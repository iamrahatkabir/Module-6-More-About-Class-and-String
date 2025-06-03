#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    sort(s.begin(),s.end());
    cout << s;

    return 0;
}

// int main() {
//     string str = "phitron";

//     // Sort characters from index 2 to 5 (i.e., 'i', 't', 'r', 'o')
//     sort(str.begin() + 2, str.begin() + 6); //[Note: always add +1 to the last value while doing manually sorting, reversing and so on];

//     cout << str << endl;  // Output: "phiornt"
//     return 0;
// }
