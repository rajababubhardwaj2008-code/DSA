#include<iostream>
#include<vector>
using namespace std;

int sum(int n ){
    if( n == 1){
        return 1;
    }
    return n + sum(n-1);
}
int main(){
    int n = 5;
    cout << "sum of first " << n << "number is: " << sum(n) << endl;
    return 0;
}
 