#include <antlr4-runtime.h>
#include "ALFAListener.h"
#include "ALFABaseListener.h"
#include "ALFAParser.h"
#include <iostream>

using namespace std;


class Listener : public ALFABaseListener {
	public:

  virtual void enterTranslationunit(ALFAParser::TranslationunitContext *ctx) {
  	cout << "enterTranslationUnit" << endl;
  }
  virtual void exitTranslationunit(ALFAParser::TranslationunitContext *ctx) {
  	cout << "exitTranslationUnit" << endl;
  }

  virtual void enterDeclarationseq(ALFAParser::DeclarationseqContext *ctx) {
  	cout << "enterDeclarationSeq" << endl;
  }
  virtual void exitDeclarationseq(ALFAParser::DeclarationseqContext *ctx) {
  	cout << "exitDeclarationSeq" << endl;
  }

  virtual void enterNamespaceDefinition(ALFAParser::NamespaceDefinitionContext *ctx) {
  	cout << "in Something" << endl;
  }
  virtual void exitNamespaceDefinition(ALFAParser::NamespaceDefinitionContext *ctx) {
  	cout << "out of Something" << endl;
  }

  virtual void enterPolicysetDefinition(ALFAParser::PolicysetDefinitionContext *ctx) {
  	cout << "in Something" << endl;
  }
  virtual void exitPolicysetDefinition(ALFAParser::PolicysetDefinitionContext *ctx) {
  	cout << "out of Something" << endl;
  }

  virtual void enterPolicyDefinition(ALFAParser::PolicyDefinitionContext *ctx) {
  	cout << "in Something" << endl;
  }
  virtual void exitPolicyDefinition(ALFAParser::PolicyDefinitionContext *ctx) {
  	cout << "out of Something" << endl;
  }

  virtual void enterRuleDefinition(ALFAParser::RuleDefinitionContext *ctx) {
  	cout << "Something" << endl;
  }
  virtual void exitRuleDefinition(ALFAParser::RuleDefinitionContext *ctx) {
  	cout << "Something" << endl;
  }

  virtual void enterOnBlock(ALFAParser::OnBlockContext *ctx) {
  	cout << "Something" << endl;
  }
  virtual void exitOnBlock(ALFAParser::OnBlockContext *ctx) {
  	cout << "Something" << endl;
  }

  virtual void enterOnPermitBlock(ALFAParser::OnPermitBlockContext *ctx) {
  	cout << "Something" << endl;
  }
  virtual void exitOnPermitBlock(ALFAParser::OnPermitBlockContext *ctx) {
  	cout << "Something" << endl;
  }

  virtual void enterOnDenyBlock(ALFAParser::OnDenyBlockContext *ctx) {
  	cout << "Something" << endl;
  }
  virtual void exitOnDenyBlock(ALFAParser::OnDenyBlockContext *ctx) {
  	cout << "Something" << endl;
  }

  virtual void enterTargetDefinition(ALFAParser::TargetDefinitionContext *ctx) {
  	cout << "Something" << endl;
  }
  virtual void exitTargetDefinition(ALFAParser::TargetDefinitionContext *ctx) {
  	cout << "Something" << endl;
  }

  virtual void enterClauseDefinition(ALFAParser::ClauseDefinitionContext *ctx) {
  	cout << "Something" << endl;
  }
  virtual void exitClauseDefinition(ALFAParser::ClauseDefinitionContext *ctx) {
  	cout << "Something" << endl;
  }

  virtual void enterBooleenExpression(ALFAParser::BooleenExpressionContext *ctx) {
  	cout << "Something" << endl;
  }
  virtual void exitBooleenExpression(ALFAParser::BooleenExpressionContext *ctx) {
  	cout << "Something" << endl;
  }

  virtual void enterConditionDefinition(ALFAParser::ConditionDefinitionContext *ctx) {
  	cout << "Something" << endl;
  }
  virtual void exitConditionDefinition(ALFAParser::ConditionDefinitionContext *ctx) {
  	cout << "Something" << endl;
  }

  virtual void enterCondition(ALFAParser::ConditionContext *ctx) {
  	cout << "Something" << endl;
  }
  virtual void exitCondition(ALFAParser::ConditionContext *ctx) {
  	cout << "Something" << endl;
  }

  virtual void enterFunctionType(ALFAParser::FunctionTypeContext *ctx) {
  	cout << "Something" << endl;
  }
  virtual void exitFunctionType(ALFAParser::FunctionTypeContext *ctx) {
  	cout << "Something" << endl;
  }

  virtual void enterFunctionName(ALFAParser::FunctionNameContext *ctx) {
  	cout << "Something" << endl;
  }
  virtual void exitFunctionName(ALFAParser::FunctionNameContext *ctx) {
  	cout << "Something" << endl;
  }

  virtual void enterImportDefinition(ALFAParser::ImportDefinitionContext *ctx) {
  	cout << "Something" << endl;
  }
  virtual void exitImportDefinition(ALFAParser::ImportDefinitionContext *ctx) {
  	cout << "Something" << endl;
  }

  virtual void enterPermitdeny(ALFAParser::PermitdenyContext *ctx) {
  	cout << "Something" << endl;
  }
  virtual void exitPermitdeny(ALFAParser::PermitdenyContext *ctx) {
  	cout << "Something" << endl;
  }

  virtual void enterCombiningAlgorithm(ALFAParser::CombiningAlgorithmContext *ctx) {
  	cout << "Something" << endl;
  }
  virtual void exitCombiningAlgorithm(ALFAParser::CombiningAlgorithmContext *ctx) {
  	cout << "Something" << endl;
  }

  virtual void enterAdviceDefinition(ALFAParser::AdviceDefinitionContext *ctx) {
  	cout << "Something" << endl;
  }
  virtual void exitAdviceDefinition(ALFAParser::AdviceDefinitionContext *ctx) {
  	cout << "Something" << endl;
  }

  virtual void enterObligationDefinition(ALFAParser::ObligationDefinitionContext *ctx) {
  	cout << "Something" << endl;
  }
  virtual void exitObligationDefinition(ALFAParser::ObligationDefinitionContext *ctx) {
  	cout << "Something" << endl;
  }

  virtual void enterAttributeDefinition(ALFAParser::AttributeDefinitionContext *ctx) {
  	cout << "Something" << endl;
  }
  virtual void exitAttributeDefinition(ALFAParser::AttributeDefinitionContext *ctx) {
  	cout << "Something" << endl;
  }



};
