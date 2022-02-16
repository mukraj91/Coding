#include<iostream>

using namespace std;


struct Student 
{
    int rollNumber;
    char name[25];
    float avgMark; 
};

int main()
{

    struct Student arrOfStructure[2]; // Array of structure 
    int sizeofStructure = (char*)&arrOfStructure[1] - (char*)&arrOfStructure[0];

    cout<<"Size of float = "<<sizeof(float)<<endl;
    cout<<"Size of int = "<<sizeof(int)<<endl;

    cout<<"sizeofStructure = "<<sizeofStructure<<endl;

    return 0;
}