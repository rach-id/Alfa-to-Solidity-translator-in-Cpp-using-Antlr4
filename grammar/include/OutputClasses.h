#include <string>

using namespace std;

class OutputClasses {

public :

	OutputClasses() : structCount(0), indentCount(0) {}
	
	string getStruct() {
		if (structCount != 0) return "";
		string str = "struct attribute {\n" + indent() +"\tstring id;\n" +indent() +"\tstring type;\n" + indent() + "\tstring category;\n" + indent() + "}\n";
		++structCount;
		return str;
	}
	
	string indent() {
		string indent = "";
		for( int i =0; i< indentCount; i++) {
			indent += "\t";
		}
		return indent;
	}
	
	int indentCount;
private :
	int structCount;
};
