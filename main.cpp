#include <iostream>
#include <antlr4-runtime.h>
#include "ALFAParser.h"
#include "ALFALexer.h"
#include "ALFAVisitor.h"
#include "ALFABaseVisitor.h"
#include <fstream>
#include <string>
#include "Listener.h"
#include "ParseTreeWalker.h"
#include "EnvironmentFunctions.h" 

using namespace std;
using namespace antlr4;

int main(int argc, char* argv[]) {
	
	cout << "\n-----------> Start <-----------\n\n" << endl;
	
	
/* ----------------------------------------------------------------------------------------------------------*/

	/* Preparing the files to be used in the parsing process */
	
	string inputFile = "";
	string outputFile = "";
	
	if(argc == 1) {
		cout << "#! No file pathes were given to the program, \n#! Please introduce the to be parsed file first and then the output file second."<< endl;
		cout << "\n-----------> Exiting <-----------\n" << endl;
		return 0;
	}
	else if(argc == 2) {
		inputFile = argv[1];
		outputFile = GetCurrentWorkingDir() + "/output.sol";
		cout << "# Only the input file was introduced : " << inputFile << "\n# Default output path : " << outputFile << "\n" << endl;
	}
	else {
		inputFile = argv[1];
		outputFile = argv[2];
		cout << "# Input file path : " << inputFile << endl << "# Output file path : " << outputFile << "\n" << endl;
	}
	
	
	/// These strings contains the default pathes in my machines if no other files were introducted while calling the program. For testing purposes only.
	
	// inputFile = "/home/sweexordious/Desktop/taaatata/Internship2018/Antlr_API/GitCommits/Antlr_Cpp_RandomCoding/input.alfa";
	// outputFile = "/home/sweexordious/Desktop/taaatata/Internship2018/Antlr_API/GitCommits/Antlr_Cpp_RandomCoding/output.sol";
	
	
	
	ifstream File (inputFile);
	
	if (File.is_open()) {
	
	/* ----------------------------------------------------------------------------------------------------------*/
	
		/* The foundation of every ANTLR program. You create the stream of chars from the input
		* You give it to the lexer and it transforms them into tokens, that are then interpreted by the parser 
		*/
		   
		ANTLRInputStream chars(File);
	
		ALFALexer lexer (&chars) ;
	
		CommonTokenStream tokens (&lexer);
	
		ALFAParser parser (&tokens) ;
	
	/* ----------------------------------------------------------------------------------------------------------*/
		
		/* To print the tokens of the lexer in a text format, uncomment the following code */
		
		/* tokens.fill();
		
		* for (auto token : tokens.getTokens()) {
			* std::cout << token->toString() <<  std::endl;
		* }
		
		*/
		
	/* ----------------------------------------------------------------------------------------------------------*/
		
		ALFAParser::TranslationunitContext* tree = parser.translationunit();
		

	/* ----------------------------------------------------------------------------------------------------------*/
		
		/* to print the parse tree in a text format, uncomment the following code */
		
		
		 std::cout << tree->toStringTree(&parser) << std::endl;
		
		
		
	/* ----------------------------------------------------------------------------------------------------------*/
	
		/* to use the listener walking pattern, uncomment the following section */
		
		
		Listener listen(&parser, outputFile);
		tree::ParseTreeWalker::DEFAULT.walk(&listen, tree);



	/* ----------------------------------------------------------------------------------------------------------*/
	
		/* to use the visitor walking pattern, uncomment the following section */
		
		/*
		* Visitor visitor(&parser);
		* visitor.visitTranslationunit(tree);
		*/
		
		
	/* Ps : The visitor is not implemented to offer a translation from alfa to solidity, its just for testing matters. Its the listener implementation that contains the actual transpiler. 
	*/
	
	/* ----------------------------------------------------------------------------------------------------------*/
	
		File.close();
		
		cout << "\n\n-----------> Done <-----------\n" << endl;
	
	}
	
	else cout << "Could not open file\n" << endl;
	
	return 0;	
}


