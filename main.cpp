#include "Lexer.h"
#include "fstream"
#include "iostream"

using namespace std;

int main(int argc, char** argv) {

    Lexer* lexer = new Lexer();

    string fileName = argv[1];
    string datalogInput;

    ifstream input(fileName);
    if (!input.is_open()) {
        cout << "File " << fileName << " could not be found or opened." << endl;
        return 1;
    }
    while (!input.eof()){
        string datalogAdder;

        getline(input, datalogAdder);

        datalogInput += datalogAdder;
    }



    delete lexer;

    return 0;
}