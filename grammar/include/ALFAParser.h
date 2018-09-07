
// Generated from ALFA.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  ALFAParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, BlockComment = 18, LineComment = 19, 
    COMPARE = 20, NEWLINE = 21, WHITESPACE = 22, NUMBER = 23, BOOL = 24, 
    NAMESPACE = 25, POLICYSET = 26, POLICY = 27, RULE = 28, PERMIT = 29, 
    DENY = 30, TARGET = 31, CLAUSE = 32, ADVICE = 33, OBLIGATION = 34, ONPERMIT = 35, 
    ONDENY = 36, CONDITION = 37, FUNCTION = 38, BAGFUNCTION = 39, COMMENT = 40, 
    ATTRIBUTE = 41, IDENTIFIERS = 42, ID = 43, TYPE = 44, CATEGORY = 45, 
    FUNCTIONTYPE = 46, FUNCTIONNAME = 47, PLUS = 48, MINUS = 49, DIV = 50, 
    MULTIPLY = 51, RIGHTCBRACKET = 52, LEFTCBRACKET = 53, RIGHTPAREN = 54, 
    LEFTPAREN = 55, ASSIGN = 56, MOD = 57, AND = 58, OR = 59, NOT = 60, 
    LESS = 61, GREATER = 62, CARET = 63, EQUAL = 64, NOTEQUAL = 65, LESSEQUAL = 66, 
    GREATEREQUAL = 67, ANDAND = 68, OROR = 69, TARGETRESSOURCE = 70, WORD = 71, 
    STRING = 72
  };

  enum {
    RuleTranslationunit = 0, RuleDeclarationseq = 1, RuleNamespaceDefinition = 2, 
    RulePolicysetDefinition = 3, RulePolicyDefinition = 4, RuleRuleDefinition = 5, 
    RuleOnBlock = 6, RuleOnPermitBlock = 7, RuleOnDenyBlock = 8, RuleTargetDefinition = 9, 
    RuleClauseDefinition = 10, RuleBooleenExpression = 11, RuleConditionDefinition = 12, 
    RuleCondition = 13, RuleImportDefinition = 14, RulePermitdeny = 15, 
    RuleCombiningAlgorithm = 16, RuleAdviceDefinition = 17, RuleObligationDefinition = 18, 
    RuleAttributeDefinition = 19, RuleValue = 20, RuleLAND = 21, RuleLOR = 22
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
  class ImportDefinitionContext;
  class PermitdenyContext;
  class CombiningAlgorithmContext;
  class AdviceDefinitionContext;
  class ObligationDefinitionContext;
  class AttributeDefinitionContext;
  class ValueContext;
  class LANDContext;
  class LORContext; 

  class  TranslationunitContext : public antlr4::ParserRuleContext {
  public:
    TranslationunitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<DeclarationseqContext *> declarationseq();
    DeclarationseqContext* declarationseq(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
    std::vector<NamespaceDefinitionContext *> namespaceDefinition();
    NamespaceDefinitionContext* namespaceDefinition(size_t i);
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
    std::vector<NamespaceDefinitionContext *> namespaceDefinition();
    NamespaceDefinitionContext* namespaceDefinition(size_t i);
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
   
  };

  TargetDefinitionContext* targetDefinition();

  class  ClauseDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ClauseDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLAUSE();
    std::vector<BooleenExpressionContext *> booleenExpression();
    BooleenExpressionContext* booleenExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ClauseDefinitionContext* clauseDefinition();

  class  BooleenExpressionContext : public antlr4::ParserRuleContext {
  public:
    BooleenExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TARGETRESSOURCE();
    antlr4::tree::TerminalNode *COMPARE();
    ValueContext *value();
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHTPAREN();
    antlr4::tree::TerminalNode* RIGHTPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LEFTPAREN();
    antlr4::tree::TerminalNode* LEFTPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<LANDContext *> lAND();
    LANDContext* lAND(size_t i);
    std::vector<BooleenExpressionContext *> booleenExpression();
    BooleenExpressionContext* booleenExpression(size_t i);
    std::vector<LORContext *> lOR();
    LORContext* lOR(size_t i);
    antlr4::tree::TerminalNode *BAGFUNCTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
   
  };

  ConditionDefinitionContext* conditionDefinition();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *FUNCTIONNAME();
    ValueContext *value();
    antlr4::tree::TerminalNode *TARGETRESSOURCE();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOT();
    antlr4::tree::TerminalNode* NOT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RIGHTPAREN();
    antlr4::tree::TerminalNode* RIGHTPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FUNCTIONTYPE();
    antlr4::tree::TerminalNode* FUNCTIONTYPE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LEFTPAREN();
    antlr4::tree::TerminalNode* LEFTPAREN(size_t i);
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
   
  };

  ConditionContext* condition();

  class  ImportDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ImportDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TARGETRESSOURCE();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
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
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttributeDefinitionContext* attributeDefinition();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *WORD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ValueContext* value();

  class  LANDContext : public antlr4::ParserRuleContext {
  public:
    LANDContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LANDContext* lAND();

  class  LORContext : public antlr4::ParserRuleContext {
  public:
    LORContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LORContext* lOR();


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

