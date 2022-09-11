// ROW/COL Wise sum in 2d array


#include <iostream>
using namespace std;

void getRowSum(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}
void getColSum(int arr[][3], int row, int col)
{
    for (int j = 0; j < col; j++)
    {
        int sum = 0;
        for (int i = 0; i < row; i++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}
int main()
{
    int arr[3][3];
    cout << "Enter Array: ";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    //printing array

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Row sums are: ";

    getRowSum(arr, 3, 3);

    cout<<"Col sums are: ";

    getColSum(arr, 3, 3);

    return 0;
}