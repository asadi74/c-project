
#include <iostream>

using namespace std;

int factorial(int n){
    if(n>1){
        return n*factorial(n-1);
    }else{
        return 1;
    }
}

int main()
{
    int value;
    cout<<"\nenterNumber:";
    cin>>value ;
    cout<<"\n factorial of "<<value<<" is: "<<factorial(value)<<endl;

    return 0;
}