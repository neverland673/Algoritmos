#include <iostream>

using namespace std;

void DivisibleCuatro(int);

int main()
{
    cout << "\tBucles\n" << endl;
    DivisibleCuatro(4);
     DivisibleCuatro(100);
}

void DivisibleCuatro(int n){
    if(n%4==0)
        cout<<"\t"<<n<<" , SI es divisible por 4\n";
    else
        cout<<"\t"<<n<<" , NO es divisible por 4";
}
