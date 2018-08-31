
#include "ALFAParser.h"
#include <antlr4-runtime.h>
#include "ALFAVisitor.h"
#include "ALFABaseVisitor.h"
#include <string>
#include "TokenStream.h"
#include <vector>

using namespace std;

class Visitor : public ALFABaseVisitor {
public:
	
	Visitor(ALFAParser* p) {
		parser = new ALFAParser(p->getTokenStream());
	}
	
	~Visitor() {
		delete parser;
	}
	
  virtual antlrcpp::Any visitAttributeDefinition(ALFAParser::AttributeDefinitionContext *ctx) override {
  	cout << "in AttributeDefinition" << endl;
  	
  /* ---------------------------------------------------------------------------------------------------------------------------*/
  
  	/* Collecting the identifiers and their values 
  	*
  	* For example 
  	* 	attribute actionType {
	*        id = "urn:oasis:names:tc:xacml:1.0:action:action-type"
	*        type = "string"
	*        category = "actionCat"
	* 	}	
	* the identifiers vector will contain ["id", "type", "category"], 
	* while the values vector will contain [""urn:oasis:names:tc:xacml:1.0:action:action-type", "string", "actionCat"].
	*
	*/
	
  	vector<string> identifiers;
  	vector<string> values;
  	
  	if (ctx->getRuleIndex() != 0) {
  		for (auto id : ctx->IDENTIFIERS()) {
  			identifiers.push_back(id->toString());
  		} 
  		
  		for (auto id : ctx->VALUE()) {
  			values.push_back(id->toString());
  		} 
  	}
  	
  /* ---------------------------------------------------------------------------------------------------------------------------*/
    return visitChildren(ctx);
  }


  virtual antlrcpp::Any visitTranslationunit(ALFAParser::TranslationunitContext *ctx) override {
  	
  	cout << "in Translationunit" << endl;
  	
  	/* 
  	antlr4::TokenStream* tokens = parser->getTokenStream();
  	if (ctx->getRuleIndex() != 0) {
  		string type = tokens->getText();
  		cout << type << endl;
  	}
  	// string args = tokens->getText(ctx->formalParameters()) ;
  	
  	*/
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationseq(ALFAParser::DeclarationseqContext *ctx) override {
  
  	cout << "in Declarationseq" << endl;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespaceDefinition(ALFAParser::NamespaceDefinitionContext *ctx) override {
  
  	cout << "in NamespaceDefinition" << endl;
  	
  /* ---------------------------------------------------------------------------------------------------------------------------*/
  	  
  	/* retrieving the namespace's name
  	*
  	* for example :
  	* 	namespace test {
  	*		...
  	*	}
  	* The namespaceName string will contain the value : "test".
  	*
  	*/
  	
  	string namespaceName = (ctx->WORD())->toString();
  	
  /* ---------------------------------------------------------------------------------------------------------------------------*/
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPolicysetDefinition(ALFAParser::PolicysetDefinitionContext *ctx) override {
  	cout << "in PolicysetDefinition" << endl;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPolicyDefinition(ALFAParser::PolicyDefinitionContext *ctx) override {
  cout << "in PolicyDefinition" << endl;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRuleDefinition(ALFAParser::RuleDefinitionContext *ctx) override {
  cout << "in RuleDefinition" << endl;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOnBlock(ALFAParser::OnBlockContext *ctx) override {
  cout << "in OnBlock" << endl;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOnPermitBlock(ALFAParser::OnPermitBlockContext *ctx) override {
  cout << "in OnPermitBlock" << endl;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOnDenyBlock(ALFAParser::OnDenyBlockContext *ctx) override {
  cout << "in OnDenyBlock" << endl;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTargetDefinition(ALFAParser::TargetDefinitionContext *ctx) override {
  cout << "in TargetDefinition" << endl;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClauseDefinition(ALFAParser::ClauseDefinitionContext *ctx) override {
  cout << "in ClauseDefinition" << endl;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleenExpression(ALFAParser::BooleenExpressionContext *ctx) override {
  cout << "in BooleenExpression" << endl;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionDefinition(ALFAParser::ConditionDefinitionContext *ctx) override {
  cout << "in ConditionDefinition" << endl;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition(ALFAParser::ConditionContext *ctx) override {
  cout << "in Condition" << endl;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionType(ALFAParser::FunctionTypeContext *ctx) override {
  cout << "in FunctionType" << endl;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionName(ALFAParser::FunctionNameContext *ctx) override {
  cout << "in FunctionName" << endl;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportDefinition(ALFAParser::ImportDefinitionContext *ctx) override {
  cout << "in ImportDefinition" << endl;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPermitdeny(ALFAParser::PermitdenyContext *ctx) override {
  cout << "in Permitdeny" << endl;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCombiningAlgorithm(ALFAParser::CombiningAlgorithmContext *ctx) override {
  cout << "in CombiningAlgorithm" << endl;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdviceDefinition(ALFAParser::AdviceDefinitionContext *ctx) override {
  cout << "in AdviceDefinition" << endl;
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObligationDefinition(ALFAParser::ObligationDefinitionContext *ctx) override {
  cout << "in ObligationDefinition" << endl;
    return visitChildren(ctx);
  }
	
	ALFAParser* parser;
};

