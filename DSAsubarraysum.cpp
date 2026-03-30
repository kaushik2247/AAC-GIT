#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int st=0,end=st;
    for(st=0; st<5; st++){
        for(end=st; end<5; end++){
            for(int i=st; i<=end; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}