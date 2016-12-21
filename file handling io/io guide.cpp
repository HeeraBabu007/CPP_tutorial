/*
        File-input-output:
Why this?
Information should be saved permanantly on a disk,
we have to use either
1. flate files
2. Database

A flate-file is popularly known as file.
Data files has two component:
1. Fields
2. Records

What is ios ?
The ios is a virtual base class for istream(input stream) and
ostream(output stream). 

The iostream is called input and output stream class, which is a class with multiple
inheritance from istream and ostream classes.
Note: Definition for these classes are in header file iostream.
Since, these classes are used for displaying output on the screen(stdout) and
getting input from keyboard(stdin).


ios:fstream


**********
User-defined streams are more powerful than the predefined  iostream.
A stream must be obtained before a file is opened.
three stream classes are:
1. ifstream class: it is derived from istream class and it is used for 
   file input(reading).
2. ofstream class: it is derived from ostream class and it is used for
   file output(writting).
3. fstream class: it is derived from iostream class and it is used for both file 
   input(reading) and file output(writting).

Note: definition for these classes are avaible in fstream header file.
This file also includes iostream so that there is no need to explicitly include it.
*/

