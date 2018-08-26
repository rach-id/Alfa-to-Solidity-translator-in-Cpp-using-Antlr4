
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


using namespace std;
using namespace antlr4;

int main() {
	
	cout << "-----------> Start <-----------" << endl;
	
	string file = "/home/sweexordious//Desktop/taaatata/Internship2018/Antlr_API/GitCommits/Antlr_Cpp_RandomCoding/input.alfa";

	
	ifstream File (file);
	
	if (File.is_open()) {
	
	/* The foundation of every ANTLR program. You create the stream of chars from the input
		   You give it to the lexer and it transforms them into tokens, that are then interpreted by the parser */
		   
		ANTLRInputStream chars(File);
	
		ALFALexer lexer (&chars) ;
	
		CommonTokenStream tokens (&lexer);
	
		ALFAParser parser (&tokens) ;
	
	/* ----------------------------------------------------------------------------------------------------------*/
		
		/* To show the tokens of the lexer in a string format, uncomment the following code */
		
		/* tokens.fill();
		
		* for (auto token : tokens.getTokens()) {
			* std::cout << token->toString() <<  std::endl;
		* }
		
		*/
		
	/* ----------------------------------------------------------------------------------------------------------*/
		
		ALFAParser::TranslationunitContext* tree = parser.translationunit();
		
		// tree::ParseTree *tr =  parser.translationunit();
		// std::cout << tree->toStringTree(&parser) << std::endl;
	
		Listener listen;
	
		tree::ParseTreeWalker walker ;
		walker.walk(&listen, tree);
	
		File.close();
		
		cout << "-----------> Done <-----------" << endl;
	
	}
	
	else cout << "Could not open file" << endl;
	
	return 0;	
}



/*


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
  std::cout << "Hello World" << std::endl;
  
  std::ifstream stream;
  stream.open("input.alfa");
  ANTLRInputStream input(stream);
  ALFALexer lexer(&input);
  
  std::cout << "Hello World" << std::endl;
  
  CommonTokenStream tokens(&lexer);
  ALFAParser parser(&tokens); 
  
  std::cout << "Hello World" << std::endl;
  
  ALFAParser::NamespaceDefinitionContext* tree = parser.namespace();
  ALFABaseVisitor visitor;

  std::cout << "Hello World" << std::endl;
  
  //(visitor.visitTranslationunit(tree)).draw();
  antlrcpp::Any alfa = visitor.visitTranslationunit(tree);
  
  std::cout << tree->toStringTree(&parser) << std::endl;
  
  //alfa.draw();
  
  std::cout << "Hello World" << std::endl;
  
  return 0;
}




#include <iostream>
#include <fstream>
#include <string>
#include "antlr4-runtime.h"
#include "ALFALexer.h"
#include "ALFAParser.h"

using namespace antlr4;
using namespace std;

int main () {
	string file = "/home/sweexordious/Desktop/taaatata/Internship2018/Antlr_API/Tomasseti_test/toBeParsed.alfa";

	
	ifstream File (file);
	if (File.is_open()) {
		
		ANTLRFileStream input(file);
		
		// CharStream input("attribute rachid { \n } "); 
		
		ALFALexer lexer(&input);
		
		CommonTokenStream tokens(&lexer);

		tokens.fill();
		
		for (auto token : tokens.getTokens()) {
			std::cout << token->toString() << std::endl;
		}
		ALFAParser parser(&tokens);
		
		// ParserRuleContext root ;
		
		// tree::ParseTree *tree = parser.TranslationunitContext(&root, 0);

		// std::cout << tree->toStringTree(&parser) << std::endl;
		
		File.close();
	
	} else cout << "Could not open file" << endl;
	
	return 0;


}
*/
