#include <iostream>
using namespace std;

int main(){
    //creating a 2d array
    int arr[3][4];

    //input in 2d array
    for(int i = 0; i <3; i++){  
        for(int j = 0; j< 4; j++){
            cin>> arr[i][j];
        }
    }

    //output 
    cout<< endl;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
}