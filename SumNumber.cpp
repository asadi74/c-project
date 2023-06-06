
#include <iostream>

using namespace std;

int main()
{
 int sum=0,num,count;
 
 cout<<"How Many Numbers Do You Want To Collect?";
 cin>>count;
 for(int i=1;i<=count;i++){
     cout<<"Enter"<<i<<"Number :";
     cin>>num;
     sum+=num;
 }
 cout<<"sum="<<sum;
 return 0;

}