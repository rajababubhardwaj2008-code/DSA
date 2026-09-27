#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Brute Code..
int findMaxConsecutiveBrute(vector<int> arr){
    int MaxCount = 0;

    for(int i = 0; i<arr.size(); i++){
        if( arr[i] == 1){
        int currentStreak = 0;

            for( int j = i; j<arr.size(); j++){
                if( arr[j] == 1){
                    currentStreak++;
                }else{
                    break;
                }
            }
         MaxCount = max(MaxCount,currentStreak);
        }
    }
    return MaxCount;
}

//Optimal Code...

int findMaxConsecutiveOptimal(vector<int> arr){
    int count = 0;
    int maxCount = 0;

    for( int i = 0; i<arr.size(); i++){
        if( arr[i] == 1){
            count++;
            maxCount = max(maxCount, count);
        } else{
            count = 0;
        }
    }
    return maxCount; 

}
int main() {
    vector<int> arr = {1,1,0,0,1,1,1,0};
    int BruteRes = findMaxConsecutiveBrute(arr);
    cout << " Brute method: maximum consecutive number = " << BruteRes << endl;

    int OptimalRes = findMaxConsecutiveOptimal(arr);
    cout << " Optimal method: maximum consecutive number =" << OptimalRes << endl;
}