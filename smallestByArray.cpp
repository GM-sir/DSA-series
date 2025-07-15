#include<iostream>
using namespace std;
int main()
{
    int marks[5]= { 93, 92, 93 ,95, 90};
    int sizes = 5, position ;
    int smallest = marks[0];
    for(int i=1; i<sizes; i++)
    {
        if(marks[i]<smallest){
            position = i;
        }
    }
    cout<< "smallest index= " << position << endl;
    return 0;
}
