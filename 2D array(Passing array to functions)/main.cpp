#include <iostream>

using namespace std;

void printArray(int[][3],int);

int main()
{
    int row=2;
    int col=3;
    int num[row][3]={{1,2,3},{4,5,6}};

    cout<<"Values in num are: "<<endl;
    printArray(num,2);

    return 0;
}
//function definition of printArray
void printArray(int a[][3], int size)
{
    for(int i=0;i<size;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
}

