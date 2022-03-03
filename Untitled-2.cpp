#include <iostream>
using namespace std;
int matrix[30][30];
void read_matrix(int r, int c)
{
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout <<"Enter Element at matrix["<<i<<"]["<<j<<"] = ";       
            cin >> matrix[i][j];
        }
        cout<<endl;
    }    
}
void display_matrix(int r, int c)
{
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout <<matrix[i][j]<<"\t";       
        }
        cout<<endl;
    }  
}
int main()
{
    int m, n;
    cout << "Enter Number Of Rows in Matrix = ";
    cin >> m;
    cout << "Enter Number Of Columns in Matrix = ";
    cin >> n;
    read_matrix(m,n);
    cout << "-------------Displaying Entered 2-D Matrix-------------"<< endl;
    display_matrix(m,n);
    return 0;
}