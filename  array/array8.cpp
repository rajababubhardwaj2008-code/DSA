#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int countOdds( vector<int> &arr) {
   
    return count_if(arr.begin(), arr.end(), [](int num) {
        return (num & 1) == 1; 
    });
}

int main() {
    vector <int> arr = {2, 4, 7, 9, 10};
    
    cout << "Total odd numbers: " << countOdds(arr) << endl;
    
    return 0;
}
