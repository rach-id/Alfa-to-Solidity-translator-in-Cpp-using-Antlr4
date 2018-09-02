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
	Listener(ALFAParser* p, string f) : outputFile(f, ios::out), boolCount(0), oldContractsCount(0), newContractsCount(0) {
	
		parser = new ALFAParser(p->getTokenStream());
		
		if (outputFile.is_open()) cout << "# output file loaded successfuly" << endl;
		else cout << "# Could not load output file" << endl;
		
		output = "" ;
		contracts.push_back(output);
	}
	
	~Listener() {
		delete parser;
	}
	

private:	
	/* Private Members */
	ALFAParser* parser;
	ofstream outputFile;
	vector<string> contracts;
	vector<string> contractsNames;
	OutputClasses Output;
	string output;
	int oldContractsCount;
	int newContractsCount;
	
public:	
	/* BaseListener inherited functions */ 
  	virtual void enterTranslationunit(ALFAParser::TranslationunitContext *ctx) {
  		cout << " enterTranslationUnit " << endl;
  		contracts[newContractsCount] += Output.indent() + "pragma solidity ^0.4.0; // What compiler to use\n\n" ;
  	}
  	
  	virtual void exitTranslationunit(ALFAParser::TranslationunitContext *ctx) {
  		cout << " exitTranslationUnit " << endl;
  	
  		
		for (string str : contracts) output += str;
		
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
  		oldContractsCount = newContractsCount;
  		Output.indentCount = 0;
  		output = "";
  		contracts.push_back(output);
  		newContractsCount = contracts.size() - 1;	
  			  	
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
  		else policysetName = "contract" + to_string(newContractsCount);
  		
  		if (newContractsCount > 1 ) contracts[oldContractsCount] += Output.indent() + "\tcontract " + policysetName + " ;\n\n" ;
  		
	/* ---------------------------------------------------------------------------------------------------------------------------*/
  	  
  	  	/* translating the code */
  	  	
  	  	contracts[newContractsCount] += "contract " + policysetName + " {\n" ;
  	  	Output.indentCount++;
  	  	
	/* ---------------------------------------------------------------------------------------------------------------------------*/

  	}
  	
  	virtual void exitPolicysetDefinition(ALFAParser::PolicysetDefinitionContext *ctx) {
  		cout << " exitPolicysetDefinition " << endl;

		
		contracts[newContractsCount] += Output.indent() + "\n}\n";
  		newContractsCount = oldContractsCount ;
  	}

  	virtual void enterPolicyDefinition(ALFAParser::PolicyDefinitionContext *ctx) {
  		cout << " enterPolicyDefinition " << endl;
  		  	
  		Output.indentCount = 0;
  		output = "";
  		oldContractsCount = newContractsCount;
  		output = "";
  		contracts.push_back(output);
  		newContractsCount = contracts.size() - 1;
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
  		else policyName = "contract" + to_string(newContractsCount) ;
  		
  		if (newContractsCount > 1 ) contracts[oldContractsCount] += "\tcontract " + policyName + " ;\n\n" ;
  		
	/* ---------------------------------------------------------------------------------------------------------------------------*/
  	 	/* translating the code */
  	  	
  	  	contracts[newContractsCount] += Output.indent() + "contract " + policyName + " {\n" ;
  	  	Output.indentCount++;
  	  	output += "\n";
  	  	
	/* ---------------------------------------------------------------------------------------------------------------------------*/
  	}
  	
  	virtual void exitPolicyDefinition(ALFAParser::PolicyDefinitionContext *ctx) {
  		cout << " exitPolicyDefinition " << endl;
 
 
 		
  		contracts[newContractsCount] += "\n" + Output.indent() + "}\n";
  		
  		newContractsCount = oldContractsCount ;
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
  	  	
  	  	contracts[newContractsCount] += Output.indent() + "function " + ruleName + " () returns (bool)" + " {\n" ;
  	  	Output.indentCount += 1;
  	  	contracts[newContractsCount] += "\n";
  	  	
	/* ---------------------------------------------------------------------------------------------------------------------------*/
  	}
  	
  	virtual void exitRuleDefinition(ALFAParser::RuleDefinitionContext *ctx) {
  		cout << " exitRuleDefinition " << endl;
  		
  		Output.indentCount = Output.indentCount - 1 ;
  		contracts[newContractsCount] += "\n" + Output.indent() + "}\n\n";
  		
  		
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
  	  	
  	  	contracts[newContractsCount] += Output.indent() + Output.getTargetStruct(targetRessource, targetValue) + "\n";
	
  	  	contracts[newContractsCount] += "\n";

  	  	
	/* ---------------------------------------------------------------------------------------------------------------------------*/
  	}
  	
  	virtual void exitTargetDefinition(ALFAParser::TargetDefinitionContext *ctx) {
  		cout << " exitTargetDefinition " << endl;
  	}

  	virtual void enterClauseDefinition(ALFAParser::ClauseDefinitionContext *ctx) {
  	
  		contracts[newContractsCount] += Output.indent() + "require (" ;
  		cout << " enterClauseDefinition " << endl;
  		
  		
  	}
 	virtual void exitClauseDefinition(ALFAParser::ClauseDefinitionContext *ctx) {
  		cout << " exitClauseDefinition " << endl;
  		contracts[newContractsCount] += " );\n"; 
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
		* PS :
		*	the parenthesis opening and closing mechanism might not be
		*	precise in some cases.
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
  	  	
  	  	if(!((ctx->NOT()).empty())) contracts[newContractsCount] += " !" ;
  	  	if(!((ctx->RIGHTPAREN()).empty())) contracts[newContractsCount] += " ( ";
  	  	
  	  	contracts[newContractsCount] += targetRessource + " " + compare + " " + value ;
  	  	boolCount++;
  	  	
  	  	if(!((ctx->LEFTPAREN()).empty())) contracts[newContractsCount] += " ) ";
  	  	
	  	if(!((ctx->lAND()).empty()) && boolCount > 0) contracts[newContractsCount] += " && " ;
		if(!((ctx->lOR()).empty()) && boolCount > 0) contracts[newContractsCount] += " || " ;
  		
		
  	  	
	/* ---------------------------------------------------------------------------------------------------------------------------*/
  	}
  	virtual void exitBooleenExpression(ALFAParser::BooleenExpressionContext *ctx) {
  		cout << " exitBooleenExpression " << endl;
  		if(!((ctx->LEFTPAREN()).empty())) contracts[newContractsCount] += " ) ";
  		boolCount = 0 ;
  	}

  	virtual void enterConditionDefinition(ALFAParser::ConditionDefinitionContext *ctx) {
  		cout << " enterConditionDefinition " << endl;
  		
  		contracts[newContractsCount] += Output.indent() + "require (" ;
  		
  	}
  	
  	virtual void exitConditionDefinition(ALFAParser::ConditionDefinitionContext *ctx) {
  		cout << " exitConditionDefinition " << endl;
  		
  		contracts[newContractsCount] += " );\n"; 
  	}

  	virtual void enterCondition(ALFAParser::ConditionContext *ctx) {
  		cout << " enterCondition " << endl;
  		
  		/* the following loop is to balance the parenthesis */
  		for (auto paren : ctx->RIGHTPAREN()) {
  			contracts[newContractsCount] += paren->toString();
  		}
  	}
  	
  	virtual void exitCondition(ALFAParser::ConditionContext *ctx) {
  		cout << " exitCondition " << endl;
  		
  		/* the following loop is to balance the parenthesis */
  		for (auto paren : ctx->LEFTPAREN()) {
  			contracts[newContractsCount] += ")";
  		}
  		
  	}


  	virtual void enterImportDefinition(ALFAParser::ImportDefinitionContext *ctx) {
  		cout << " enterImportDefinition " << endl;
  	}
  	
  	virtual void exitImportDefinition(ALFAParser::ImportDefinitionContext *ctx) {
  		cout << " exitImportDefinition " << endl;
  	}

  	virtual void enterPermitdeny(ALFAParser::PermitdenyContext *ctx) {
  		cout << " enterPermitdeny " << endl;
  		
  		contracts[newContractsCount] += Output.indent() + "return ";
  		if (ctx->PERMIT()) contracts[newContractsCount] += "true;";
  		else contracts[newContractsCount] += "false;";
		
  		
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
	
		contracts[newContractsCount] += Output.indent() + Output.getAttributeStruct() + "\n";
	
		contracts[newContractsCount] += Output.indent() + "attribute " + attributeName + " ;\n" ;
		cout << "\n\n\n\n" << endl;
	
		for (int i=0; i< 3; i++) {
			contracts[newContractsCount] += Output.indent() + attributeName + "." + identifiers[i] + " = " + values[i] + " ;\n";
		}
		
		/* Cleaning the vectors for further use */
		identifiers.clear();
		values.clear();
		
	  	contracts[newContractsCount] += "\n";
	  	
	/* ---------------------------------------------------------------------------------------------------------------------------*/
	  }
	  
	  virtual void exitAttributeDefinition(ALFAParser::AttributeDefinitionContext *ctx) {
	  	cout << " exitAttributeDefinition " << endl;
	  }

private :
	int boolCount;
};



