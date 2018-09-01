#include <antlr4-runtime.h>
#include "ALFABaseListener.h"
#include "ALFAParser.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "OutputClasses.h"



using namespace std;


class Listener : public ALFABaseListener {
	public:
	
	/* Constructor/Destructor */
	Listener(ALFAParser* p, string f) : outputFile(f, ios::out), boolCount(0) {
	
		parser = new ALFAParser(p->getTokenStream());
		
		if (outputFile.is_open()) cout << "# output file loaded successfuly" << endl;
		else cout << "# Could not load output file" << endl;
		
		output = "";
	}
	
	~Listener() {
		delete parser;
	}
	
	
	/* Public Members */
	ALFAParser* parser;
	ofstream outputFile;
	string output;
	OutputClasses Output;
	
	
	/* BaseListener inherited functions */ 
  	virtual void enterTranslationunit(ALFAParser::TranslationunitContext *ctx) {
  		cout << " enterTranslationUnit " << endl;
  		output += Output.indent() + "pragma solidity ^0.4.0; // What compiler to use\n\n" ;
  	}
  	
  	virtual void exitTranslationunit(ALFAParser::TranslationunitContext *ctx) {
  		cout << " exitTranslationUnit " << endl;
  	
  		output += "\n\n\n // End of translation";
  	
  		outputFile << output ;
  	
  		outputFile.close();
 	}

  	virtual void enterDeclarationseq(ALFAParser::DeclarationseqContext *ctx) {
  			cout << " enterDeclarationSeq " << endl;
  	}
  	
  	virtual void exitDeclarationseq(ALFAParser::DeclarationseqContext *ctx) {
  		cout << " exitDeclarationSeq " << endl;
  	}

  	virtual void enterNamespaceDefinition(ALFAParser::NamespaceDefinitionContext *ctx) {
  		cout << " enterNamespaceDefinition " << endl;
  	}
  	
  	virtual void exitNamespaceDefinition(ALFAParser::NamespaceDefinitionContext *ctx) {
  		cout << " exitNamespaceDefinition " << endl;
  	}

  	virtual void enterPolicysetDefinition(ALFAParser::PolicysetDefinitionContext *ctx) {
  		cout << " enterPolicysetDefinition " << endl;
  		
  		  		  	
  	/* ---------------------------------------------------------------------------------------------------------------------------*/
  
  		/* Collecting the policyset name :
	  	*
	  	* For example 
	  	* 	policyset test {
	  	*		...
	  	*		...
	  	*	}
		* 
		* the policysetName string will contain "test".
		*
		*/
		
  		string policysetName = "";
  		if(ctx->WORD()) policysetName = (ctx->WORD())->toString() ;
  		
	/* ---------------------------------------------------------------------------------------------------------------------------*/
  	  
  	  	/* translating the code */
  	  	
  	  	output += "contract " + policysetName + " {\n" ;
  	  	Output.indentCount++;
  	  	
	/* ---------------------------------------------------------------------------------------------------------------------------*/
  	  
  	}
  	
  	virtual void exitPolicysetDefinition(ALFAParser::PolicysetDefinitionContext *ctx) {
  		cout << " exitPolicysetDefinition " << endl;

		output += Output.indent() + "\n}\n";
  		Output.indentCount -= 1;
  	}

  	virtual void enterPolicyDefinition(ALFAParser::PolicyDefinitionContext *ctx) {
  		cout << " enterPolicyDefinition " << endl;
  		  	
  	/* ---------------------------------------------------------------------------------------------------------------------------*/
  
  		/* Collecting the policy name :
	  	*
	  	* For example 
	  	* 	policy test {
	  	*		...
	  	*		...
	  	*	}
		* 
		* the policyName string will contain "test".
		*
		*/
		string policyName = "";
		if (ctx->WORD()) policyName = (ctx->WORD())->toString();
  		
  		
	/* ---------------------------------------------------------------------------------------------------------------------------*/
  	 	/* translating the code */
  	  	
  	  	output += Output.indent() + "contract " + policyName + " {\n" ;
  	  	Output.indentCount++;
  	  	output += "\n";
  	  	
	/* ---------------------------------------------------------------------------------------------------------------------------*/
  	}
  	
