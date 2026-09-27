#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:

    void findEvenIndexElements(vector<int> &arr){
        for(int i = 0; i< arr.size() ; i+=2){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    solution solver;
    vector<int> nums = {10,20,30,40,50};
     solver.findEvenIndexElements(nums);
    return 0;
}