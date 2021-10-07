#include<iostream>
using namespace std;

int main()
{
    int n ;
 
    if (n%2 == 0) --n;          
    
    for (int i=1; i<=50; i+=2)         
        cout << i << " ";       
    cout << endl;               
 
   
    return 0;     

    }
