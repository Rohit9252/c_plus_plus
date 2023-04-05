#include <iostream>
#include <vector>
using namespace std;
int main(){

    int arr[] = { 1, 3, 5, 7, 9, 11 };

    vector<int> vec;

    for(int i = 0;i< sizeof(arr) ;i++){
        vec.push_back(arr[i]);
    }

    for(int i = 0;i< vec.size() ;i++){
        cout << vec[i] << endl;
    }
    return 0;
}