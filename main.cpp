#include <iostream>
#include <fstream>
#include <string>
#include "antlr4-runtime.h"
#include "ALFALexer.h"
#include "ALFAParser.h"

using namespace antlr4;
using namespace std;

int main () {
		string line = "attribute { } ";

		ANTLRInputStream *input = new ANTLRInputStream(line);
		
		
		cout << input->toString() << endl;

		
		delete input;
		return 0;


}

