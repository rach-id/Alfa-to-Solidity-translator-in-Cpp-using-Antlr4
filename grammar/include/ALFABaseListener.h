
// Generated from ALFA.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ALFAListener.h"


/**
 * This class provides an empty implementation of ALFAListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ALFABaseListener : public ALFAListener {
public:

  virtual void enterTranslationunit(ALFAParser::TranslationunitContext * /*ctx*/) override { }
  virtual void exitTranslationunit(ALFAParser::TranslationunitContext * /*ctx*/) override { }

  virtual void enterDeclarationseq(ALFAParser::DeclarationseqContext * /*ctx*/) override { }
  virtual void exitDeclarationseq(ALFAParser::DeclarationseqContext * /*ctx*/) override { }

  virtual void enterNamespaceDefinition(ALFAParser::NamespaceDefinitionContext * /*ctx*/) override { }
  virtual void exitNamespaceDefinition(ALFAParser::NamespaceDefinitionContext * /*ctx*/) override { }

  virtual void enterPolicysetDefinition(ALFAParser::PolicysetDefinitionContext * /*ctx*/) override { }
  virtual void exitPolicysetDefinition(ALFAParser::PolicysetDefinitionContext * /*ctx*/) override { }

  virtual void enterPolicyDefinition(ALFAParser::PolicyDefinitionContext * /*ctx*/) override { }
  virtual void exitPolicyDefinition(ALFAParser::PolicyDefinitionContext * /*ctx*/) override { }

  virtual void enterRuleDefinition(ALFAParser::RuleDefinitionContext * /*ctx*/) override { }
  virtual void exitRuleDefinition(ALFAParser::RuleDefinitionContext * /*ctx*/) override { }

  virtual void enterOnBlock(ALFAParser::OnBlockContext * /*ctx*/) override { }
  virtual void exitOnBlock(ALFAParser::OnBlockContext * /*ctx*/) override { }

  virtual void enterOnPermitBlock(ALFAParser::OnPermitBlockContext * /*ctx*/) override { }
  virtual void exitOnPermitBlock(ALFAParser::OnPermitBlockContext * /*ctx*/) override { }

  virtual void enterOnDenyBlock(ALFAParser::OnDenyBlockContext * /*ctx*/) override { }
  virtual void exitOnDenyBlock(ALFAParser::OnDenyBlockContext * /*ctx*/) override { }

  virtual void enterTargetDefinition(ALFAParser::TargetDefinitionContext * /*ctx*/) override { }
  virtual void exitTargetDefinition(ALFAParser::TargetDefinitionContext * /*ctx*/) override { }

  virtual void enterClauseDefinition(ALFAParser::ClauseDefinitionContext * /*ctx*/) override { }
  virtual void exitClauseDefinition(ALFAParser::ClauseDefinitionContext * /*ctx*/) override { }

  virtual void enterBooleenExpression(ALFAParser::BooleenExpressionContext * /*ctx*/) override { }
  virtual void exitBooleenExpression(ALFAParser::BooleenExpressionContext * /*ctx*/) override { }

  virtual void enterConditionDefinition(ALFAParser::ConditionDefinitionContext * /*ctx*/) override { }
  virtual void exitConditionDefinition(ALFAParser::ConditionDefinitionContext * /*ctx*/) override { }

  virtual void enterCondition(ALFAParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(ALFAParser::ConditionContext * /*ctx*/) override { }

  virtual void enterImportDefinition(ALFAParser::ImportDefinitionContext * /*ctx*/) override { }
  virtual void exitImportDefinition(ALFAParser::ImportDefinitionContext * /*ctx*/) override { }

  virtual void enterPermitdeny(ALFAParser::PermitdenyContext * /*ctx*/) override { }
  virtual void exitPermitdeny(ALFAParser::PermitdenyContext * /*ctx*/) override { }

  virtual void enterCombiningAlgorithm(ALFAParser::CombiningAlgorithmContext * /*ctx*/) override { }
  virtual void exitCombiningAlgorithm(ALFAParser::CombiningAlgorithmContext * /*ctx*/) override { }

  virtual void enterAdviceDefinition(ALFAParser::AdviceDefinitionContext * /*ctx*/) override { }
  virtual void exitAdviceDefinition(ALFAParser::AdviceDefinitionContext * /*ctx*/) override { }

  virtual void enterObligationDefinition(ALFAParser::ObligationDefinitionContext * /*ctx*/) override { }
  virtual void exitObligationDefinition(ALFAParser::ObligationDefinitionContext * /*ctx*/) override { }

  virtual void enterAttributeDefinition(ALFAParser::AttributeDefinitionContext * /*ctx*/) override { }
  virtual void exitAttributeDefinition(ALFAParser::AttributeDefinitionContext * /*ctx*/) override { }

  virtual void enterValue(ALFAParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(ALFAParser::ValueContext * /*ctx*/) override { }

  virtual void enterLAND(ALFAParser::LANDContext * /*ctx*/) override { }
  virtual void exitLAND(ALFAParser::LANDContext * /*ctx*/) override { }

  virtual void enterLOR(ALFAParser::LORContext * /*ctx*/) override { }
  virtual void exitLOR(ALFAParser::LORContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

