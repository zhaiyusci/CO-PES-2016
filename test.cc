#include<iostream>
using namespace std;

class a{
  public:
    auto operator() (auto x)const;
};

auto a::operator() (auto x) const {
  cout << x <<endl;
  return x+1;
}

int main(){
  a b;
  cout << b(0) <<endl;
  return 0;
}
