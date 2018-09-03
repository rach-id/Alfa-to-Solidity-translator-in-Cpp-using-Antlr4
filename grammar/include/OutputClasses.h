#include <string>

using namespace std;

class OutputClasses {

public :

	OutputClasses() : attributeStructCount(0), indentCount(0), targetStructCount(0) {}
	
	
	string getAttributeStruct() {
		if (attributeStructCount != 0) return "";
		string str = "\tstruct attribute {\n" + indent() +"\tstring id_;\n" +indent() +"\tstring type_;\n" + indent() + "\tstring category_;\n" + indent() + "}\n";
		++attributeStructCount;
		return str;
	}
	
	
	string getTargetStruct(string ressource) {
		string str = "";
		
		if (targetStructCount == 0) str = "\tstruct Target {\n" + indent() +"\tstring " + ressource + " ;" + "\n" + indent() + "}\n";
		
		targetStructCount++;
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
	int targetStructCount;
};
