#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, char* argv[]) {
    if (argc > 1) {
        std::vector<std::string> all_args;
        string args;
        if (argc > 1) {
            all_args.assign(argv + 1, argv + argc);
        }
        for (auto str : all_args) {
            args=args+" "+ str;
        }
        args = args + " > log.txt";
        //args = args + " >> log.txt>&1"; // FOR WINDOWS
        int command = system(args.c_str());
        if (command == 0) {
            cout << "Success!" << endl;
        } else {
            cout << command << endl;
        }
    } else {
        cout << "[ERROR] Enter command" << endl;
    }
    return 0;
}