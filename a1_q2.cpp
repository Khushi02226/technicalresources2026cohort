#include<iostream>
using namespace std;

int main(){
    int mrk;
    cin>>mrk;
    if (mrk>90){
        cout<<"excellent"<<endl;
    }
    else if(mrk<=90 && mrk>80){
        cout<<"good";
    }
    else if(mrk<=80 && mrk>70){
        cout<<"fair";
    }
    else if(mrk<=70 && mrk>60){
        cout<<"meets expectations";
    }
    else if(mrk<=60){
        cout<<"below par";
    }
    return 0;
}
