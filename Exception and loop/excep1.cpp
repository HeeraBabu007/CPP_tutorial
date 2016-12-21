// bad_alloc standard exception
#include <iostream>
#include <exception>
#include <new>
using namespace std;
int main () 
{
  try
  {
      int* myarray= new int[10000000000];
  } 
  catch (exception& e1)
  {
  	 //int* myarray= new int[100];
      cout << "Standard exception: " << e1.what() << endl;
  }
 catch (exception& e2)
  {
  	 //int* myarray= new int[100];
      cout << "Standard exception: " << e2.what() << endl;
  }  
  return 0;
}
