// The 3n + 1 problem 
#include <iostream>
using namespace std;
int main()
{
    int a,b;    
    while(cin>>a>>b)
    {
        int maxLength=0;
        for(int i = min(a,b);i<=max(a,b);i++){
            int now = i;
            int count=1;
            while (now!=1)
            {
                if(now%2==1){
                    now=3*now+1;
                }
                else{
                    now/=2;
                }
                count++;
            }
            maxLength= max(maxLength,count);
            
        }
        cout<<a<<" "<<b<<" "<<maxLength<<endl;

    }
    return 0;
}