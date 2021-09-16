#include "Translator.h"
#include "Model.h"
#include <iostream>
using namespace std;

Translator::Translator(){
    // empty body
}

Translator::~Translator(){
    // empty body
}

string Translator::translateEnglishWord(string word){
    word = word.substr(0,word.find(" "));
    string translation = "";
    Model *translator = new Model();
    for (int i = 0; i < word.size() - 1; ++i) {
        if (tolower(word[i]) != tolower(word[i+1])) {
            translation += translator->translateSingleCharacter(word[i]);
        } else {
            translation += translator->translateDoubleCharacter(word[i]);
            i++;
        }
    }

    if (tolower(word[word.size()-1]) != tolower(word[word.size()-2]) ) {
        translation += translator->translateSingleCharacter(word[word.size()-1]);
    }

    return translation;
    delete translator;
}

string Translator::translateEnglishSentence(string sentence){
    string newSentence = "";
    while (sentence.size() != 0 && (sentence.find(" ") >= 0 && sentence.find(" ") < sentence.size())) {
        newSentence += translateEnglishWord(sentence.substr(0,sentence.find(" "))) + " ";
        sentence = sentence.substr(sentence.find(" ") + 1, sentence.size());
    }
    newSentence += translateEnglishWord(sentence);
    return newSentence;

}
