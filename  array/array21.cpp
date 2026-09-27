//Brute Code..
#include <iostream>
#include <vector>
using namespace std;


vector<int> intersectionBrute(vector<int>& a, vector<int>& b) {
    vector<int> res; 
    int m = a.size(); 
    int n = b.size(); 
    
    for(int i = 0; i < m; i++) {
      
        if(i > 0 && a[i - 1] == a[i])
            continue;
        
       
        for(int j = 0; j < n; j++) {
            if(a[i] == b[j]) {
                res.push_back(a[i]);
                break; 
            }
        }
    }
    return res;
}

//Optimal Code...
vector<int> intersectionOptimal(vector<int> a, vector<int> b){
    vector<int> res;

    int m = a.size();
    int n  = b.size();
    int i = 0;
    int j = 0;

    while( i<m && j<n){
        if(i>0 && a[i-1] == a[i]){
            i++;
            continue;
        }
        if( a[i]< b[j]){
            i++;
        } else if 
        ( a[i]> b[j]){
            j++;
        }else{
            res.push_back(a[i]);
            i++;
            j++;
        }

    }
    return res;

}
int main() {
    vector<int> a = {1,1,2,2,2,4,4};
    vector<int> b = {2,2,4,4};
    vector<int> resBrute = intersectionBrute(a,b);
    for( int x : resBrute){
        cout << x << " ";
    }
    cout << endl;
    
    vector<int> resOptimal = intersectionOptimal(a,b);
    for( int x : resOptimal){
        cout << x << " ";
    }
    return 0;
    
}