  	virtual void exitPolicyDefinition(ALFAParser::PolicyDefinitionContext *ctx) {
  		cout << " exitPolicyDefinition " << endl;
 
 
 		Output.indentCount -= 1;
  		output += "\n" + Output.indent() + "}\n";
  		
  	}

  	virtual void enterRuleDefinition(ALFAParser::RuleDefinitionContext *ctx) {
  		cout << " enterRuleDefinition " << endl;
  		
	/* ---------------------------------------------------------------------------------------------------------------------------*/
  
  		/* Collecting the rule name :
	  	*
	  	* For example 
	  	* 	rule test {
	  	*		...
	  	*		...
	  	*	}
		* 
		* the ruleName string will contain "test".
		*
		*/
		
  		string ruleName = "";
  		if(ctx->WORD()) ruleName = (ctx->WORD())->toString();
  		
	/* ---------------------------------------------------------------------------------------------------------------------------*/
  	  
  	  	/* translating the code */
  	  	
  	  	output += Output.indent() + "function " + ruleName + " () returns (bool)" + " {\n" ;
  	  	Output.indentCount += 1;
  	  	output += "\n";
  	  	
	/* ---------------------------------------------------------------------------------------------------------------------------*/
  	}
  	
  	virtual void exitRuleDefinition(ALFAParser::RuleDefinitionContext *ctx) {
  		cout << " exitRuleDefinition " << endl;
  		
  		Output.indentCount = Output.indentCount - 1 ;
  		output += "\n" + Output.indent() + "}\n";
  		
  		
  	}

  	virtual void enterOnBlock(ALFAParser::OnBlockContext *ctx) {
  		cout << " enterOnBlock " << endl;
  	}
  	
  	virtual void exitOnBlock(ALFAParser::OnBlockContext *ctx) {
  		cout << " exitOnBlock " << endl;
  	}

  	virtual void enterOnPermitBlock(ALFAParser::OnPermitBlockContext *ctx) {
  		cout << " enterOnPermitBlock " << endl;
 	}
 	
  	virtual void exitOnPermitBlock(ALFAParser::OnPermitBlockContext *ctx) {
  		cout << " exitOnPermitBlock " << endl;
  	}

  	virtual void enterOnDenyBlock(ALFAParser::OnDenyBlockContext *ctx) {
  		cout << " enterOnDenyBlock " << endl;
  	}
  	
  	virtual void exitOnDenyBlock(ALFAParser::OnDenyBlockContext *ctx) {
  		cout << " exitOnDenyBlock " << endl;
  	}

  	virtual void enterTargetDefinition(ALFAParser::TargetDefinitionContext *ctx) {
  		cout << " enterTargetDefinition " << endl;
  		
	/* ---------------------------------------------------------------------------------------------------------------------------*/
  
  		/* Collecting the target clause definition :
	  	*
	  	* For example 
	  	*
	  	* 	target clause test. == "read"
		*
		* 
		* the targetRessource string will contain the value 'test',
		* and the targetValue string will contain 'read'.
		*
		*
		*
		* !!! PS : !!!
		* 1- This translator doesnt make the difference between 'and' and 'or'
		* 	blocks, it gathers them in a struct regardless of their type.
		*
		* 2- a target clause definition with multiple clause definitions will not be interpreted
		* 	for example : target clause test. == "read" and rest. != "write"
		* 	only the first clause will be translated.
		* 
		* 3- a target clause like :  target clause qt > 13 , or anything 
		*	of a kind wont be translated. Specified clauses should be made
		*	in a condition ...
		*	
		* 4 - incomplete target clause definitions like : target clause , 
		*	will result in an empty 'require()' solidity block.
		*
		*/
		
  		string targetRessource = "";
  		string targetValue = "";

		if(!((ctx->clauseDefinition())->booleenExpression()).empty()) {
		
			targetRessource = (((ctx->clauseDefinition())->booleenExpression())[0]->TARGETRESSOURCE())->toString();
		
		//remove the '.' added for targets to be parsed by antlr
			targetRessource.pop_back(); 
		
		
  			targetValue = (((ctx->clauseDefinition())->booleenExpression())[0]->VALUE())->toString();
  		
  		} else ctx->exitRule(this);
	/* ---------------------------------------------------------------------------------------------------------------------------*/
  	  
  	  	/* translating the code */
  	  	
  	  	output += Output.indent() + Output.getTargetStruct(targetRessource, targetValue) + "\n";
	
  	  	output += "\n";

  	  	
	/* ---------------------------------------------------------------------------------------------------------------------------*/
  	}
  	
