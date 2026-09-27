#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int countEvens( vector<int> &arr) {
   
    return count_if(arr.begin(), arr.end(), [](int num) {
        return (num & 1) == 0; 
    });
}

int main() {
    vector <int> arr = {2, 4, 7, 9, 10};
    
    cout << "Total even numbers: " << countEvens(arr) << endl;
    
    return 0;
}
