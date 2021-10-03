#include <iostream>
using namespace std;
bool issafe(int **arr, int x, int y, int n) // This function checks weather a position is safe for the current queen  
{
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)
        {
            return false;   //Checking in coloumn
        }
    }
    int row = x; 
    int col = y;
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
        {
            return false;    // Cheking in diagonal
        }
        row--;
        col--;
    }
    row = x;
    col = y;
    while (row >= 0 && col < n)
    {
        if (arr[row][col] == 1)
        {
            return false;       //checking in row
        }
        row--;
        col++;
    }
    return true;
}
bool nqueen(int **arr, int x, int n)
{
    if (x >= n)
    {
        return true; // after successful placement return true
    }

    for (int col = 0; col < n; col++)
    {
        if (issafe(arr, x, col, n)) //checking weather the position is safe for the placed queen
        {
            arr[x][col] = 1;   // if its safe vale = 1;
            if (nqueen(arr, x + 1, n)) // recursive calling n queen to alter the position of the queens
            {
                return true;
            }

            arr[x][col] = 0; // if the position is not safe change the queen (backtracking)
        }
    }

    return false; 
}

int main()
{
    int n;     //declare n 
    cout<<"Enter the value of n "<<endl;
    cin >> n;

    int **arr = new int *[n];  //Dynamic memory allocation to from 2D array
    for (int i = 0; i < n; i++) // 
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++) 
        {
            arr[i][j] = 0; // Creating a 2D n by n arrays with all entries zero
        }
    }
        if (nqueen(arr, 0, n)) // checking for nqueen
        {
            for (int i = 0; i < n; i++)  // printing the array if nqueen retuns true
            {
                for (int j = 0; j < n; j++)
                {
                    cout << arr[i][j] << " "; // printing the final array
                }  cout<<endl;
            }
        }
    

    return 0;
}