#include <iostream>
#include <cstdlib>
#include <string>
#include <bits/stdc++.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fstream>
#include <unistd.h>

using namespace std;
void createFolder(string name);
void createFile (string fileName);


void createFolder(string name)
{
    const char* nameOfFolder = name.c_str();
    if (mkdir(nameOfFolder, 0777) == -1) 
        cerr << "Error: " << strerror(errno) << endl; 
  
    else
        cout << "Directory created"; 
    
    return;
}

void createFile (string fileName)
{
    ifstream f(fileName.c_str());
    
    if(f.good())
        cout << fileName << " already exists" << endl;
    
    else
    {
        ofstream f(fileName.c_str());
    }
    
    return;
}


int main(int argc, char const *argv[])
{
    string noteName = argv[1];
    string folderName = argv[2];
    string ext = argv[3];
    string fullFileName = noteName;
    fullFileName += ext;

    string changeDirectory = "cd /home/christian/Documents/Notes";
    chdir(changeDirectory.c_str());
    createFolder(folderName);
    createFile(fullFileName);
    // current problems with not being able to
    // change directory to the notes folder in my documents

    return 0;
}

