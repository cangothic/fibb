#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli T;
int main(){
        ios_base::sync_with_stdio(false);
//    ofstream cout("casoPesados.txt");
//    ifstream cin;cin.open("Inputs.txt");
    while(cin>>T){
        long double X,Y,n;
        long double lambda1 = (1+sqrt(5))/2.0;
        long double lambda2 = (1-sqrt(5))/2.0;
        while(cin>>X>>Y>>n){
            long double A = ((X*lambda2)-Y)/(lambda2-lambda1);
            long double B = ((X*lambda1)-Y)/(lambda1-lambda2);
            long double ans = A*pow(lambda1,n) + B*pow(lambda2,n);
            unsigned long long int res=ans;
            cout<<res<<endl;

        }
    }
    //    cout.close();
//    cin.close();
}
