#include<iostream>
#include <fstream>  
using namespace std; 
int main() 
{ 
    ofstream fout; 
  
    string line; 
  
    
    fout.open("sample.txt"); 
  
    
    while (fout) { 
  
        
        getline(cin, line); 
  
        // Press -1 to exit 
        if (line == "-1") 
            break; 
  
        // Write line in file 
        fout << line << endl; 
    } 
  
    // Close the File 
    fout.close(); 
  
    // Creation of ifstream class object to read the file 
    ifstream fin; 
  
    // by default open mode = ios::in mode 
    fin.open("sample.txt"); 
  
    // Execute a loop until EOF (End of File) 
    while (fin) { 
  
        // Read a Line from File 
        getline(fin, line); 
  
        // Print line in Console 
        cout << line << endl; 
    } 
  
    // Close the file 
    fin.close(); 
  
    return 0; 
} 
