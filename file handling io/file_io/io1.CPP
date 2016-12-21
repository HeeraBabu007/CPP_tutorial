//Simple File IO
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main() 
{
   string filename = "test2.txt";
 
   // Write to File
   ofstream fout(filename.c_str());  // default mode is ios::out | ios::trunc
   if (!fout) {
      cerr << "error: open file for output failed!" << endl;
      abort();  // in <cstdlib> header
   }
   fout << "NIIT" << endl;
   fout << "DWARKA" << endl;
   fout << "DELHI" << endl;
   fout.close();
 
   // Read from file
   ifstream fin(filename.c_str());  // default mode ios::in
   if (!fin) {
      cerr << "error: open file for input failed!" << endl;
      abort();
   }
   char ch;
   while (fin.get(ch)) {  // till end-of-file
      cout << ch;
   }
   fin.close();
   return 0;
}
