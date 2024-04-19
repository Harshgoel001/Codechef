#include<bits/stdc++.h>
using namespace std;
    void print(int num){
        if(num == 1)
        {
            cout<<1<<endl;
            return;
        }
        print(num-1);
        cout<<num<<endl;
        
    }

int main(){
    int num;
    cin>>num;
    print(num);

    return 0;
    
}