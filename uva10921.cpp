// You can say 11
#include <iostream>

using namespace std;
int main()
{
    string input ;  
    
    while(cin>>input)
    {
        if(input=="0")
            break;
        int flag = 0;

        int odd =0,even=0;

        for(int i =0 ;i<input.length();i++){
            if(i%2==0){
                even+=int(input[i])-48;
            }
            else{
                odd+=int(input[i])-48;
            }
        }
        if(abs(odd-even)%11==0)
            cout<<input<<" is a multiple of 11."<<endl;        
        else
            cout<<input<<" is not a multiple of 11."<<endl;

    }
    return 0;
}