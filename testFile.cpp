#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

/*
class NoteAutomator
{
private:
public:
};
*/


int main(int argc, char const *argv[])
{
    cout << argc << " arguments detected" << endl;
    
    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }
    
    return 0;
}

