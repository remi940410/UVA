// Hashmat the Brave Warrior 
#include <iostream>
using namespace std;
int main()
{
    long int a,b;    //數值範圍到2^32
    while(cin>>a>>b)
    {
        cout<<abs(a-b)<<endl;
    }
    return 0;
}