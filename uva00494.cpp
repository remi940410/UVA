// Kindergarten Counting Game 
#include <iostream>
using namespace std;

int main(){
    
    string input;
    while (getline(cin,input))
    {
        int count =0;
        for(int i =0;i<input.length();i++){
            if (isalpha(input[i]))
                count++;
                while (isalpha(input[i]))
                {
                    i++;
                }
        }
        cout<<count<<endl;
    }
    
    return 0;
}