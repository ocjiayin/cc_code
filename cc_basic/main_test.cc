#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
   cout<< "The total number of argument:" << argc << endl;

   for (int i = 0; i < argc; i++)
   {
      cout<<"The " << i << " argv is:" << argv[i] << endl;
   }
   return 0;
}
