/* To use this main, rename it to 'main.cpp' and build the project */

 #include <iostream>
#include <antlr4-runtime.h>
#include "ALFAParser.h"
#include "ALFALexer.h"
#include "ALFAVisitor.h"
#include "ALFABaseVisitor.h"
#include <fstream>
#include <string>



using namespace std;
using namespace antlr4;

int main() {
	
	cout << "-----------> Start <-----------" << endl;
	
	string input = "namespace test { \n \n attribute ID { \n \n } policy testPolicy { \n rule testRule { target clause etudiant.id == 12345 } } } ";
	
	/* The foundation of every ANTLR program. You create the stream of chars from the input
	   You give it to the lexer and it transforms them in tokens, that are then interpreted by the parser */
	   
	ANTLRInputStream chars(input);
	
	ALFALexer lexer (&chars) ;
	
	CommonTokenStream tokens (&lexer);
	
	ALFAParser parser (&tokens) ;
	
/* ----------------------------------------------------------------------------------------------------------*/
	
	
	ALFAParser::TranslationunitContext* tree = parser.translationunit();
	
	std::cout << tree->toStringTree(&parser) << std::endl;
	
	cout << "-----------> Done <-----------" << endl;
	
	return 0;	
}

