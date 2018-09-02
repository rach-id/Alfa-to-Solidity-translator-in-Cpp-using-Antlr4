
// Generated from ALFA.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ALFAParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ALFAParser.
 */
class  ALFAVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ALFAParser.
   */
    virtual antlrcpp::Any visitTranslationunit(ALFAParser::TranslationunitContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationseq(ALFAParser::DeclarationseqContext *context) = 0;

    virtual antlrcpp::Any visitNamespaceDefinition(ALFAParser::NamespaceDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitPolicysetDefinition(ALFAParser::PolicysetDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitPolicyDefinition(ALFAParser::PolicyDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitRuleDefinition(ALFAParser::RuleDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitOnBlock(ALFAParser::OnBlockContext *context) = 0;

    virtual antlrcpp::Any visitOnPermitBlock(ALFAParser::OnPermitBlockContext *context) = 0;

    virtual antlrcpp::Any visitOnDenyBlock(ALFAParser::OnDenyBlockContext *context) = 0;

    virtual antlrcpp::Any visitTargetDefinition(ALFAParser::TargetDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitClauseDefinition(ALFAParser::ClauseDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitBooleenExpression(ALFAParser::BooleenExpressionContext *context) = 0;

    virtual antlrcpp::Any visitConditionDefinition(ALFAParser::ConditionDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitCondition(ALFAParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitImportDefinition(ALFAParser::ImportDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitPermitdeny(ALFAParser::PermitdenyContext *context) = 0;

    virtual antlrcpp::Any visitCombiningAlgorithm(ALFAParser::CombiningAlgorithmContext *context) = 0;

    virtual antlrcpp::Any visitAdviceDefinition(ALFAParser::AdviceDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitObligationDefinition(ALFAParser::ObligationDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitAttributeDefinition(ALFAParser::AttributeDefinitionContext *context) = 0;

    virtual antlrcpp::Any visitLAND(ALFAParser::LANDContext *context) = 0;

    virtual antlrcpp::Any visitLOR(ALFAParser::LORContext *context) = 0;


};

