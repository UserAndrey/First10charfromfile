#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  const int M=12;
  char buf[1000];
  ifstream input("C:\\Users\\User\\Documents\\Pointers\\Capitals.txt");
  if(!input)
  {
      cout<<"input file open error"<<endl;
      system("pause");
      return 1;
  }
  ofstream out("C:\\Users\\User\\Documents\\Pointers\\output2.txt");
  if(!out)
  {
      cout<<"input file open error"<<endl;
      system("pause");
      return 1;
  }
   while (input.getline(buf, 1000))
  {
    buf[M]=0;
    out<<buf<<endl;
  }
  out.close();
  cout<<"ressult in output2.txt"<<endl;
  system("pause");
  return 0;
}