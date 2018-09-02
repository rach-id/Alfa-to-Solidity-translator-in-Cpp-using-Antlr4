
// Generated from ALFA.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ALFAVisitor.h"


/**
 * This class provides an empty implementation of ALFAVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ALFABaseVisitor : public ALFAVisitor {
public:

  virtual antlrcpp::Any visitTranslationunit(ALFAParser::TranslationunitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationseq(ALFAParser::DeclarationseqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespaceDefinition(ALFAParser::NamespaceDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPolicysetDefinition(ALFAParser::PolicysetDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPolicyDefinition(ALFAParser::PolicyDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRuleDefinition(ALFAParser::RuleDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOnBlock(ALFAParser::OnBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOnPermitBlock(ALFAParser::OnPermitBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOnDenyBlock(ALFAParser::OnDenyBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTargetDefinition(ALFAParser::TargetDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClauseDefinition(ALFAParser::ClauseDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleenExpression(ALFAParser::BooleenExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionDefinition(ALFAParser::ConditionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCondition(ALFAParser::ConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportDefinition(ALFAParser::ImportDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPermitdeny(ALFAParser::PermitdenyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCombiningAlgorithm(ALFAParser::CombiningAlgorithmContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdviceDefinition(ALFAParser::AdviceDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObligationDefinition(ALFAParser::ObligationDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributeDefinition(ALFAParser::AttributeDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLAND(ALFAParser::LANDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLOR(ALFAParser::LORContext *ctx) override {
    return visitChildren(ctx);
  }


};

