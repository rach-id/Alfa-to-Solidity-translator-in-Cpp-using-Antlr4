
// Generated from ALFA.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ALFAParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ALFAParser.
 */
class  ALFAListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterTranslationunit(ALFAParser::TranslationunitContext *ctx) = 0;
  virtual void exitTranslationunit(ALFAParser::TranslationunitContext *ctx) = 0;

  virtual void enterDeclarationseq(ALFAParser::DeclarationseqContext *ctx) = 0;
  virtual void exitDeclarationseq(ALFAParser::DeclarationseqContext *ctx) = 0;

  virtual void enterNamespaceDefinition(ALFAParser::NamespaceDefinitionContext *ctx) = 0;
  virtual void exitNamespaceDefinition(ALFAParser::NamespaceDefinitionContext *ctx) = 0;

  virtual void enterPolicysetDefinition(ALFAParser::PolicysetDefinitionContext *ctx) = 0;
  virtual void exitPolicysetDefinition(ALFAParser::PolicysetDefinitionContext *ctx) = 0;

  virtual void enterPolicyDefinition(ALFAParser::PolicyDefinitionContext *ctx) = 0;
  virtual void exitPolicyDefinition(ALFAParser::PolicyDefinitionContext *ctx) = 0;

  virtual void enterRuleDefinition(ALFAParser::RuleDefinitionContext *ctx) = 0;
  virtual void exitRuleDefinition(ALFAParser::RuleDefinitionContext *ctx) = 0;

  virtual void enterOnBlock(ALFAParser::OnBlockContext *ctx) = 0;
  virtual void exitOnBlock(ALFAParser::OnBlockContext *ctx) = 0;

  virtual void enterOnPermitBlock(ALFAParser::OnPermitBlockContext *ctx) = 0;
  virtual void exitOnPermitBlock(ALFAParser::OnPermitBlockContext *ctx) = 0;

  virtual void enterOnDenyBlock(ALFAParser::OnDenyBlockContext *ctx) = 0;
  virtual void exitOnDenyBlock(ALFAParser::OnDenyBlockContext *ctx) = 0;

  virtual void enterTargetDefinition(ALFAParser::TargetDefinitionContext *ctx) = 0;
  virtual void exitTargetDefinition(ALFAParser::TargetDefinitionContext *ctx) = 0;

  virtual void enterClauseDefinition(ALFAParser::ClauseDefinitionContext *ctx) = 0;
  virtual void exitClauseDefinition(ALFAParser::ClauseDefinitionContext *ctx) = 0;

  virtual void enterBooleenExpression(ALFAParser::BooleenExpressionContext *ctx) = 0;
  virtual void exitBooleenExpression(ALFAParser::BooleenExpressionContext *ctx) = 0;

  virtual void enterConditionDefinition(ALFAParser::ConditionDefinitionContext *ctx) = 0;
  virtual void exitConditionDefinition(ALFAParser::ConditionDefinitionContext *ctx) = 0;

  virtual void enterCondition(ALFAParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(ALFAParser::ConditionContext *ctx) = 0;

  virtual void enterImportDefinition(ALFAParser::ImportDefinitionContext *ctx) = 0;
  virtual void exitImportDefinition(ALFAParser::ImportDefinitionContext *ctx) = 0;

  virtual void enterPermitdeny(ALFAParser::PermitdenyContext *ctx) = 0;
  virtual void exitPermitdeny(ALFAParser::PermitdenyContext *ctx) = 0;

  virtual void enterCombiningAlgorithm(ALFAParser::CombiningAlgorithmContext *ctx) = 0;
  virtual void exitCombiningAlgorithm(ALFAParser::CombiningAlgorithmContext *ctx) = 0;

  virtual void enterAdviceDefinition(ALFAParser::AdviceDefinitionContext *ctx) = 0;
  virtual void exitAdviceDefinition(ALFAParser::AdviceDefinitionContext *ctx) = 0;

  virtual void enterObligationDefinition(ALFAParser::ObligationDefinitionContext *ctx) = 0;
  virtual void exitObligationDefinition(ALFAParser::ObligationDefinitionContext *ctx) = 0;

  virtual void enterAttributeDefinition(ALFAParser::AttributeDefinitionContext *ctx) = 0;
  virtual void exitAttributeDefinition(ALFAParser::AttributeDefinitionContext *ctx) = 0;

  virtual void enterValue(ALFAParser::ValueContext *ctx) = 0;
  virtual void exitValue(ALFAParser::ValueContext *ctx) = 0;

  virtual void enterLAND(ALFAParser::LANDContext *ctx) = 0;
  virtual void exitLAND(ALFAParser::LANDContext *ctx) = 0;

  virtual void enterLOR(ALFAParser::LORContext *ctx) = 0;
  virtual void exitLOR(ALFAParser::LORContext *ctx) = 0;


};

