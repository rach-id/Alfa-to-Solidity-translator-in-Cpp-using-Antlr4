
// Generated from /home/sweexordious/Desktop/taaatata/Internship2018/Antlr_API/Tomasseti_test/ALFA.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  ALFAParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    BlockComment = 27, LineComment = 28, VALUE = 29, TYPES = 30, COMPARE = 31, 
    NEWLINE = 32, WHITESPACE = 33, BOOL = 34, NAMESPACE = 35, POLICYSET = 36, 
    POLICY = 37, RULE = 38, PERMIT = 39, DENY = 40, TARGET = 41, CLAUSE = 42, 
    ADVICE = 43, OBLIGATION = 44, ONPERMIT = 45, ONDENY = 46, CONDITION = 47, 
    FUNCTION = 48, BAGFUNCTION = 49, COMMENT = 50, ATTRIBUTE = 51, IDENTIFIERS = 52, 
    ID = 53, TYPE = 54, CATEGORY = 55, PLUS = 56, MINUS = 57, DIV = 58, 
    MULTIPLY = 59, RIGHTCBRACKET = 60, LEFTCBRACKET = 61, RIGHTPAREN = 62, 
    LEFTPAREN = 63, ASSIGN = 64, MOD = 65, AND = 66, OR = 67, NOT = 68, 
    LESS = 69, GREATER = 70, CARET = 71, EQUAL = 72, NOTEQUAL = 73, LESSEQUAL = 74, 
    GREATEREQUAL = 75, ANDAND = 76, OROR = 77, TARGETRESSOURCE = 78, WORD = 79, 
    STRING = 80
  };

  enum {
    RuleTranslationunit = 0, RuleDeclarationseq = 1, RuleNamespaceDefinition = 2, 
    RulePolicysetDefinition = 3, RulePolicyDefinition = 4, RuleRuleDefinition = 5, 
    RuleOnBlock = 6, RuleOnPermitBlock = 7, RuleOnDenyBlock = 8, RuleTargetDefinition = 9, 
    RuleClauseDefinition = 10, RuleBooleenExpression = 11, RuleConditionDefinition = 12, 
    RuleCondition = 13, RuleFunctionType = 14, RuleFunctionName = 15, RuleImportDefinition = 16, 
    RulePermitdeny = 17, RuleCombiningAlgorithm = 18, RuleAdviceDefinition = 19, 
    RuleObligationDefinition = 20, RuleAttributeDefinition = 21
  };

  ALFAParser(antlr4::TokenStream *input);
  ~ALFAParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class TranslationunitContext;
  class DeclarationseqContext;
  class NamespaceDefinitionContext;
  class PolicysetDefinitionContext;
  class PolicyDefinitionContext;
  class RuleDefinitionContext;
  class OnBlockContext;
  class OnPermitBlockContext;
  class OnDenyBlockContext;
  class TargetDefinitionContext;
  class ClauseDefinitionContext;
  class BooleenExpressionContext;
  class ConditionDefinitionContext;
  class ConditionContext;
  class FunctionTypeContext;
  class FunctionNameContext;
  class ImportDefinitionContext;
  class PermitdenyContext;
  class CombiningAlgorithmContext;
  class AdviceDefinitionContext;
  class ObligationDefinitionContext;
  class AttributeDefinitionContext; 

  class  TranslationunitContext : public antlr4::ParserRuleContext {
  public:
    TranslationunitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<DeclarationseqContext *> declarationseq();
    DeclarationseqContext* declarationseq(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TranslationunitContext* translationunit();

  class  DeclarationseqContext : public antlr4::ParserRuleContext {
  public:
    DeclarationseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    NamespaceDefinitionContext *namespaceDefinition();
    antlr4::tree::TerminalNode *COMMENT();
    ImportDefinitionContext *importDefinition();
    AttributeDefinitionContext *attributeDefinition();
    PolicysetDefinitionContext *policysetDefinition();
    PolicyDefinitionContext *policyDefinition();
    ConditionDefinitionContext *conditionDefinition();
    TargetDefinitionContext *targetDefinition();
    CombiningAlgorithmContext *combiningAlgorithm();
    OnBlockContext *onBlock();
    PermitdenyContext *permitdeny();
    BooleenExpressionContext *booleenExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationseqContext* declarationseq();

  class  NamespaceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    NamespaceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAMESPACE();
    antlr4::tree::TerminalNode *RIGHTCBRACKET();
    antlr4::tree::TerminalNode *LEFTCBRACKET();
    antlr4::tree::TerminalNode *WORD();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<NamespaceDefinitionContext *> namespaceDefinition();
    NamespaceDefinitionContext* namespaceDefinition(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMENT();
    antlr4::tree::TerminalNode* COMMENT(size_t i);
    std::vector<ImportDefinitionContext *> importDefinition();
    ImportDefinitionContext* importDefinition(size_t i);
    std::vector<AttributeDefinitionContext *> attributeDefinition();
    AttributeDefinitionContext* attributeDefinition(size_t i);
    std::vector<PolicysetDefinitionContext *> policysetDefinition();
    PolicysetDefinitionContext* policysetDefinition(size_t i);
    std::vector<PolicyDefinitionContext *> policyDefinition();
    PolicyDefinitionContext* policyDefinition(size_t i);
    std::vector<ConditionDefinitionContext *> conditionDefinition();
    ConditionDefinitionContext* conditionDefinition(size_t i);
    std::vector<TargetDefinitionContext *> targetDefinition();
    TargetDefinitionContext* targetDefinition(size_t i);
    std::vector<CombiningAlgorithmContext *> combiningAlgorithm();
    CombiningAlgorithmContext* combiningAlgorithm(size_t i);
    std::vector<OnBlockContext *> onBlock();
    OnBlockContext* onBlock(size_t i);
    std::vector<PermitdenyContext *> permitdeny();
    PermitdenyContext* permitdeny(size_t i);
    std::vector<BooleenExpressionContext *> booleenExpression();
    BooleenExpressionContext* booleenExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespaceDefinitionContext* namespaceDefinition();

  class  PolicysetDefinitionContext : public antlr4::ParserRuleContext {
  public:
    PolicysetDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POLICYSET();
    antlr4::tree::TerminalNode *WORD();
    antlr4::tree::TerminalNode *RIGHTCBRACKET();
    antlr4::tree::TerminalNode *LEFTCBRACKET();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *STRING();
    std::vector<PolicysetDefinitionContext *> policysetDefinition();
    PolicysetDefinitionContext* policysetDefinition(size_t i);
    std::vector<PolicyDefinitionContext *> policyDefinition();
    PolicyDefinitionContext* policyDefinition(size_t i);
    std::vector<RuleDefinitionContext *> ruleDefinition();
    RuleDefinitionContext* ruleDefinition(size_t i);
    std::vector<ConditionDefinitionContext *> conditionDefinition();
    ConditionDefinitionContext* conditionDefinition(size_t i);
    std::vector<TargetDefinitionContext *> targetDefinition();
    TargetDefinitionContext* targetDefinition(size_t i);
    std::vector<CombiningAlgorithmContext *> combiningAlgorithm();
    CombiningAlgorithmContext* combiningAlgorithm(size_t i);
    std::vector<OnBlockContext *> onBlock();
    OnBlockContext* onBlock(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PolicysetDefinitionContext* policysetDefinition();

  class  PolicyDefinitionContext : public antlr4::ParserRuleContext {
  public:
    PolicyDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POLICY();
    antlr4::tree::TerminalNode *WORD();
    antlr4::tree::TerminalNode *RIGHTCBRACKET();
    antlr4::tree::TerminalNode *LEFTCBRACKET();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *STRING();
    std::vector<PolicyDefinitionContext *> policyDefinition();
    PolicyDefinitionContext* policyDefinition(size_t i);
    std::vector<RuleDefinitionContext *> ruleDefinition();
    RuleDefinitionContext* ruleDefinition(size_t i);
    std::vector<ConditionDefinitionContext *> conditionDefinition();
    ConditionDefinitionContext* conditionDefinition(size_t i);
    std::vector<TargetDefinitionContext *> targetDefinition();
    TargetDefinitionContext* targetDefinition(size_t i);
    std::vector<CombiningAlgorithmContext *> combiningAlgorithm();
    CombiningAlgorithmContext* combiningAlgorithm(size_t i);
    std::vector<OnBlockContext *> onBlock();
    OnBlockContext* onBlock(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PolicyDefinitionContext* policyDefinition();

  class  RuleDefinitionContext : public antlr4::ParserRuleContext {
  public:
    RuleDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RULE();
    antlr4::tree::TerminalNode *WORD();
    antlr4::tree::TerminalNode *RIGHTCBRACKET();
    antlr4::tree::TerminalNode *LEFTCBRACKET();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *STRING();
    std::vector<RuleDefinitionContext *> ruleDefinition();
    RuleDefinitionContext* ruleDefinition(size_t i);
    std::vector<ConditionDefinitionContext *> conditionDefinition();
    ConditionDefinitionContext* conditionDefinition(size_t i);
    std::vector<TargetDefinitionContext *> targetDefinition();
    TargetDefinitionContext* targetDefinition(size_t i);
    std::vector<PermitdenyContext *> permitdeny();
    PermitdenyContext* permitdeny(size_t i);
    std::vector<OnBlockContext *> onBlock();
    OnBlockContext* onBlock(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RuleDefinitionContext* ruleDefinition();

  class  OnBlockContext : public antlr4::ParserRuleContext {
  public:
    OnBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OnPermitBlockContext *onPermitBlock();
    OnDenyBlockContext *onDenyBlock();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnBlockContext* onBlock();

  class  OnPermitBlockContext : public antlr4::ParserRuleContext {
  public:
    OnPermitBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ONPERMIT();
    antlr4::tree::TerminalNode *RIGHTCBRACKET();
    antlr4::tree::TerminalNode *LEFTCBRACKET();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<ObligationDefinitionContext *> obligationDefinition();
    ObligationDefinitionContext* obligationDefinition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnPermitBlockContext* onPermitBlock();

  class  OnDenyBlockContext : public antlr4::ParserRuleContext {
  public:
    OnDenyBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ONDENY();
    antlr4::tree::TerminalNode *RIGHTCBRACKET();
    antlr4::tree::TerminalNode *LEFTCBRACKET();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<AdviceDefinitionContext *> adviceDefinition();
    AdviceDefinitionContext* adviceDefinition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnDenyBlockContext* onDenyBlock();

  class  TargetDefinitionContext : public antlr4::ParserRuleContext {
  public:
    TargetDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TARGET();
    ClauseDefinitionContext *clauseDefinition();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TargetDefinitionContext* targetDefinition();

  class  ClauseDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ClauseDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLAUSE();
    std::vector<BooleenExpressionContext *> booleenExpression();
    BooleenExpressionContext* booleenExpression(size_t i);
    std::vector<ClauseDefinitionContext *> clauseDefinition();
    ClauseDefinitionContext* clauseDefinition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClauseDefinitionContext* clauseDefinition();

  class  BooleenExpressionContext : public antlr4::ParserRuleContext {
  public:
    BooleenExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TARGETRESSOURCE();
    antlr4::tree::TerminalNode *COMPARE();
    antlr4::tree::TerminalNode *VALUE();
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<BooleenExpressionContext *> booleenExpression();
    BooleenExpressionContext* booleenExpression(size_t i);
    antlr4::tree::TerminalNode *BAGFUNCTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleenExpressionContext* booleenExpression();

  class  ConditionDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ConditionDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONDITION();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<ConditionContext *> condition();
    ConditionContext* condition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionDefinitionContext* conditionDefinition();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    FunctionNameContext *functionName();
    antlr4::tree::TerminalNode *VALUE();
    antlr4::tree::TerminalNode *TARGETRESSOURCE();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    std::vector<FunctionTypeContext *> functionType();
    FunctionTypeContext* functionType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);
    std::vector<BooleenExpressionContext *> booleenExpression();
    BooleenExpressionContext* booleenExpression(size_t i);
    std::vector<ConditionContext *> condition();
    ConditionContext* condition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  FunctionTypeContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionTypeContext* functionType();

  class  FunctionNameContext : public antlr4::ParserRuleContext {
  public:
    FunctionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionNameContext* functionName();

  class  ImportDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ImportDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TARGETRESSOURCE();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportDefinitionContext* importDefinition();

  class  PermitdenyContext : public antlr4::ParserRuleContext {
  public:
    PermitdenyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PERMIT();
    antlr4::tree::TerminalNode *DENY();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PermitdenyContext* permitdeny();

  class  CombiningAlgorithmContext : public antlr4::ParserRuleContext {
  public:
    CombiningAlgorithmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CombiningAlgorithmContext* combiningAlgorithm();

  class  AdviceDefinitionContext : public antlr4::ParserRuleContext {
  public:
    AdviceDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADVICE();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TARGETRESSOURCE();
    antlr4::tree::TerminalNode* TARGETRESSOURCE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHTCBRACKET();
    antlr4::tree::TerminalNode* RIGHTCBRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LEFTCBRACKET();
    antlr4::tree::TerminalNode* LEFTCBRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASSIGN();
    antlr4::tree::TerminalNode* ASSIGN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdviceDefinitionContext* adviceDefinition();

  class  ObligationDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ObligationDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OBLIGATION();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TARGETRESSOURCE();
    antlr4::tree::TerminalNode* TARGETRESSOURCE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHTCBRACKET();
    antlr4::tree::TerminalNode* RIGHTCBRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LEFTCBRACKET();
    antlr4::tree::TerminalNode* LEFTCBRACKET(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASSIGN();
    antlr4::tree::TerminalNode* ASSIGN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObligationDefinitionContext* obligationDefinition();

  class  AttributeDefinitionContext : public antlr4::ParserRuleContext {
  public:
    AttributeDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ATTRIBUTE();
    antlr4::tree::TerminalNode *WORD();
    antlr4::tree::TerminalNode *RIGHTCBRACKET();
    antlr4::tree::TerminalNode *LEFTCBRACKET();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIERS();
    antlr4::tree::TerminalNode* IDENTIFIERS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ASSIGN();
    antlr4::tree::TerminalNode* ASSIGN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VALUE();
    antlr4::tree::TerminalNode* VALUE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeDefinitionContext* attributeDefinition();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace antlrcpptest
