#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;

    //Membuat obyek output file stream dalam mode menulis
    ofstream outfile;
   // Membuka file 
    outfile.open("contohfile.txt");


