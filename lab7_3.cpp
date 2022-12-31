#include<iostream>
#include<cmath>

using namespace std;

template<class cal>
cal adiff(cal x, cal y){
  int result=abs(x-y);
  if(result%360<=180){
  return result%360;
  }else{
    return 360-(result%360);
  }
}

int main(){
  cout << adiff(180,270)<<endl;
  cout << adiff(210,45)<<endl;
  cout << adiff(0,360)<<endl;
  cout << adiff(10,350)<<endl;
  cout << adiff(95,260)<<endl;
  cout << adiff(90,-90)<<endl;
  cout << adiff(1000,280)<<endl;
  cout << adiff(60,244)<<endl;
}
