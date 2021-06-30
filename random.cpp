#include <bits/stdc++.h>
using namespace std;
int main( )
{
int  number;
int  i;
srand(time(0));
for(i = 1; i <= 10; i++)
{
number = rand() % 100;
cout << number  << "\t";
}
}


// Output -> It will generate 10 random numbers 
