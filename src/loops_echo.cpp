#include <iostream>
#include <string>
using namespace std;
auto main(int argc, char* argv[])-> int{
    if (argc == 0) {
        return 1;
    }
    std::string arg1 = std::string{argv[1]};
    std::string arg2 = std::string{argv[2]};

        if(arg1 == "-r"&&arg2!="-l"&&arg2!="-n"){
            for(int i=argc;i>2;--i){
                cout << argv[i-1] << " ";
            }
            cout << "\n";
        }
        else if(arg1 == "-n"&&arg2!="-l"&&arg2!="-r"){
            for(int i=2;i<argc;++i){
                cout << argv[i] << " ";
            }

        }
        else if(arg1 == "-l"&&arg2!="-r"&&arg2!="-n"){
            for(int i=2;i<argc;++i){
                cout << argv[i] << "\n";
            }
        }
        else if(arg1=="-r"&&arg2=="-l"){
            for(int i=argc;i>3;--i){
                cout << argv[i-1] << "\n";
            }
        }
        else if(arg1=="-r"&&arg2=="-n"){
            for(int i=argc;i>3;--i){
                cout << argv[i-1] << " ";
            }
        }
        else {
            for(int i=1;i<argc;i++){
                cout << argv[i] << " ";
            }
            cout << "\n";
        }
        
return 0;
}