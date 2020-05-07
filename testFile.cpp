#include <iostream>
#include <cstdlib>
#include <string>
#include <bits/stdc++.h>
#include <sys/stat.h>
#include <sys/types.h>

using namespace std;
void createFolder(string name);

/*
class NoteAutomator
{
private:
public:
};*/


void createFolder(string name)
{
    const char * nameOfFolder = name.c_str();
    if (mkdir(nameOfFolder, 0777) == -1) 
        cerr << "Error: " << strerror(errno) << endl; 
  
    else
        cout << "Directory created"; 
    return;
}


int main(int argc, char const *argv[])
{
    string noteName = argv[1];
    string folderName = argv[2];
    string ext = argv[3];

    

    string systemCommand = "subl ";
    systemCommand += noteName;
    system(systemCommand.c_str());

    return 0;
}

