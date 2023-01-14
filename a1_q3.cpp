#include <iostream>
using namespace std;

int main()
{
    int t, n[t], x;
    cout << "A number ";
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x;
        n[i] = x;
    }
    for(int k=0;k<t;k++){
        for(int j=2;j<=n[k];j++){
            if (n[k]==2){
                cout<<"prime"<<endl;
            }
            else if(n[k]%j==0 && j!=n[k]){
                cout<<"not prime"<<endl;
                break;
            }
            else if(j==n[k]){
                cout<<"prime"<<endl;
            }
        }

    }

    return 0;
}
