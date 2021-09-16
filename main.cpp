#include "Model.h"
#include "Translator.h"
#include "FileProcessor.h"
#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char** argv) {
    // • Instantiate a FileProcessor
    // • Translate the provided input file to Tutnese using the file processor.
    // • Exit

    // Model *a = new Model();
    // cout << "a: " << a->translateSingleCharacter('a') << endl;
    // cout << "A: " << a->translateSingleCharacter('A') << endl;
    // cout << "b: " << a->translateSingleCharacter('b') << endl;
    // cout << "B: " << a->translateSingleCharacter('B') << endl;
    // cout << " : " << a->translateSingleCharacter(' ') << endl;
    //
    // delete a;

    Translator *t = new Translator();
    cout << t->translateEnglishWord("Hello there! How are you doing this finee evening maam?") << endl;
    cout << t->translateEnglishSentence("Hello there! How are you doing this finee evening maam?") << endl;
    delete t;

    // FileProcessor *f = new FileProcessor();
    // f->processFile("hi.txt","hello.txt");
    // delete f;

    return 0;
}
