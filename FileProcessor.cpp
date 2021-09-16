#include "FileProcessor.h"
#include "Translator.h"
#include <iostream>
#include <fstream>
using namespace std;

FileProcessor::FileProcessor(){
    // empty body
}

FileProcessor::~FileProcessor(){
    // empty body
}

void FileProcessor::processFile(string inputFile, string outputFile){
    ifstream fileReader;
    ofstream fileWriter;
    Translator *t = new Translator();
    fileReader.open(inputFile);
    fileWriter.open(outputFile);


    if(!fileReader.is_open()){
        cout << "No file found with the name of \"" << inputFile << "\". A new file called \"" << outputFile << "\" containing no information (0 bytes) has been created" << endl;
    } else {
        string fileLine;
        // fileReader >> fileLine;
        while (getline (fileReader,fileLine)) {
            fileWriter << t->translateEnglishSentence(fileLine) << endl;
        }
        if (!fileReader.eof()) {
            cout << "Input failure before reaching end of file." << endl;
        }

    }

}
