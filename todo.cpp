#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

// Get the main task from the command line like ./t add (MainTask)
string GetMainTask(int argc, char* argv[]){
    string MainTask = "";
    for(int i = 2; i < argc; i++){
        MainTask += " " + string(argv[i]);
    }
    return MainTask;
}

int main(int argc, char* argv[]) {
    cout << GetMainTask(argc, argv) << endl;
    return 0;
}
        