  	virtual void exitTargetDefinition(ALFAParser::TargetDefinitionContext *ctx) {
  		cout << " exitTargetDefinition " << endl;
  	}

  	virtual void enterClauseDefinition(ALFAParser::ClauseDefinitionContext *ctx) {
  	
  		output += Output.indent() + "require (" ;
  		cout << " enterClauseDefinition " << endl;
  	}
 	virtual void exitClauseDefinition(ALFAParser::ClauseDefinitionContext *ctx) {
  		cout << " exitClauseDefinition " << endl;
  		output += " );\n"; 
  	}

  	virtual void enterBooleenExpression(ALFAParser::BooleenExpressionContext *ctx) {
  		cout << " enterBooleenExpression " << endl;
  		
	/* ---------------------------------------------------------------------------------------------------------------------------*/
  
  		/* Collecting the booleen expression definition :
	  	*
	  	* For example 
	  	*
	  	* 	condition resourceId.owner == "requestorId"
	  	*	target clause actionType. == "read"
		*	...
		* 
		*
		* the expressions that contain a booleen expression, will be translated
		* into a require solidity block
		*
		*
		*
		*/
		
		string targetRessource;
		string compare;
		string value;
		
		targetRessource = (ctx->TARGETRESSOURCE())->toString();
		targetRessource.pop_back();
		
		compare = (ctx->COMPARE())->toString();
		value = (ctx->VALUE())->toString();
		
	/* ---------------------------------------------------------------------------------------------------------------------------*/
  	  
  	  	/* translating the code */
  	  	
  	  	output += targetRessource + " " + compare + " " + value ;
  	  	boolCount++;
	  	if(!((ctx->lAND()).empty()) && boolCount > 0) output += " && " ;
		if(!((ctx->lOR()).empty()) && boolCount > 0) output += " || " ;
  		
		
  	  	
	/* ---------------------------------------------------------------------------------------------------------------------------*/
  	}
  	virtual void exitBooleenExpression(ALFAParser::BooleenExpressionContext *ctx) {
  		cout << " exitBooleenExpression " << endl;
  		boolCount = 0 ;
  	}

  	virtual void enterConditionDefinition(ALFAParser::ConditionDefinitionContext *ctx) {
  		cout << " enterConditionDefinition " << endl;
  		
  		output += Output.indent() + "require (" ;
  	}
  	
  	virtual void exitConditionDefinition(ALFAParser::ConditionDefinitionContext *ctx) {
  		cout << " exitConditionDefinition " << endl;
  		
  		output += " );\n"; 
  	}

  	virtual void enterCondition(ALFAParser::ConditionContext *ctx) {
  		cout << " enterCondition " << endl;
  	}
  	
  	virtual void exitCondition(ALFAParser::ConditionContext *ctx) {
  		cout << " exitCondition " << endl;
  	}

  	virtual void enterFunctionType(ALFAParser::FunctionTypeContext *ctx) {
  		cout << " enterFunctionType " << endl;
  	}
  	
  	virtual void exitFunctionType(ALFAParser::FunctionTypeContext *ctx) {
  		cout << " exitFunctionType " << endl;
  	}

  	virtual void enterFunctionName(ALFAParser::FunctionNameContext *ctx) {
  		cout << " enterFunctionName " << endl;
  	}
  	
  	virtual void exitFunctionName(ALFAParser::FunctionNameContext *ctx) {
  		cout << " exitFunctionName " << endl;
  	}

