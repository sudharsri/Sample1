#include <iostream>

using namespace std;

class Sample{
  public:
    string str;
    void print()
    {
      cout << "str is : " << str << endl;
    }

};


int main()
{
  Sample sobj;
  sobj.str = "hello";
  sobj.print();
  return 0;

}
