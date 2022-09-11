#include <iostream>
using namespace std;


void largestRowSum(int arr[][3], int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout<<"Largest row sum is "<< maxi<<endl;
    cout<<"And its row index is "<< rowIndex;
    
}
int main(){
    int arr[3][3];

    cout<<"Enter Array: ";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout<<endl;

    // printing array

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout<<endl;

    largestRowSum(arr, 3, 3);

    return 0;
}