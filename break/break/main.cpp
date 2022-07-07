//
//  main.cpp
//  break
//
//  Created by Christian Matos on 6/15/22.
//
/*
 for(int i = 1; i < 20; i++){
     if ( i == 13)
         continue;
     cout << i << " ";
 }
 
 ~~~~file I/O~~~~
 
 ifstream
 ofstream
 fstream
 
 reletive location
 absolute path
 
 output
  int num = 100;
  ofstream outfile;
  outfile.open("myfirstfile.txt");
  
  //ofstream outfile("myfirstfile.txt") ~~ one line.
  outfile << "hello world" << endl;
  outfile << 123.45 << endl;
  outfile << num << endl;
  
  outfile.close();
  
 
 
 */

#include <iostream>
#include <fstream>


using namespace std;


int main() {
    int num;
    int numvalue = 0;
    int total = 0;
    
    ifstream infile("lottonumber.txt");
    
    if(infile >> num){
        while (infile >> num){
            numvalue++;
            total +=num;
            cout << num << " ";
        }
        cout << endl;
        cout << "there were " << numvalue << endl;
        cout << "total " << total << endl;
    }else {
     cout << "error when opening" << endl;
    }
    infile.close();
    
    
    return 0;
}
