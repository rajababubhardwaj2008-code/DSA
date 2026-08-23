//Brute code....

#include<iostream>
#include<vector>
using namespace std;

int findMissing(vector<int> arr){
    int n = arr.size()+1;

    for( int i = 1; i<= n; i++){
        int flag = 0;

        for( int j = 0; j< n-1; j++){
            if( arr[j] == i){
                flag = 1;
                break;
            }
            
        }
        if( flag == 0){
            return i;
        }
    }
    return -1;
}

// Optimal Code...

int findMissingElements( vector<int> arr){
    
    int n = arr.size()+1;

    int expectedsum = (n * (n + 1)) / 2;
    int s2 = 0;

    for( int i = 0; i < arr.size() ; i++){
        s2 += arr[i];
    }
    return expectedsum - s2;
}
 int main() {
    vector<int> arr1 = {1,2,4,5};
    int missingNum = findMissing(arr1);
    cout << "Brute method : missing element is =" << missingNum << endl;

    vector<int> arr2 = {1,2,4,5};
    int missingNumber = findMissingElements(arr2);
    cout << "Optimal method: missing element is =" << missingNumber << endl;
 }



