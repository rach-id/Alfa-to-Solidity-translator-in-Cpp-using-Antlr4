#include <iostream>
#include <fstream>
#include <string>
#include "antlr4-runtime.h"
#include "ALFALexer.h"
#include "ALFAParser.h"

using namespace antlr4;
using namespace std;

int main () {
	string line;
	
	
	ifstream modelicaFile ("/home/sweexordious/Desktop/taaatata/Internship2018/Antlr_API/Tomasseti_test/toBeParsed.alfa");
	if (modelicaFile.is_open()) {
		
		ANTLRInputStream input(modelicaFile);
		
		ALFALexer lexer(&input);
		/*
		CommonTokenStream tokens(&lexer);

		tokens.fill();
		
		for (auto token : tokens.getTokens()) {
			std::cout << token->toString() << std::endl;
		}
		//ALFAParser parser(&tokens);
		//tree::ParseTree *tree = parser.TranslationunitContext();

		//std::cout << tree->toStringTree(&parser) << std::endl;
		modelicaFile.close();
*/	
	} else cout << "Could not open file" << endl;
	
	return 0;


}

