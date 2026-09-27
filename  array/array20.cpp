// Brute code...
#include <iostream>
#include <vector>
#include <set>

using namespace std;


vector<int> sortedArray(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();

    set<int> st;
    for(int i = 0; i < n1; i++) {
        st.insert(a[i]);
    }
    for(int i = 0; i < n2; i++) {
        st.insert(b[i]);
    }
    
    vector<int> temp;
    for(auto it : st) {
        temp.push_back(it);
    }
    return temp;
}


//optimal code...

    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        vector<int> result;
        int i = 0, j = 0;
        int n = a.size(), m = b.size();


        while (i < n && j < m) {
            if (a[i] < b[j]) {
       
                if (result.empty() || result.back() != a[i]) {
                    result.push_back(a[i]);
                }
                i++;
            } else if (b[j] < a[i]) {
                if (result.empty() || result.back() != b[j]) {
                    result.push_back(b[j]);
                }
                j++;
            } else { 
                if (result.empty() || result.back() != a[i]) {
                    result.push_back(a[i]);
                }
                i++;
                j++;
            }
        }

        
        while (i < n) {
            if (result.empty() || result.back() != a[i]) {
                result.push_back(a[i]);
            }
            i++;
        }

     
        while (j < m) {
            if (result.empty() || result.back() != b[j]) {
                result.push_back(b[j]);
            }
            j++;
        }

        return result;
    }
    int main() {
    vector<int> a = {1, 2, 3, 3, 4, 5};
    vector<int> b = {4, 5, 6, 7};

    // Testing Brute Force....
    vector<int> bruteResult = sortedArray(a, b);
    cout << "Brute Force : ";
    for(int val : bruteResult) {
        cout << val << " ";
    }
    cout << endl;
    //Testing optimal...
    vector<int> optimalResult = findUnion(a, b);
    cout << "Optimal Code : ";
    for(int val : optimalResult) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

