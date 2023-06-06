#include <iostream>
using namespace std;


int TimeConversion(int,int);

int main(){
    
    int Hour,Min;
    cout<<"enter_Hour : Format(HH MM):";
    cin>>Hour>>Min;
    cout<<"Total Minute :"<<TimeConversion(Hour,Min)<<endl;
    return 0;
}
   

int TimeConversion(int hour,int minute){

return ((hour*60)+minute);    
}