  	virtual void enterImportDefinition(ALFAParser::ImportDefinitionContext *ctx) {
  		cout << " enterImportDefinition " << endl;
  	}
  	
  	virtual void exitImportDefinition(ALFAParser::ImportDefinitionContext *ctx) {
  		cout << " exitImportDefinition " << endl;
  	}

  	virtual void enterPermitdeny(ALFAParser::PermitdenyContext *ctx) {
  		cout << " enterPermitdeny " << endl;
  		
  		output += Output.indent() + "return ";
  		if (ctx->PERMIT()) output += "true;";
  		else output += "false;";
		
  		
  	}
  	
  	virtual void exitPermitdeny(ALFAParser::PermitdenyContext *ctx) {
  		cout << " exitPermitdeny " << endl;
  	}

  	virtual void enterCombiningAlgorithm(ALFAParser::CombiningAlgorithmContext *ctx) {
  		cout << " enterCombiningAlgorithm " << endl;
  	}
  	
  	virtual void exitCombiningAlgorithm(ALFAParser::CombiningAlgorithmContext *ctx) {
  		cout << " exitCombiningAlgorithm " << endl;
  	}

  	virtual void enterAdviceDefinition(ALFAParser::AdviceDefinitionContext *ctx) {
  		cout << " enterAdviceDefinition " << endl;
  	}
  	
  	virtual void exitAdviceDefinition(ALFAParser::AdviceDefinitionContext *ctx) {
  		cout << " exitAdviceDefinition " << endl;
  	}

  	virtual void enterObligationDefinition(ALFAParser::ObligationDefinitionContext *ctx) {
  		cout << " enterObligationDefinition " << endl;
  	}
  	
  	virtual void exitObligationDefinition(ALFAParser::ObligationDefinitionContext *ctx) {
  		cout << " exitObligationDefinition " << endl;
  	}

  	virtual void enterAttributeDefinition(ALFAParser::AttributeDefinitionContext *ctx) {
		cout << " enterAttributeDefinition " << endl;
	
  	
  	/* ---------------------------------------------------------------------------------------------------------------------------*/
  
  		/* Collecting the identifiers and their values 
	  	*
	  	* For example 
	  	* 	attribute actionType {
		*        id = "urn:oasis:names:tc:xacml:1.0:action:action-type"
		*        type = "string"
		*        category = "actionCat"
		* 	}	
		* the attributeName string will contain "actionType",
		* the identifiers vector will contain ["id", "type", "category"], 
		* while the values vector will contain [""urn:oasis:names:tc:xacml:1.0:action:action-type", "string", "actionCat"].
		*
		*/
	
	  	vector<string> identifiers;
	  	vector<string> values;
	  	string attributeName;
	  	
	  	
	  	attributeName = (ctx->WORD())->toString();
	  	
	  	if (ctx->getRuleIndex() != 0) {
	  		for (auto id : ctx->IDENTIFIERS()) {
	  			identifiers.push_back(id->toString());
	  		} 
	  		
	  		for (auto id : ctx->VALUE()) {
	  			values.push_back(id->toString());
	  		} 
	  	}
	  	
	/* ---------------------------------------------------------------------------------------------------------------------------*/
		/* Attribute Definition translation */
	
		output += Output.indent() + Output.getAttributeStruct() + "\n";
	
		output += Output.indent() + "attribute " + attributeName + " ;\n" ;
		cout << "\n\n\n\n" << endl;
	
		for (int i=0; i< 3; i++) {
			output += Output.indent() + attributeName + "." + identifiers[i] + " = " + values[i] + " ;\n";
		}
		
		/* Cleaning the vectors for further use */
		identifiers.clear();
		values.clear();
		
	  	output += "\n";
	  	
	/* ---------------------------------------------------------------------------------------------------------------------------*/
	  }
	  
	  virtual void exitAttributeDefinition(ALFAParser::AttributeDefinitionContext *ctx) {
	  	cout << " exitAttributeDefinition " << endl;
	  }

private :
	int boolCount;
};



