#include<iostream>
#include<vector>
#include<utility>
#include<string>
using namespace std;


int main() {

    vector<pair<int,string>> students = {
        {101,"Raja"},
        {102,"Aman"},
        {103,"Sundar"},
        {104,"Deepak"},
        {105,"Kamlesh"}
    };

    int target_id;
    cout << "Input ID" << endl;
    cin >> target_id;

    bool found = false;

    for( int i = 0; i < students.size(); ++i){
        if( students[i].first == target_id){
            cout << "Student found : " << students[i].second << endl;
            found = true;
            break;
        }
       
    }
     if(!found){
            cout << "Not Found" << endl;
        }
    return 0;

}