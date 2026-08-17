#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:

    int removeDuplicates(vector<int> &arr){
        if(arr.size()== 0) return 0;
        int i = 0;
        for( int j = 1; j< arr.size(); j++){
            if( arr[j] != arr[i]){
                i++;
                arr[i] = arr[j];
            }
        }
        return i+1;

    }
};

int main() {
    solution solver;
    vector<int> nums = {1,1,1,2,2,3,3};
    int uniqueCount = solver.removeDuplicates(nums);

    cout << "the unique element is " << uniqueCount<< endl;
    cout << "the array is now look like :";
       for (int k = 0; k < uniqueCount; k++) {
        cout << nums[k] << " ";
    }
    cout << endl;
    
    return 0;
}

