/**
 * Main Implementation File: main.cpp
 *
 * Full Name: Rahul Sura
 * Student ID: 2371308
 * Chapman email: sura@chapman.edu
 * Course: CPSC 350-03
 * Assignment: Assignment 1
 */

#include "Model.h"
#include "Translator.h"
#include "FileProcessor.h"
#include <iostream>

using namespace std;

/**
 * This main method takes in two command line parameters, the first being the name
 * of the input file (including the extension) containing English text to be translated
 * and the second being the name of the output file (also including the extension)
 * containing the English text translated into Tutnese
 *
 * @param Command line parameters, separated by a space
 * @return Exit code
 */
int main(int argc, char** argv) {

    cout << "------------------------------" << endl; // Just to highlight the program's output in the terminal window

    FileProcessor *fp = new FileProcessor();

    if (argc >= 3) { // ignores the other parameters afterwards and only utilizes the input and output file names
        fp->processFile(argv[1], argv[2]);
    } else if (argc == 2){
        fp->processFile(argv[1]); // default output file is created since the input file is only provided
    } else { // if there are no command line parameters
        cout << "It appears that you provided no command line parameters when running this program. Please re-run " <<
        "the program with parameters about the input file's name and output file's name (in that order)" << endl;
    }

    delete fp;

    cout << "------------------------------" << endl; // Just to highlight the program's output in the terminal window

    return 0;
}
