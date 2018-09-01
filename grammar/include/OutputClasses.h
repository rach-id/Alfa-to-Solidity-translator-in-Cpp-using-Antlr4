#include <string>

using namespace std;

class OutputClasses {

public :

	OutputClasses() : attributeStructCount(0), indentCount(0) {}
	
	
	string getAttributeStruct() {
		if (attributeStructCount != 0) return "";
		string str = "struct attribute {\n" + indent() +"\tstring id;\n" +indent() +"\tstring type;\n" + indent() + "\tstring category;\n" + indent() + "}\n";
		++attributeStructCount;
		return str;
	}
	
	
	string getTargetStruct(string ressource, string value) {
		string str = "struct Target {\n" + indent() +"\tstring " + ressource + " = " + value + " ;" + "\n" + indent() + "}\n";
		++attributeStructCount;
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
	int attributeStructCount;
};
