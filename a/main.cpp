#include <iostream>

using namespace std;

int main() {
    long long t;
    long long n,k;
    cin >> t;
    for (long long i=0;i<t;i++){
        cin >> n >> k;
        long long kol=0;
        while (n>0){
            kol++;
            if (n%k==0){
                n/=k;
            } else {
                n-=1;
            }
        }
        cout << kol << endl;
    }
    return 0;
}