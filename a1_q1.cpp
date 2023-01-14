#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==1 || i==5){
                cout<<"*";
                if(j==5){
                    cout<<"\n";
                }
            }
            else if(j==(5-i+1)){
                cout<<"*"<<endl;
                break;
            }
            else{
                cout<<" ";
            }
        }
    }
    return 0;
}
