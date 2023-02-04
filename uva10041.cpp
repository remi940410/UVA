//  Vito's family
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n =0;
    cin >>n;
    while(n--){
        int num =0;
        cin>>num;
        int x[num];
        for (int i = 0; i < num; i++) {
			cin>>x[i];
		}

        sort(x,x+num);
        int median =x[num/2];
        int result=0;
        for (int i = 0; i < num; i++) {
			result+=abs(median-x[i]);
		}
        cout<<result<<endl;
    }

    return 0;
}