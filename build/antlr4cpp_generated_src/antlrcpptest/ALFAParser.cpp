
// Generated from /home/sweexordious/Desktop/taaatata/Internship2018/Antlr_API/GitCommits/Antlr_Cpp_RandomCoding/grammar/ALFA.g4 by ANTLR 4.7.1


#include "ALFAListener.h"
#include "ALFAVisitor.h"

#include "ALFAParser.h"


using namespace antlrcpp;
using namespace antlrcpptest;
using namespace antlr4;

ALFAParser::ALFAParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ALFAParser::~ALFAParser() {
  delete _interpreter;
}

std::string ALFAParser::getGrammarFileName() const {
  return "ALFA.g4";
}

const std::vector<std::string>& ALFAParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ALFAParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- TranslationunitContext ------------------------------------------------------------------

ALFAParser::TranslationunitContext::TranslationunitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ALFAParser::TranslationunitContext::EOF() {
  return getToken(ALFAParser::EOF, 0);
}

std::vector<ALFAParser::DeclarationseqContext *> ALFAParser::TranslationunitContext::declarationseq() {
  return getRuleContexts<ALFAParser::DeclarationseqContext>();
}

ALFAParser::DeclarationseqContext* ALFAParser::TranslationunitContext::declarationseq(size_t i) {
  return getRuleContext<ALFAParser::DeclarationseqContext>(i);
}


size_t ALFAParser::TranslationunitContext::getRuleIndex() const {
  return ALFAParser::RuleTranslationunit;
}

void ALFAParser::TranslationunitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTranslationunit(this);
}

void ALFAParser::TranslationunitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTranslationunit(this);
}


antlrcpp::Any ALFAParser::TranslationunitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitTranslationunit(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::TranslationunitContext* ALFAParser::translationunit() {
  TranslationunitContext *_localctx = _tracker.createInstance<TranslationunitContext>(_ctx, getState());
  enterRule(_localctx, 0, ALFAParser::RuleTranslationunit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(44);
      declarationseq();
      setState(47); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 16) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 16)) & ((1ULL << (ALFAParser::T__15 - 16))
      | (1ULL << (ALFAParser::T__16 - 16))
      | (1ULL << (ALFAParser::NEWLINE - 16))
      | (1ULL << (ALFAParser::NAMESPACE - 16))
      | (1ULL << (ALFAParser::POLICYSET - 16))
      | (1ULL << (ALFAParser::POLICY - 16))
      | (1ULL << (ALFAParser::PERMIT - 16))
      | (1ULL << (ALFAParser::DENY - 16))
      | (1ULL << (ALFAParser::TARGET - 16))
      | (1ULL << (ALFAParser::ONPERMIT - 16))
      | (1ULL << (ALFAParser::ONDENY - 16))
      | (1ULL << (ALFAParser::CONDITION - 16))
      | (1ULL << (ALFAParser::BAGFUNCTION - 16))
      | (1ULL << (ALFAParser::COMMENT - 16))
      | (1ULL << (ALFAParser::ATTRIBUTE - 16))
      | (1ULL << (ALFAParser::RIGHTPAREN - 16))
      | (1ULL << (ALFAParser::NOT - 16))
      | (1ULL << (ALFAParser::TARGETRESSOURCE - 16)))) != 0));
    setState(49);
    match(ALFAParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationseqContext ------------------------------------------------------------------

ALFAParser::DeclarationseqContext::DeclarationseqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ALFAParser::DeclarationseqContext::NEWLINE() {
  return getTokens(ALFAParser::NEWLINE);
}

tree::TerminalNode* ALFAParser::DeclarationseqContext::NEWLINE(size_t i) {
  return getToken(ALFAParser::NEWLINE, i);
}

ALFAParser::NamespaceDefinitionContext* ALFAParser::DeclarationseqContext::namespaceDefinition() {
  return getRuleContext<ALFAParser::NamespaceDefinitionContext>(0);
}

tree::TerminalNode* ALFAParser::DeclarationseqContext::COMMENT() {
  return getToken(ALFAParser::COMMENT, 0);
}

ALFAParser::ImportDefinitionContext* ALFAParser::DeclarationseqContext::importDefinition() {
  return getRuleContext<ALFAParser::ImportDefinitionContext>(0);
}

ALFAParser::AttributeDefinitionContext* ALFAParser::DeclarationseqContext::attributeDefinition() {
  return getRuleContext<ALFAParser::AttributeDefinitionContext>(0);
}

ALFAParser::PolicysetDefinitionContext* ALFAParser::DeclarationseqContext::policysetDefinition() {
  return getRuleContext<ALFAParser::PolicysetDefinitionContext>(0);
}

ALFAParser::PolicyDefinitionContext* ALFAParser::DeclarationseqContext::policyDefinition() {
  return getRuleContext<ALFAParser::PolicyDefinitionContext>(0);
}

ALFAParser::ConditionDefinitionContext* ALFAParser::DeclarationseqContext::conditionDefinition() {
  return getRuleContext<ALFAParser::ConditionDefinitionContext>(0);
}

ALFAParser::TargetDefinitionContext* ALFAParser::DeclarationseqContext::targetDefinition() {
  return getRuleContext<ALFAParser::TargetDefinitionContext>(0);
}

ALFAParser::CombiningAlgorithmContext* ALFAParser::DeclarationseqContext::combiningAlgorithm() {
  return getRuleContext<ALFAParser::CombiningAlgorithmContext>(0);
}

ALFAParser::OnBlockContext* ALFAParser::DeclarationseqContext::onBlock() {
  return getRuleContext<ALFAParser::OnBlockContext>(0);
}

ALFAParser::PermitdenyContext* ALFAParser::DeclarationseqContext::permitdeny() {
  return getRuleContext<ALFAParser::PermitdenyContext>(0);
}

ALFAParser::BooleenExpressionContext* ALFAParser::DeclarationseqContext::booleenExpression() {
  return getRuleContext<ALFAParser::BooleenExpressionContext>(0);
}


size_t ALFAParser::DeclarationseqContext::getRuleIndex() const {
  return ALFAParser::RuleDeclarationseq;
}

void ALFAParser::DeclarationseqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarationseq(this);
}

void ALFAParser::DeclarationseqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarationseq(this);
}


antlrcpp::Any ALFAParser::DeclarationseqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitDeclarationseq(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::DeclarationseqContext* ALFAParser::declarationseq() {
  DeclarationseqContext *_localctx = _tracker.createInstance<DeclarationseqContext>(_ctx, getState());
  enterRule(_localctx, 2, ALFAParser::RuleDeclarationseq);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(70);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(54);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(51);
          match(ALFAParser::NEWLINE); 
        }
        setState(56);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
      }
      setState(57);
      match(ALFAParser::NEWLINE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(58);
      namespaceDefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(59);
      match(ALFAParser::COMMENT);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(60);
      importDefinition();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(61);
      attributeDefinition();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(62);
      policysetDefinition();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(63);
      policyDefinition();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(64);
      conditionDefinition();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(65);
      targetDefinition();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(66);
      combiningAlgorithm();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(67);
      onBlock();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(68);
      permitdeny();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(69);
      booleenExpression();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceDefinitionContext ------------------------------------------------------------------

ALFAParser::NamespaceDefinitionContext::NamespaceDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ALFAParser::NamespaceDefinitionContext::NAMESPACE() {
  return getToken(ALFAParser::NAMESPACE, 0);
}

tree::TerminalNode* ALFAParser::NamespaceDefinitionContext::RIGHTCBRACKET() {
  return getToken(ALFAParser::RIGHTCBRACKET, 0);
}

tree::TerminalNode* ALFAParser::NamespaceDefinitionContext::LEFTCBRACKET() {
  return getToken(ALFAParser::LEFTCBRACKET, 0);
}

tree::TerminalNode* ALFAParser::NamespaceDefinitionContext::WORD() {
  return getToken(ALFAParser::WORD, 0);
}

std::vector<tree::TerminalNode *> ALFAParser::NamespaceDefinitionContext::NEWLINE() {
  return getTokens(ALFAParser::NEWLINE);
}

tree::TerminalNode* ALFAParser::NamespaceDefinitionContext::NEWLINE(size_t i) {
  return getToken(ALFAParser::NEWLINE, i);
}

std::vector<ALFAParser::NamespaceDefinitionContext *> ALFAParser::NamespaceDefinitionContext::namespaceDefinition() {
  return getRuleContexts<ALFAParser::NamespaceDefinitionContext>();
}

ALFAParser::NamespaceDefinitionContext* ALFAParser::NamespaceDefinitionContext::namespaceDefinition(size_t i) {
  return getRuleContext<ALFAParser::NamespaceDefinitionContext>(i);
}

std::vector<tree::TerminalNode *> ALFAParser::NamespaceDefinitionContext::COMMENT() {
  return getTokens(ALFAParser::COMMENT);
}

tree::TerminalNode* ALFAParser::NamespaceDefinitionContext::COMMENT(size_t i) {
  return getToken(ALFAParser::COMMENT, i);
}

std::vector<ALFAParser::ImportDefinitionContext *> ALFAParser::NamespaceDefinitionContext::importDefinition() {
  return getRuleContexts<ALFAParser::ImportDefinitionContext>();
}

ALFAParser::ImportDefinitionContext* ALFAParser::NamespaceDefinitionContext::importDefinition(size_t i) {
  return getRuleContext<ALFAParser::ImportDefinitionContext>(i);
}

std::vector<ALFAParser::AttributeDefinitionContext *> ALFAParser::NamespaceDefinitionContext::attributeDefinition() {
  return getRuleContexts<ALFAParser::AttributeDefinitionContext>();
}

ALFAParser::AttributeDefinitionContext* ALFAParser::NamespaceDefinitionContext::attributeDefinition(size_t i) {
  return getRuleContext<ALFAParser::AttributeDefinitionContext>(i);
}

std::vector<ALFAParser::PolicysetDefinitionContext *> ALFAParser::NamespaceDefinitionContext::policysetDefinition() {
  return getRuleContexts<ALFAParser::PolicysetDefinitionContext>();
}

ALFAParser::PolicysetDefinitionContext* ALFAParser::NamespaceDefinitionContext::policysetDefinition(size_t i) {
  return getRuleContext<ALFAParser::PolicysetDefinitionContext>(i);
}

std::vector<ALFAParser::PolicyDefinitionContext *> ALFAParser::NamespaceDefinitionContext::policyDefinition() {
  return getRuleContexts<ALFAParser::PolicyDefinitionContext>();
}

ALFAParser::PolicyDefinitionContext* ALFAParser::NamespaceDefinitionContext::policyDefinition(size_t i) {
  return getRuleContext<ALFAParser::PolicyDefinitionContext>(i);
}

std::vector<ALFAParser::ConditionDefinitionContext *> ALFAParser::NamespaceDefinitionContext::conditionDefinition() {
  return getRuleContexts<ALFAParser::ConditionDefinitionContext>();
}

ALFAParser::ConditionDefinitionContext* ALFAParser::NamespaceDefinitionContext::conditionDefinition(size_t i) {
  return getRuleContext<ALFAParser::ConditionDefinitionContext>(i);
}

std::vector<ALFAParser::TargetDefinitionContext *> ALFAParser::NamespaceDefinitionContext::targetDefinition() {
  return getRuleContexts<ALFAParser::TargetDefinitionContext>();
}

ALFAParser::TargetDefinitionContext* ALFAParser::NamespaceDefinitionContext::targetDefinition(size_t i) {
  return getRuleContext<ALFAParser::TargetDefinitionContext>(i);
}

std::vector<ALFAParser::CombiningAlgorithmContext *> ALFAParser::NamespaceDefinitionContext::combiningAlgorithm() {
  return getRuleContexts<ALFAParser::CombiningAlgorithmContext>();
}

ALFAParser::CombiningAlgorithmContext* ALFAParser::NamespaceDefinitionContext::combiningAlgorithm(size_t i) {
  return getRuleContext<ALFAParser::CombiningAlgorithmContext>(i);
}

std::vector<ALFAParser::OnBlockContext *> ALFAParser::NamespaceDefinitionContext::onBlock() {
  return getRuleContexts<ALFAParser::OnBlockContext>();
}

ALFAParser::OnBlockContext* ALFAParser::NamespaceDefinitionContext::onBlock(size_t i) {
  return getRuleContext<ALFAParser::OnBlockContext>(i);
}

std::vector<ALFAParser::PermitdenyContext *> ALFAParser::NamespaceDefinitionContext::permitdeny() {
  return getRuleContexts<ALFAParser::PermitdenyContext>();
}

ALFAParser::PermitdenyContext* ALFAParser::NamespaceDefinitionContext::permitdeny(size_t i) {
  return getRuleContext<ALFAParser::PermitdenyContext>(i);
}

std::vector<ALFAParser::BooleenExpressionContext *> ALFAParser::NamespaceDefinitionContext::booleenExpression() {
  return getRuleContexts<ALFAParser::BooleenExpressionContext>();
}

ALFAParser::BooleenExpressionContext* ALFAParser::NamespaceDefinitionContext::booleenExpression(size_t i) {
  return getRuleContext<ALFAParser::BooleenExpressionContext>(i);
}


size_t ALFAParser::NamespaceDefinitionContext::getRuleIndex() const {
  return ALFAParser::RuleNamespaceDefinition;
}

void ALFAParser::NamespaceDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamespaceDefinition(this);
}

void ALFAParser::NamespaceDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamespaceDefinition(this);
}


antlrcpp::Any ALFAParser::NamespaceDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitNamespaceDefinition(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::NamespaceDefinitionContext* ALFAParser::namespaceDefinition() {
  NamespaceDefinitionContext *_localctx = _tracker.createInstance<NamespaceDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 4, ALFAParser::RuleNamespaceDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(75);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::NEWLINE) {
      setState(72);
      match(ALFAParser::NEWLINE);
      setState(77);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(78);
    match(ALFAParser::NAMESPACE);
    setState(86);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ALFAParser::NEWLINE:
      case ALFAParser::RIGHTCBRACKET: {
        setState(82);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ALFAParser::NEWLINE) {
          setState(79);
          match(ALFAParser::NEWLINE);
          setState(84);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case ALFAParser::WORD: {
        setState(85);
        match(ALFAParser::WORD);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(88);
    match(ALFAParser::RIGHTCBRACKET);
    setState(117);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 16) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 16)) & ((1ULL << (ALFAParser::T__15 - 16))
      | (1ULL << (ALFAParser::T__16 - 16))
      | (1ULL << (ALFAParser::NEWLINE - 16))
      | (1ULL << (ALFAParser::NAMESPACE - 16))
      | (1ULL << (ALFAParser::POLICYSET - 16))
      | (1ULL << (ALFAParser::POLICY - 16))
      | (1ULL << (ALFAParser::PERMIT - 16))
      | (1ULL << (ALFAParser::DENY - 16))
      | (1ULL << (ALFAParser::TARGET - 16))
      | (1ULL << (ALFAParser::ONPERMIT - 16))
      | (1ULL << (ALFAParser::ONDENY - 16))
      | (1ULL << (ALFAParser::CONDITION - 16))
      | (1ULL << (ALFAParser::BAGFUNCTION - 16))
      | (1ULL << (ALFAParser::COMMENT - 16))
      | (1ULL << (ALFAParser::ATTRIBUTE - 16))
      | (1ULL << (ALFAParser::RIGHTPAREN - 16))
      | (1ULL << (ALFAParser::NOT - 16))
      | (1ULL << (ALFAParser::TARGETRESSOURCE - 16)))) != 0)) {
      setState(92);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(89);
          match(ALFAParser::NEWLINE); 
        }
        setState(94);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
      }
      setState(107);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
      case 1: {
        setState(95);
        namespaceDefinition();
        break;
      }

      case 2: {
        setState(96);
        match(ALFAParser::COMMENT);
        break;
      }

      case 3: {
        setState(97);
        importDefinition();
        break;
      }

      case 4: {
        setState(98);
        attributeDefinition();
        break;
      }

      case 5: {
        setState(99);
        policysetDefinition();
        break;
      }

      case 6: {
        setState(100);
        policyDefinition();
        break;
      }

      case 7: {
        setState(101);
        conditionDefinition();
        break;
      }

      case 8: {
        setState(102);
        targetDefinition();
        break;
      }

      case 9: {
        setState(103);
        combiningAlgorithm();
        break;
      }

      case 10: {
        setState(104);
        onBlock();
        break;
      }

      case 11: {
        setState(105);
        permitdeny();
        break;
      }

      case 12: {
        setState(106);
        booleenExpression();
        break;
      }

      }
      setState(112);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(109);
          match(ALFAParser::NEWLINE); 
        }
        setState(114);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
      }
      setState(119);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(120);
    match(ALFAParser::LEFTCBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PolicysetDefinitionContext ------------------------------------------------------------------

ALFAParser::PolicysetDefinitionContext::PolicysetDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ALFAParser::PolicysetDefinitionContext::POLICYSET() {
  return getToken(ALFAParser::POLICYSET, 0);
}

tree::TerminalNode* ALFAParser::PolicysetDefinitionContext::WORD() {
  return getToken(ALFAParser::WORD, 0);
}

tree::TerminalNode* ALFAParser::PolicysetDefinitionContext::RIGHTCBRACKET() {
  return getToken(ALFAParser::RIGHTCBRACKET, 0);
}

tree::TerminalNode* ALFAParser::PolicysetDefinitionContext::LEFTCBRACKET() {
  return getToken(ALFAParser::LEFTCBRACKET, 0);
}

std::vector<tree::TerminalNode *> ALFAParser::PolicysetDefinitionContext::NEWLINE() {
  return getTokens(ALFAParser::NEWLINE);
}

tree::TerminalNode* ALFAParser::PolicysetDefinitionContext::NEWLINE(size_t i) {
  return getToken(ALFAParser::NEWLINE, i);
}

tree::TerminalNode* ALFAParser::PolicysetDefinitionContext::ASSIGN() {
  return getToken(ALFAParser::ASSIGN, 0);
}

tree::TerminalNode* ALFAParser::PolicysetDefinitionContext::STRING() {
  return getToken(ALFAParser::STRING, 0);
}

std::vector<ALFAParser::NamespaceDefinitionContext *> ALFAParser::PolicysetDefinitionContext::namespaceDefinition() {
  return getRuleContexts<ALFAParser::NamespaceDefinitionContext>();
}

ALFAParser::NamespaceDefinitionContext* ALFAParser::PolicysetDefinitionContext::namespaceDefinition(size_t i) {
  return getRuleContext<ALFAParser::NamespaceDefinitionContext>(i);
}

std::vector<ALFAParser::PolicysetDefinitionContext *> ALFAParser::PolicysetDefinitionContext::policysetDefinition() {
  return getRuleContexts<ALFAParser::PolicysetDefinitionContext>();
}

ALFAParser::PolicysetDefinitionContext* ALFAParser::PolicysetDefinitionContext::policysetDefinition(size_t i) {
  return getRuleContext<ALFAParser::PolicysetDefinitionContext>(i);
}

std::vector<ALFAParser::PolicyDefinitionContext *> ALFAParser::PolicysetDefinitionContext::policyDefinition() {
  return getRuleContexts<ALFAParser::PolicyDefinitionContext>();
}

ALFAParser::PolicyDefinitionContext* ALFAParser::PolicysetDefinitionContext::policyDefinition(size_t i) {
  return getRuleContext<ALFAParser::PolicyDefinitionContext>(i);
}

std::vector<ALFAParser::RuleDefinitionContext *> ALFAParser::PolicysetDefinitionContext::ruleDefinition() {
  return getRuleContexts<ALFAParser::RuleDefinitionContext>();
}

ALFAParser::RuleDefinitionContext* ALFAParser::PolicysetDefinitionContext::ruleDefinition(size_t i) {
  return getRuleContext<ALFAParser::RuleDefinitionContext>(i);
}

std::vector<ALFAParser::ConditionDefinitionContext *> ALFAParser::PolicysetDefinitionContext::conditionDefinition() {
  return getRuleContexts<ALFAParser::ConditionDefinitionContext>();
}

ALFAParser::ConditionDefinitionContext* ALFAParser::PolicysetDefinitionContext::conditionDefinition(size_t i) {
  return getRuleContext<ALFAParser::ConditionDefinitionContext>(i);
}

std::vector<ALFAParser::TargetDefinitionContext *> ALFAParser::PolicysetDefinitionContext::targetDefinition() {
  return getRuleContexts<ALFAParser::TargetDefinitionContext>();
}

ALFAParser::TargetDefinitionContext* ALFAParser::PolicysetDefinitionContext::targetDefinition(size_t i) {
  return getRuleContext<ALFAParser::TargetDefinitionContext>(i);
}

std::vector<ALFAParser::CombiningAlgorithmContext *> ALFAParser::PolicysetDefinitionContext::combiningAlgorithm() {
  return getRuleContexts<ALFAParser::CombiningAlgorithmContext>();
}

ALFAParser::CombiningAlgorithmContext* ALFAParser::PolicysetDefinitionContext::combiningAlgorithm(size_t i) {
  return getRuleContext<ALFAParser::CombiningAlgorithmContext>(i);
}

std::vector<ALFAParser::OnBlockContext *> ALFAParser::PolicysetDefinitionContext::onBlock() {
  return getRuleContexts<ALFAParser::OnBlockContext>();
}

ALFAParser::OnBlockContext* ALFAParser::PolicysetDefinitionContext::onBlock(size_t i) {
  return getRuleContext<ALFAParser::OnBlockContext>(i);
}


size_t ALFAParser::PolicysetDefinitionContext::getRuleIndex() const {
  return ALFAParser::RulePolicysetDefinition;
}

void ALFAParser::PolicysetDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPolicysetDefinition(this);
}

void ALFAParser::PolicysetDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPolicysetDefinition(this);
}


antlrcpp::Any ALFAParser::PolicysetDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitPolicysetDefinition(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::PolicysetDefinitionContext* ALFAParser::policysetDefinition() {
  PolicysetDefinitionContext *_localctx = _tracker.createInstance<PolicysetDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 6, ALFAParser::RulePolicysetDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(125);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::NEWLINE) {
      setState(122);
      match(ALFAParser::NEWLINE);
      setState(127);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(128);
    match(ALFAParser::POLICYSET);
    setState(175);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(129);
      match(ALFAParser::WORD);
      setState(133);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(130);
          match(ALFAParser::NEWLINE); 
        }
        setState(135);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
      }
      break;
    }

    case 2: {
      setState(158);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
      case 1: {
        setState(139);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ALFAParser::NEWLINE) {
          setState(136);
          match(ALFAParser::NEWLINE);
          setState(141);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case 2: {
        setState(142);
        match(ALFAParser::WORD);
        setState(146);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ALFAParser::NEWLINE) {
          setState(143);
          match(ALFAParser::NEWLINE);
          setState(148);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case 3: {
        setState(149);
        match(ALFAParser::WORD);
        setState(150);
        match(ALFAParser::ASSIGN);
        setState(151);
        match(ALFAParser::STRING);
        setState(155);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ALFAParser::NEWLINE) {
          setState(152);
          match(ALFAParser::NEWLINE);
          setState(157);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      }
      setState(160);
      match(ALFAParser::RIGHTCBRACKET);
      setState(171);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ALFAParser::T__16)
        | (1ULL << ALFAParser::NEWLINE)
        | (1ULL << ALFAParser::NAMESPACE)
        | (1ULL << ALFAParser::POLICYSET)
        | (1ULL << ALFAParser::POLICY)
        | (1ULL << ALFAParser::RULE)
        | (1ULL << ALFAParser::TARGET)
        | (1ULL << ALFAParser::ONPERMIT)
        | (1ULL << ALFAParser::ONDENY)
        | (1ULL << ALFAParser::CONDITION))) != 0)) {
        setState(169);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
        case 1: {
          setState(161);
          namespaceDefinition();
          break;
        }

        case 2: {
          setState(162);
          policysetDefinition();
          break;
        }

        case 3: {
          setState(163);
          policyDefinition();
          break;
        }

        case 4: {
          setState(164);
          ruleDefinition();
          break;
        }

        case 5: {
          setState(165);
          conditionDefinition();
          break;
        }

        case 6: {
          setState(166);
          targetDefinition();
          break;
        }

        case 7: {
          setState(167);
          combiningAlgorithm();
          break;
        }

        case 8: {
          setState(168);
          onBlock();
          break;
        }

        }
        setState(173);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(174);
      match(ALFAParser::LEFTCBRACKET);
      break;
    }

    }
    setState(180);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(177);
        match(ALFAParser::NEWLINE); 
      }
      setState(182);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PolicyDefinitionContext ------------------------------------------------------------------

ALFAParser::PolicyDefinitionContext::PolicyDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ALFAParser::PolicyDefinitionContext::POLICY() {
  return getToken(ALFAParser::POLICY, 0);
}

tree::TerminalNode* ALFAParser::PolicyDefinitionContext::WORD() {
  return getToken(ALFAParser::WORD, 0);
}

tree::TerminalNode* ALFAParser::PolicyDefinitionContext::RIGHTCBRACKET() {
  return getToken(ALFAParser::RIGHTCBRACKET, 0);
}

tree::TerminalNode* ALFAParser::PolicyDefinitionContext::LEFTCBRACKET() {
  return getToken(ALFAParser::LEFTCBRACKET, 0);
}

std::vector<tree::TerminalNode *> ALFAParser::PolicyDefinitionContext::NEWLINE() {
  return getTokens(ALFAParser::NEWLINE);
}

tree::TerminalNode* ALFAParser::PolicyDefinitionContext::NEWLINE(size_t i) {
  return getToken(ALFAParser::NEWLINE, i);
}

tree::TerminalNode* ALFAParser::PolicyDefinitionContext::ASSIGN() {
  return getToken(ALFAParser::ASSIGN, 0);
}

tree::TerminalNode* ALFAParser::PolicyDefinitionContext::STRING() {
  return getToken(ALFAParser::STRING, 0);
}

std::vector<ALFAParser::NamespaceDefinitionContext *> ALFAParser::PolicyDefinitionContext::namespaceDefinition() {
  return getRuleContexts<ALFAParser::NamespaceDefinitionContext>();
}

ALFAParser::NamespaceDefinitionContext* ALFAParser::PolicyDefinitionContext::namespaceDefinition(size_t i) {
  return getRuleContext<ALFAParser::NamespaceDefinitionContext>(i);
}

std::vector<ALFAParser::PolicyDefinitionContext *> ALFAParser::PolicyDefinitionContext::policyDefinition() {
  return getRuleContexts<ALFAParser::PolicyDefinitionContext>();
}

ALFAParser::PolicyDefinitionContext* ALFAParser::PolicyDefinitionContext::policyDefinition(size_t i) {
  return getRuleContext<ALFAParser::PolicyDefinitionContext>(i);
}

std::vector<ALFAParser::RuleDefinitionContext *> ALFAParser::PolicyDefinitionContext::ruleDefinition() {
  return getRuleContexts<ALFAParser::RuleDefinitionContext>();
}

ALFAParser::RuleDefinitionContext* ALFAParser::PolicyDefinitionContext::ruleDefinition(size_t i) {
  return getRuleContext<ALFAParser::RuleDefinitionContext>(i);
}

std::vector<ALFAParser::ConditionDefinitionContext *> ALFAParser::PolicyDefinitionContext::conditionDefinition() {
  return getRuleContexts<ALFAParser::ConditionDefinitionContext>();
}

ALFAParser::ConditionDefinitionContext* ALFAParser::PolicyDefinitionContext::conditionDefinition(size_t i) {
  return getRuleContext<ALFAParser::ConditionDefinitionContext>(i);
}

std::vector<ALFAParser::TargetDefinitionContext *> ALFAParser::PolicyDefinitionContext::targetDefinition() {
  return getRuleContexts<ALFAParser::TargetDefinitionContext>();
}

ALFAParser::TargetDefinitionContext* ALFAParser::PolicyDefinitionContext::targetDefinition(size_t i) {
  return getRuleContext<ALFAParser::TargetDefinitionContext>(i);
}

std::vector<ALFAParser::CombiningAlgorithmContext *> ALFAParser::PolicyDefinitionContext::combiningAlgorithm() {
  return getRuleContexts<ALFAParser::CombiningAlgorithmContext>();
}

ALFAParser::CombiningAlgorithmContext* ALFAParser::PolicyDefinitionContext::combiningAlgorithm(size_t i) {
  return getRuleContext<ALFAParser::CombiningAlgorithmContext>(i);
}

std::vector<ALFAParser::OnBlockContext *> ALFAParser::PolicyDefinitionContext::onBlock() {
  return getRuleContexts<ALFAParser::OnBlockContext>();
}

ALFAParser::OnBlockContext* ALFAParser::PolicyDefinitionContext::onBlock(size_t i) {
  return getRuleContext<ALFAParser::OnBlockContext>(i);
}


size_t ALFAParser::PolicyDefinitionContext::getRuleIndex() const {
  return ALFAParser::RulePolicyDefinition;
}

void ALFAParser::PolicyDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPolicyDefinition(this);
}

void ALFAParser::PolicyDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPolicyDefinition(this);
}


antlrcpp::Any ALFAParser::PolicyDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitPolicyDefinition(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::PolicyDefinitionContext* ALFAParser::policyDefinition() {
  PolicyDefinitionContext *_localctx = _tracker.createInstance<PolicyDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 8, ALFAParser::RulePolicyDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(186);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::NEWLINE) {
      setState(183);
      match(ALFAParser::NEWLINE);
      setState(188);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(189);
    match(ALFAParser::POLICY);
    setState(235);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      setState(190);
      match(ALFAParser::WORD);
      setState(194);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(191);
          match(ALFAParser::NEWLINE); 
        }
        setState(196);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
      }
      break;
    }

    case 2: {
      setState(219);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
      case 1: {
        setState(200);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ALFAParser::NEWLINE) {
          setState(197);
          match(ALFAParser::NEWLINE);
          setState(202);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case 2: {
        setState(203);
        match(ALFAParser::WORD);
        setState(207);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ALFAParser::NEWLINE) {
          setState(204);
          match(ALFAParser::NEWLINE);
          setState(209);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case 3: {
        setState(210);
        match(ALFAParser::WORD);
        setState(211);
        match(ALFAParser::ASSIGN);
        setState(212);
        match(ALFAParser::STRING);
        setState(216);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ALFAParser::NEWLINE) {
          setState(213);
          match(ALFAParser::NEWLINE);
          setState(218);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      }
      setState(221);
      match(ALFAParser::RIGHTCBRACKET);
      setState(231);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ALFAParser::T__16)
        | (1ULL << ALFAParser::NEWLINE)
        | (1ULL << ALFAParser::NAMESPACE)
        | (1ULL << ALFAParser::POLICY)
        | (1ULL << ALFAParser::RULE)
        | (1ULL << ALFAParser::TARGET)
        | (1ULL << ALFAParser::ONPERMIT)
        | (1ULL << ALFAParser::ONDENY)
        | (1ULL << ALFAParser::CONDITION))) != 0)) {
        setState(229);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
        case 1: {
          setState(222);
          namespaceDefinition();
          break;
        }

        case 2: {
          setState(223);
          policyDefinition();
          break;
        }

        case 3: {
          setState(224);
          ruleDefinition();
          break;
        }

        case 4: {
          setState(225);
          conditionDefinition();
          break;
        }

        case 5: {
          setState(226);
          targetDefinition();
          break;
        }

        case 6: {
          setState(227);
          combiningAlgorithm();
          break;
        }

        case 7: {
          setState(228);
          onBlock();
          break;
        }

        }
        setState(233);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(234);
      match(ALFAParser::LEFTCBRACKET);
      break;
    }

    }
    setState(240);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(237);
        match(ALFAParser::NEWLINE); 
      }
      setState(242);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RuleDefinitionContext ------------------------------------------------------------------

ALFAParser::RuleDefinitionContext::RuleDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ALFAParser::RuleDefinitionContext::RULE() {
  return getToken(ALFAParser::RULE, 0);
}

tree::TerminalNode* ALFAParser::RuleDefinitionContext::WORD() {
  return getToken(ALFAParser::WORD, 0);
}

tree::TerminalNode* ALFAParser::RuleDefinitionContext::RIGHTCBRACKET() {
  return getToken(ALFAParser::RIGHTCBRACKET, 0);
}

tree::TerminalNode* ALFAParser::RuleDefinitionContext::LEFTCBRACKET() {
  return getToken(ALFAParser::LEFTCBRACKET, 0);
}

std::vector<tree::TerminalNode *> ALFAParser::RuleDefinitionContext::NEWLINE() {
  return getTokens(ALFAParser::NEWLINE);
}

tree::TerminalNode* ALFAParser::RuleDefinitionContext::NEWLINE(size_t i) {
  return getToken(ALFAParser::NEWLINE, i);
}

tree::TerminalNode* ALFAParser::RuleDefinitionContext::ASSIGN() {
  return getToken(ALFAParser::ASSIGN, 0);
}

tree::TerminalNode* ALFAParser::RuleDefinitionContext::STRING() {
  return getToken(ALFAParser::STRING, 0);
}

std::vector<ALFAParser::RuleDefinitionContext *> ALFAParser::RuleDefinitionContext::ruleDefinition() {
  return getRuleContexts<ALFAParser::RuleDefinitionContext>();
}

ALFAParser::RuleDefinitionContext* ALFAParser::RuleDefinitionContext::ruleDefinition(size_t i) {
  return getRuleContext<ALFAParser::RuleDefinitionContext>(i);
}

std::vector<ALFAParser::ConditionDefinitionContext *> ALFAParser::RuleDefinitionContext::conditionDefinition() {
  return getRuleContexts<ALFAParser::ConditionDefinitionContext>();
}

ALFAParser::ConditionDefinitionContext* ALFAParser::RuleDefinitionContext::conditionDefinition(size_t i) {
  return getRuleContext<ALFAParser::ConditionDefinitionContext>(i);
}

std::vector<ALFAParser::TargetDefinitionContext *> ALFAParser::RuleDefinitionContext::targetDefinition() {
  return getRuleContexts<ALFAParser::TargetDefinitionContext>();
}

ALFAParser::TargetDefinitionContext* ALFAParser::RuleDefinitionContext::targetDefinition(size_t i) {
  return getRuleContext<ALFAParser::TargetDefinitionContext>(i);
}

std::vector<ALFAParser::PermitdenyContext *> ALFAParser::RuleDefinitionContext::permitdeny() {
  return getRuleContexts<ALFAParser::PermitdenyContext>();
}

ALFAParser::PermitdenyContext* ALFAParser::RuleDefinitionContext::permitdeny(size_t i) {
  return getRuleContext<ALFAParser::PermitdenyContext>(i);
}

std::vector<ALFAParser::OnBlockContext *> ALFAParser::RuleDefinitionContext::onBlock() {
  return getRuleContexts<ALFAParser::OnBlockContext>();
}

ALFAParser::OnBlockContext* ALFAParser::RuleDefinitionContext::onBlock(size_t i) {
  return getRuleContext<ALFAParser::OnBlockContext>(i);
}


size_t ALFAParser::RuleDefinitionContext::getRuleIndex() const {
  return ALFAParser::RuleRuleDefinition;
}

void ALFAParser::RuleDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRuleDefinition(this);
}

void ALFAParser::RuleDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRuleDefinition(this);
}


antlrcpp::Any ALFAParser::RuleDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitRuleDefinition(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::RuleDefinitionContext* ALFAParser::ruleDefinition() {
  RuleDefinitionContext *_localctx = _tracker.createInstance<RuleDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 10, ALFAParser::RuleRuleDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(246);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::NEWLINE) {
      setState(243);
      match(ALFAParser::NEWLINE);
      setState(248);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(249);
    match(ALFAParser::RULE);
    setState(293);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      setState(250);
      match(ALFAParser::WORD);
      setState(254);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(251);
          match(ALFAParser::NEWLINE); 
        }
        setState(256);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
      }
      break;
    }

    case 2: {
      setState(279);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
      case 1: {
        setState(260);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ALFAParser::NEWLINE) {
          setState(257);
          match(ALFAParser::NEWLINE);
          setState(262);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case 2: {
        setState(263);
        match(ALFAParser::WORD);
        setState(267);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ALFAParser::NEWLINE) {
          setState(264);
          match(ALFAParser::NEWLINE);
          setState(269);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case 3: {
        setState(270);
        match(ALFAParser::WORD);
        setState(271);
        match(ALFAParser::ASSIGN);
        setState(272);
        match(ALFAParser::STRING);
        setState(276);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ALFAParser::NEWLINE) {
          setState(273);
          match(ALFAParser::NEWLINE);
          setState(278);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      }
      setState(281);
      match(ALFAParser::RIGHTCBRACKET);
      setState(289);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ALFAParser::NEWLINE)
        | (1ULL << ALFAParser::RULE)
        | (1ULL << ALFAParser::PERMIT)
        | (1ULL << ALFAParser::DENY)
        | (1ULL << ALFAParser::TARGET)
        | (1ULL << ALFAParser::ONPERMIT)
        | (1ULL << ALFAParser::ONDENY)
        | (1ULL << ALFAParser::CONDITION))) != 0)) {
        setState(287);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
        case 1: {
          setState(282);
          ruleDefinition();
          break;
        }

        case 2: {
          setState(283);
          conditionDefinition();
          break;
        }

        case 3: {
          setState(284);
          targetDefinition();
          break;
        }

        case 4: {
          setState(285);
          permitdeny();
          break;
        }

        case 5: {
          setState(286);
          onBlock();
          break;
        }

        }
        setState(291);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(292);
      match(ALFAParser::LEFTCBRACKET);
      break;
    }

    }
    setState(298);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(295);
        match(ALFAParser::NEWLINE); 
      }
      setState(300);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OnBlockContext ------------------------------------------------------------------

ALFAParser::OnBlockContext::OnBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ALFAParser::OnPermitBlockContext* ALFAParser::OnBlockContext::onPermitBlock() {
  return getRuleContext<ALFAParser::OnPermitBlockContext>(0);
}

ALFAParser::OnDenyBlockContext* ALFAParser::OnBlockContext::onDenyBlock() {
  return getRuleContext<ALFAParser::OnDenyBlockContext>(0);
}

std::vector<tree::TerminalNode *> ALFAParser::OnBlockContext::NEWLINE() {
  return getTokens(ALFAParser::NEWLINE);
}

tree::TerminalNode* ALFAParser::OnBlockContext::NEWLINE(size_t i) {
  return getToken(ALFAParser::NEWLINE, i);
}


size_t ALFAParser::OnBlockContext::getRuleIndex() const {
  return ALFAParser::RuleOnBlock;
}

void ALFAParser::OnBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOnBlock(this);
}

void ALFAParser::OnBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOnBlock(this);
}


antlrcpp::Any ALFAParser::OnBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitOnBlock(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::OnBlockContext* ALFAParser::onBlock() {
  OnBlockContext *_localctx = _tracker.createInstance<OnBlockContext>(_ctx, getState());
  enterRule(_localctx, 12, ALFAParser::RuleOnBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(304);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(301);
        match(ALFAParser::NEWLINE); 
      }
      setState(306);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    }
    setState(309);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(307);
      onPermitBlock();
      break;
    }

    case 2: {
      setState(308);
      onDenyBlock();
      break;
    }

    }
    setState(314);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(311);
        match(ALFAParser::NEWLINE); 
      }
      setState(316);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OnPermitBlockContext ------------------------------------------------------------------

ALFAParser::OnPermitBlockContext::OnPermitBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ALFAParser::OnPermitBlockContext::ONPERMIT() {
  return getToken(ALFAParser::ONPERMIT, 0);
}

tree::TerminalNode* ALFAParser::OnPermitBlockContext::RIGHTCBRACKET() {
  return getToken(ALFAParser::RIGHTCBRACKET, 0);
}

tree::TerminalNode* ALFAParser::OnPermitBlockContext::LEFTCBRACKET() {
  return getToken(ALFAParser::LEFTCBRACKET, 0);
}

std::vector<tree::TerminalNode *> ALFAParser::OnPermitBlockContext::NEWLINE() {
  return getTokens(ALFAParser::NEWLINE);
}

tree::TerminalNode* ALFAParser::OnPermitBlockContext::NEWLINE(size_t i) {
  return getToken(ALFAParser::NEWLINE, i);
}

std::vector<ALFAParser::ObligationDefinitionContext *> ALFAParser::OnPermitBlockContext::obligationDefinition() {
  return getRuleContexts<ALFAParser::ObligationDefinitionContext>();
}

ALFAParser::ObligationDefinitionContext* ALFAParser::OnPermitBlockContext::obligationDefinition(size_t i) {
  return getRuleContext<ALFAParser::ObligationDefinitionContext>(i);
}


size_t ALFAParser::OnPermitBlockContext::getRuleIndex() const {
  return ALFAParser::RuleOnPermitBlock;
}

void ALFAParser::OnPermitBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOnPermitBlock(this);
}

void ALFAParser::OnPermitBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOnPermitBlock(this);
}


antlrcpp::Any ALFAParser::OnPermitBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitOnPermitBlock(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::OnPermitBlockContext* ALFAParser::onPermitBlock() {
  OnPermitBlockContext *_localctx = _tracker.createInstance<OnPermitBlockContext>(_ctx, getState());
  enterRule(_localctx, 14, ALFAParser::RuleOnPermitBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(320);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::NEWLINE) {
      setState(317);
      match(ALFAParser::NEWLINE);
      setState(322);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(323);
    match(ALFAParser::ONPERMIT);
    setState(327);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::NEWLINE) {
      setState(324);
      match(ALFAParser::NEWLINE);
      setState(329);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(330);
    match(ALFAParser::RIGHTCBRACKET);
    setState(334);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(331);
        match(ALFAParser::NEWLINE); 
      }
      setState(336);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    }
    setState(340);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(337);
        obligationDefinition(); 
      }
      setState(342);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    }
    setState(346);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::NEWLINE) {
      setState(343);
      match(ALFAParser::NEWLINE);
      setState(348);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(349);
    match(ALFAParser::LEFTCBRACKET);
    setState(353);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(350);
        match(ALFAParser::NEWLINE); 
      }
      setState(355);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OnDenyBlockContext ------------------------------------------------------------------

ALFAParser::OnDenyBlockContext::OnDenyBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ALFAParser::OnDenyBlockContext::ONDENY() {
  return getToken(ALFAParser::ONDENY, 0);
}

tree::TerminalNode* ALFAParser::OnDenyBlockContext::RIGHTCBRACKET() {
  return getToken(ALFAParser::RIGHTCBRACKET, 0);
}

tree::TerminalNode* ALFAParser::OnDenyBlockContext::LEFTCBRACKET() {
  return getToken(ALFAParser::LEFTCBRACKET, 0);
}

std::vector<tree::TerminalNode *> ALFAParser::OnDenyBlockContext::NEWLINE() {
  return getTokens(ALFAParser::NEWLINE);
}

tree::TerminalNode* ALFAParser::OnDenyBlockContext::NEWLINE(size_t i) {
  return getToken(ALFAParser::NEWLINE, i);
}

std::vector<ALFAParser::AdviceDefinitionContext *> ALFAParser::OnDenyBlockContext::adviceDefinition() {
  return getRuleContexts<ALFAParser::AdviceDefinitionContext>();
}

ALFAParser::AdviceDefinitionContext* ALFAParser::OnDenyBlockContext::adviceDefinition(size_t i) {
  return getRuleContext<ALFAParser::AdviceDefinitionContext>(i);
}


size_t ALFAParser::OnDenyBlockContext::getRuleIndex() const {
  return ALFAParser::RuleOnDenyBlock;
}

void ALFAParser::OnDenyBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOnDenyBlock(this);
}

void ALFAParser::OnDenyBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOnDenyBlock(this);
}


antlrcpp::Any ALFAParser::OnDenyBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitOnDenyBlock(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::OnDenyBlockContext* ALFAParser::onDenyBlock() {
  OnDenyBlockContext *_localctx = _tracker.createInstance<OnDenyBlockContext>(_ctx, getState());
  enterRule(_localctx, 16, ALFAParser::RuleOnDenyBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(359);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::NEWLINE) {
      setState(356);
      match(ALFAParser::NEWLINE);
      setState(361);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(362);
    match(ALFAParser::ONDENY);
    setState(366);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::NEWLINE) {
      setState(363);
      match(ALFAParser::NEWLINE);
      setState(368);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(369);
    match(ALFAParser::RIGHTCBRACKET);
    setState(373);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(370);
        match(ALFAParser::NEWLINE); 
      }
      setState(375);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    }
    setState(379);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(376);
        adviceDefinition(); 
      }
      setState(381);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    }
    setState(385);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::NEWLINE) {
      setState(382);
      match(ALFAParser::NEWLINE);
      setState(387);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(388);
    match(ALFAParser::LEFTCBRACKET);
    setState(392);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(389);
        match(ALFAParser::NEWLINE); 
      }
      setState(394);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TargetDefinitionContext ------------------------------------------------------------------

ALFAParser::TargetDefinitionContext::TargetDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ALFAParser::TargetDefinitionContext::TARGET() {
  return getToken(ALFAParser::TARGET, 0);
}

ALFAParser::ClauseDefinitionContext* ALFAParser::TargetDefinitionContext::clauseDefinition() {
  return getRuleContext<ALFAParser::ClauseDefinitionContext>(0);
}

std::vector<tree::TerminalNode *> ALFAParser::TargetDefinitionContext::NEWLINE() {
  return getTokens(ALFAParser::NEWLINE);
}

tree::TerminalNode* ALFAParser::TargetDefinitionContext::NEWLINE(size_t i) {
  return getToken(ALFAParser::NEWLINE, i);
}


size_t ALFAParser::TargetDefinitionContext::getRuleIndex() const {
  return ALFAParser::RuleTargetDefinition;
}

void ALFAParser::TargetDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTargetDefinition(this);
}

void ALFAParser::TargetDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTargetDefinition(this);
}


antlrcpp::Any ALFAParser::TargetDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitTargetDefinition(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::TargetDefinitionContext* ALFAParser::targetDefinition() {
  TargetDefinitionContext *_localctx = _tracker.createInstance<TargetDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 18, ALFAParser::RuleTargetDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(398);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::NEWLINE) {
      setState(395);
      match(ALFAParser::NEWLINE);
      setState(400);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(401);
    match(ALFAParser::TARGET);
    setState(402);
    clauseDefinition();
    setState(406);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(403);
        match(ALFAParser::NEWLINE); 
      }
      setState(408);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClauseDefinitionContext ------------------------------------------------------------------

ALFAParser::ClauseDefinitionContext::ClauseDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ALFAParser::ClauseDefinitionContext::CLAUSE() {
  return getToken(ALFAParser::CLAUSE, 0);
}

std::vector<ALFAParser::BooleenExpressionContext *> ALFAParser::ClauseDefinitionContext::booleenExpression() {
  return getRuleContexts<ALFAParser::BooleenExpressionContext>();
}

ALFAParser::BooleenExpressionContext* ALFAParser::ClauseDefinitionContext::booleenExpression(size_t i) {
  return getRuleContext<ALFAParser::BooleenExpressionContext>(i);
}

std::vector<ALFAParser::ClauseDefinitionContext *> ALFAParser::ClauseDefinitionContext::clauseDefinition() {
  return getRuleContexts<ALFAParser::ClauseDefinitionContext>();
}

ALFAParser::ClauseDefinitionContext* ALFAParser::ClauseDefinitionContext::clauseDefinition(size_t i) {
  return getRuleContext<ALFAParser::ClauseDefinitionContext>(i);
}


size_t ALFAParser::ClauseDefinitionContext::getRuleIndex() const {
  return ALFAParser::RuleClauseDefinition;
}

void ALFAParser::ClauseDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClauseDefinition(this);
}

void ALFAParser::ClauseDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClauseDefinition(this);
}


antlrcpp::Any ALFAParser::ClauseDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitClauseDefinition(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::ClauseDefinitionContext* ALFAParser::clauseDefinition() {
  ClauseDefinitionContext *_localctx = _tracker.createInstance<ClauseDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 20, ALFAParser::RuleClauseDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(409);
    match(ALFAParser::CLAUSE);
    setState(411); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(410);
              booleenExpression();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(413); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(418);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(415);
        clauseDefinition(); 
      }
      setState(420);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleenExpressionContext ------------------------------------------------------------------

ALFAParser::BooleenExpressionContext::BooleenExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ALFAParser::BooleenExpressionContext::TARGETRESSOURCE() {
  return getToken(ALFAParser::TARGETRESSOURCE, 0);
}

tree::TerminalNode* ALFAParser::BooleenExpressionContext::COMPARE() {
  return getToken(ALFAParser::COMPARE, 0);
}

tree::TerminalNode* ALFAParser::BooleenExpressionContext::VALUE() {
  return getToken(ALFAParser::VALUE, 0);
}

std::vector<tree::TerminalNode *> ALFAParser::BooleenExpressionContext::NOT() {
  return getTokens(ALFAParser::NOT);
}

tree::TerminalNode* ALFAParser::BooleenExpressionContext::NOT(size_t i) {
  return getToken(ALFAParser::NOT, i);
}

std::vector<tree::TerminalNode *> ALFAParser::BooleenExpressionContext::NEWLINE() {
  return getTokens(ALFAParser::NEWLINE);
}

tree::TerminalNode* ALFAParser::BooleenExpressionContext::NEWLINE(size_t i) {
  return getToken(ALFAParser::NEWLINE, i);
}

std::vector<ALFAParser::BooleenExpressionContext *> ALFAParser::BooleenExpressionContext::booleenExpression() {
  return getRuleContexts<ALFAParser::BooleenExpressionContext>();
}

ALFAParser::BooleenExpressionContext* ALFAParser::BooleenExpressionContext::booleenExpression(size_t i) {
  return getRuleContext<ALFAParser::BooleenExpressionContext>(i);
}

tree::TerminalNode* ALFAParser::BooleenExpressionContext::BAGFUNCTION() {
  return getToken(ALFAParser::BAGFUNCTION, 0);
}


size_t ALFAParser::BooleenExpressionContext::getRuleIndex() const {
  return ALFAParser::RuleBooleenExpression;
}

void ALFAParser::BooleenExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleenExpression(this);
}

void ALFAParser::BooleenExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleenExpression(this);
}


antlrcpp::Any ALFAParser::BooleenExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitBooleenExpression(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::BooleenExpressionContext* ALFAParser::booleenExpression() {
  BooleenExpressionContext *_localctx = _tracker.createInstance<BooleenExpressionContext>(_ctx, getState());
  enterRule(_localctx, 22, ALFAParser::RuleBooleenExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(496);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(424);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ALFAParser::NOT) {
        setState(421);
        match(ALFAParser::NOT);
        setState(426);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(430);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ALFAParser::RIGHTPAREN) {
        setState(427);
        match(ALFAParser::RIGHTPAREN);
        setState(432);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(433);
      match(ALFAParser::TARGETRESSOURCE);
      setState(434);
      match(ALFAParser::COMPARE);
      setState(435);
      match(ALFAParser::VALUE);
      setState(439);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(436);
          match(ALFAParser::LEFTPAREN); 
        }
        setState(441);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
      }
      setState(445);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(442);
          match(ALFAParser::NEWLINE); 
        }
        setState(447);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
      }
      setState(454);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(452);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case ALFAParser::T__0: {
              setState(448);
              match(ALFAParser::T__0);
              setState(449);
              booleenExpression();
              break;
            }

            case ALFAParser::T__1: {
              setState(450);
              match(ALFAParser::T__1);
              setState(451);
              booleenExpression();
              break;
            }

          default:
            throw NoViableAltException(this);
          } 
        }
        setState(456);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(460);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ALFAParser::NOT) {
        setState(457);
        match(ALFAParser::NOT);
        setState(462);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(466);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ALFAParser::RIGHTPAREN) {
        setState(463);
        match(ALFAParser::RIGHTPAREN);
        setState(468);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(469);
      match(ALFAParser::BAGFUNCTION);
      setState(470);
      match(ALFAParser::RIGHTPAREN);
      setState(471);
      match(ALFAParser::TARGETRESSOURCE);
      setState(472);
      match(ALFAParser::LEFTPAREN);
      setState(473);
      match(ALFAParser::COMPARE);
      setState(474);
      match(ALFAParser::VALUE);
      setState(478);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(475);
          match(ALFAParser::LEFTPAREN); 
        }
        setState(480);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
      }
      setState(484);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(481);
          match(ALFAParser::NEWLINE); 
        }
        setState(486);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
      }
      setState(493);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(491);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case ALFAParser::T__0: {
              setState(487);
              match(ALFAParser::T__0);
              setState(488);
              booleenExpression();
              break;
            }

            case ALFAParser::T__1: {
              setState(489);
              match(ALFAParser::T__1);
              setState(490);
              booleenExpression();
              break;
            }

          default:
            throw NoViableAltException(this);
          } 
        }
        setState(495);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionDefinitionContext ------------------------------------------------------------------

ALFAParser::ConditionDefinitionContext::ConditionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ALFAParser::ConditionDefinitionContext::CONDITION() {
  return getToken(ALFAParser::CONDITION, 0);
}

std::vector<tree::TerminalNode *> ALFAParser::ConditionDefinitionContext::NEWLINE() {
  return getTokens(ALFAParser::NEWLINE);
}

tree::TerminalNode* ALFAParser::ConditionDefinitionContext::NEWLINE(size_t i) {
  return getToken(ALFAParser::NEWLINE, i);
}

std::vector<ALFAParser::ConditionContext *> ALFAParser::ConditionDefinitionContext::condition() {
  return getRuleContexts<ALFAParser::ConditionContext>();
}

ALFAParser::ConditionContext* ALFAParser::ConditionDefinitionContext::condition(size_t i) {
  return getRuleContext<ALFAParser::ConditionContext>(i);
}


size_t ALFAParser::ConditionDefinitionContext::getRuleIndex() const {
  return ALFAParser::RuleConditionDefinition;
}

void ALFAParser::ConditionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionDefinition(this);
}

void ALFAParser::ConditionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionDefinition(this);
}


antlrcpp::Any ALFAParser::ConditionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitConditionDefinition(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::ConditionDefinitionContext* ALFAParser::conditionDefinition() {
  ConditionDefinitionContext *_localctx = _tracker.createInstance<ConditionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 24, ALFAParser::RuleConditionDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(501);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::NEWLINE) {
      setState(498);
      match(ALFAParser::NEWLINE);
      setState(503);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(504);
    match(ALFAParser::CONDITION);
    setState(508);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(505);
        condition(); 
      }
      setState(510);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx);
    }
    setState(514);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(511);
        match(ALFAParser::NEWLINE); 
      }
      setState(516);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

ALFAParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ALFAParser::ConditionContext::FUNCTION() {
  return getToken(ALFAParser::FUNCTION, 0);
}

ALFAParser::FunctionNameContext* ALFAParser::ConditionContext::functionName() {
  return getRuleContext<ALFAParser::FunctionNameContext>(0);
}

tree::TerminalNode* ALFAParser::ConditionContext::VALUE() {
  return getToken(ALFAParser::VALUE, 0);
}

tree::TerminalNode* ALFAParser::ConditionContext::TARGETRESSOURCE() {
  return getToken(ALFAParser::TARGETRESSOURCE, 0);
}

std::vector<tree::TerminalNode *> ALFAParser::ConditionContext::NEWLINE() {
  return getTokens(ALFAParser::NEWLINE);
}

tree::TerminalNode* ALFAParser::ConditionContext::NEWLINE(size_t i) {
  return getToken(ALFAParser::NEWLINE, i);
}

std::vector<tree::TerminalNode *> ALFAParser::ConditionContext::NOT() {
  return getTokens(ALFAParser::NOT);
}

tree::TerminalNode* ALFAParser::ConditionContext::NOT(size_t i) {
  return getToken(ALFAParser::NOT, i);
}

std::vector<ALFAParser::FunctionTypeContext *> ALFAParser::ConditionContext::functionType() {
  return getRuleContexts<ALFAParser::FunctionTypeContext>();
}

ALFAParser::FunctionTypeContext* ALFAParser::ConditionContext::functionType(size_t i) {
  return getRuleContext<ALFAParser::FunctionTypeContext>(i);
}

std::vector<tree::TerminalNode *> ALFAParser::ConditionContext::AND() {
  return getTokens(ALFAParser::AND);
}

tree::TerminalNode* ALFAParser::ConditionContext::AND(size_t i) {
  return getToken(ALFAParser::AND, i);
}

std::vector<tree::TerminalNode *> ALFAParser::ConditionContext::OR() {
  return getTokens(ALFAParser::OR);
}

tree::TerminalNode* ALFAParser::ConditionContext::OR(size_t i) {
  return getToken(ALFAParser::OR, i);
}

std::vector<ALFAParser::BooleenExpressionContext *> ALFAParser::ConditionContext::booleenExpression() {
  return getRuleContexts<ALFAParser::BooleenExpressionContext>();
}

ALFAParser::BooleenExpressionContext* ALFAParser::ConditionContext::booleenExpression(size_t i) {
  return getRuleContext<ALFAParser::BooleenExpressionContext>(i);
}

std::vector<ALFAParser::ConditionContext *> ALFAParser::ConditionContext::condition() {
  return getRuleContexts<ALFAParser::ConditionContext>();
}

ALFAParser::ConditionContext* ALFAParser::ConditionContext::condition(size_t i) {
  return getRuleContext<ALFAParser::ConditionContext>(i);
}


size_t ALFAParser::ConditionContext::getRuleIndex() const {
  return ALFAParser::RuleCondition;
}

void ALFAParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void ALFAParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}


antlrcpp::Any ALFAParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::ConditionContext* ALFAParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 26, ALFAParser::RuleCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(631);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(520);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ALFAParser::NEWLINE) {
        setState(517);
        match(ALFAParser::NEWLINE);
        setState(522);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(526);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ALFAParser::NOT) {
        setState(523);
        match(ALFAParser::NOT);
        setState(528);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(532);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(529);
          match(ALFAParser::RIGHTPAREN); 
        }
        setState(534);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx);
      }
      setState(538);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ALFAParser::T__5)
        | (1ULL << ALFAParser::T__6)
        | (1ULL << ALFAParser::T__7)
        | (1ULL << ALFAParser::T__8)
        | (1ULL << ALFAParser::T__9)
        | (1ULL << ALFAParser::T__10))) != 0)) {
        setState(535);
        functionType();
        setState(540);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(544);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ALFAParser::RIGHTPAREN) {
        setState(541);
        match(ALFAParser::RIGHTPAREN);
        setState(546);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(547);
      match(ALFAParser::FUNCTION);
      setState(548);
      match(ALFAParser::T__2);
      setState(549);
      functionName();
      setState(550);
      match(ALFAParser::T__3);
      setState(551);
      match(ALFAParser::T__4);
      setState(552);
      match(ALFAParser::VALUE);
      setState(553);
      match(ALFAParser::T__4);
      setState(554);
      match(ALFAParser::TARGETRESSOURCE);
      setState(558);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(555);
          match(ALFAParser::LEFTPAREN); 
        }
        setState(560);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx);
      }
      setState(568);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(561);
          _la = _input->LA(1);
          if (!(_la == ALFAParser::AND

          || _la == ALFAParser::OR)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(564);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
          case 1: {
            setState(562);
            booleenExpression();
            break;
          }

          case 2: {
            setState(563);
            condition();
            break;
          }

          } 
        }
        setState(570);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx);
      }
      setState(574);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(571);
          match(ALFAParser::LEFTPAREN); 
        }
        setState(576);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(580);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(577);
          match(ALFAParser::NOT); 
        }
        setState(582);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx);
      }
      setState(586);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(583);
          match(ALFAParser::RIGHTPAREN); 
        }
        setState(588);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx);
      }
      setState(589);
      booleenExpression();
      setState(600);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(590);
          _la = _input->LA(1);
          if (!(_la == ALFAParser::AND

          || _la == ALFAParser::OR)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(595);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(593);
              _errHandler->sync(this);
              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
              case 1: {
                setState(591);
                booleenExpression();
                break;
              }

              case 2: {
                setState(592);
                condition();
                break;
              }

              } 
            }
            setState(597);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx);
          } 
        }
        setState(602);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx);
      }
      setState(606);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(603);
          match(ALFAParser::LEFTPAREN); 
        }
        setState(608);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(612);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ALFAParser::NOT) {
        setState(609);
        match(ALFAParser::NOT);
        setState(614);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(618);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ALFAParser::RIGHTPAREN) {
        setState(615);
        match(ALFAParser::RIGHTPAREN);
        setState(620);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(621);
      functionName();
      setState(622);
      match(ALFAParser::RIGHTPAREN);
      setState(623);
      match(ALFAParser::TARGETRESSOURCE);
      setState(624);
      match(ALFAParser::LEFTPAREN);
      setState(628);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(625);
          match(ALFAParser::LEFTPAREN); 
        }
        setState(630);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionTypeContext ------------------------------------------------------------------

ALFAParser::FunctionTypeContext::FunctionTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ALFAParser::FunctionTypeContext::getRuleIndex() const {
  return ALFAParser::RuleFunctionType;
}

void ALFAParser::FunctionTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionType(this);
}

void ALFAParser::FunctionTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionType(this);
}


antlrcpp::Any ALFAParser::FunctionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitFunctionType(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::FunctionTypeContext* ALFAParser::functionType() {
  FunctionTypeContext *_localctx = _tracker.createInstance<FunctionTypeContext>(_ctx, getState());
  enterRule(_localctx, 28, ALFAParser::RuleFunctionType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(633);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ALFAParser::T__5)
      | (1ULL << ALFAParser::T__6)
      | (1ULL << ALFAParser::T__7)
      | (1ULL << ALFAParser::T__8)
      | (1ULL << ALFAParser::T__9)
      | (1ULL << ALFAParser::T__10))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionNameContext ------------------------------------------------------------------

ALFAParser::FunctionNameContext::FunctionNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ALFAParser::FunctionNameContext::getRuleIndex() const {
  return ALFAParser::RuleFunctionName;
}

void ALFAParser::FunctionNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionName(this);
}

void ALFAParser::FunctionNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionName(this);
}


antlrcpp::Any ALFAParser::FunctionNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitFunctionName(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::FunctionNameContext* ALFAParser::functionName() {
  FunctionNameContext *_localctx = _tracker.createInstance<FunctionNameContext>(_ctx, getState());
  enterRule(_localctx, 30, ALFAParser::RuleFunctionName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(635);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ALFAParser::T__11)
      | (1ULL << ALFAParser::T__12)
      | (1ULL << ALFAParser::T__13)
      | (1ULL << ALFAParser::T__14))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportDefinitionContext ------------------------------------------------------------------

ALFAParser::ImportDefinitionContext::ImportDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ALFAParser::ImportDefinitionContext::TARGETRESSOURCE() {
  return getToken(ALFAParser::TARGETRESSOURCE, 0);
}

std::vector<tree::TerminalNode *> ALFAParser::ImportDefinitionContext::NEWLINE() {
  return getTokens(ALFAParser::NEWLINE);
}

tree::TerminalNode* ALFAParser::ImportDefinitionContext::NEWLINE(size_t i) {
  return getToken(ALFAParser::NEWLINE, i);
}


size_t ALFAParser::ImportDefinitionContext::getRuleIndex() const {
  return ALFAParser::RuleImportDefinition;
}

void ALFAParser::ImportDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportDefinition(this);
}

void ALFAParser::ImportDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportDefinition(this);
}


antlrcpp::Any ALFAParser::ImportDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitImportDefinition(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::ImportDefinitionContext* ALFAParser::importDefinition() {
  ImportDefinitionContext *_localctx = _tracker.createInstance<ImportDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 32, ALFAParser::RuleImportDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(640);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::NEWLINE) {
      setState(637);
      match(ALFAParser::NEWLINE);
      setState(642);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(643);
    match(ALFAParser::T__15);
    setState(644);
    match(ALFAParser::TARGETRESSOURCE);
    setState(648);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(645);
        match(ALFAParser::NEWLINE); 
      }
      setState(650);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PermitdenyContext ------------------------------------------------------------------

ALFAParser::PermitdenyContext::PermitdenyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ALFAParser::PermitdenyContext::PERMIT() {
  return getToken(ALFAParser::PERMIT, 0);
}

tree::TerminalNode* ALFAParser::PermitdenyContext::DENY() {
  return getToken(ALFAParser::DENY, 0);
}

std::vector<tree::TerminalNode *> ALFAParser::PermitdenyContext::NEWLINE() {
  return getTokens(ALFAParser::NEWLINE);
}

tree::TerminalNode* ALFAParser::PermitdenyContext::NEWLINE(size_t i) {
  return getToken(ALFAParser::NEWLINE, i);
}


size_t ALFAParser::PermitdenyContext::getRuleIndex() const {
  return ALFAParser::RulePermitdeny;
}

void ALFAParser::PermitdenyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPermitdeny(this);
}

void ALFAParser::PermitdenyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPermitdeny(this);
}


antlrcpp::Any ALFAParser::PermitdenyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitPermitdeny(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::PermitdenyContext* ALFAParser::permitdeny() {
  PermitdenyContext *_localctx = _tracker.createInstance<PermitdenyContext>(_ctx, getState());
  enterRule(_localctx, 34, ALFAParser::RulePermitdeny);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(654);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::NEWLINE) {
      setState(651);
      match(ALFAParser::NEWLINE);
      setState(656);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(657);
    _la = _input->LA(1);
    if (!(_la == ALFAParser::PERMIT

    || _la == ALFAParser::DENY)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(661);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(658);
        match(ALFAParser::NEWLINE); 
      }
      setState(663);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CombiningAlgorithmContext ------------------------------------------------------------------

ALFAParser::CombiningAlgorithmContext::CombiningAlgorithmContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ALFAParser::CombiningAlgorithmContext::NEWLINE() {
  return getTokens(ALFAParser::NEWLINE);
}

tree::TerminalNode* ALFAParser::CombiningAlgorithmContext::NEWLINE(size_t i) {
  return getToken(ALFAParser::NEWLINE, i);
}


size_t ALFAParser::CombiningAlgorithmContext::getRuleIndex() const {
  return ALFAParser::RuleCombiningAlgorithm;
}

void ALFAParser::CombiningAlgorithmContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCombiningAlgorithm(this);
}

void ALFAParser::CombiningAlgorithmContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCombiningAlgorithm(this);
}


antlrcpp::Any ALFAParser::CombiningAlgorithmContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitCombiningAlgorithm(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::CombiningAlgorithmContext* ALFAParser::combiningAlgorithm() {
  CombiningAlgorithmContext *_localctx = _tracker.createInstance<CombiningAlgorithmContext>(_ctx, getState());
  enterRule(_localctx, 36, ALFAParser::RuleCombiningAlgorithm);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(667);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::NEWLINE) {
      setState(664);
      match(ALFAParser::NEWLINE);
      setState(669);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(670);
    match(ALFAParser::T__16);
    setState(671);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ALFAParser::T__17)
      | (1ULL << ALFAParser::T__18)
      | (1ULL << ALFAParser::T__19)
      | (1ULL << ALFAParser::T__20)
      | (1ULL << ALFAParser::T__21)
      | (1ULL << ALFAParser::T__22)
      | (1ULL << ALFAParser::T__23)
      | (1ULL << ALFAParser::T__24)
      | (1ULL << ALFAParser::T__25))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(675);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(672);
        match(ALFAParser::NEWLINE); 
      }
      setState(677);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 99, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdviceDefinitionContext ------------------------------------------------------------------

ALFAParser::AdviceDefinitionContext::AdviceDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ALFAParser::AdviceDefinitionContext::ADVICE() {
  return getToken(ALFAParser::ADVICE, 0);
}

std::vector<tree::TerminalNode *> ALFAParser::AdviceDefinitionContext::NEWLINE() {
  return getTokens(ALFAParser::NEWLINE);
}

tree::TerminalNode* ALFAParser::AdviceDefinitionContext::NEWLINE(size_t i) {
  return getToken(ALFAParser::NEWLINE, i);
}

std::vector<tree::TerminalNode *> ALFAParser::AdviceDefinitionContext::TARGETRESSOURCE() {
  return getTokens(ALFAParser::TARGETRESSOURCE);
}

tree::TerminalNode* ALFAParser::AdviceDefinitionContext::TARGETRESSOURCE(size_t i) {
  return getToken(ALFAParser::TARGETRESSOURCE, i);
}

std::vector<tree::TerminalNode *> ALFAParser::AdviceDefinitionContext::RIGHTCBRACKET() {
  return getTokens(ALFAParser::RIGHTCBRACKET);
}

tree::TerminalNode* ALFAParser::AdviceDefinitionContext::RIGHTCBRACKET(size_t i) {
  return getToken(ALFAParser::RIGHTCBRACKET, i);
}

std::vector<tree::TerminalNode *> ALFAParser::AdviceDefinitionContext::LEFTCBRACKET() {
  return getTokens(ALFAParser::LEFTCBRACKET);
}

tree::TerminalNode* ALFAParser::AdviceDefinitionContext::LEFTCBRACKET(size_t i) {
  return getToken(ALFAParser::LEFTCBRACKET, i);
}

std::vector<tree::TerminalNode *> ALFAParser::AdviceDefinitionContext::ASSIGN() {
  return getTokens(ALFAParser::ASSIGN);
}

tree::TerminalNode* ALFAParser::AdviceDefinitionContext::ASSIGN(size_t i) {
  return getToken(ALFAParser::ASSIGN, i);
}

std::vector<tree::TerminalNode *> ALFAParser::AdviceDefinitionContext::STRING() {
  return getTokens(ALFAParser::STRING);
}

tree::TerminalNode* ALFAParser::AdviceDefinitionContext::STRING(size_t i) {
  return getToken(ALFAParser::STRING, i);
}


size_t ALFAParser::AdviceDefinitionContext::getRuleIndex() const {
  return ALFAParser::RuleAdviceDefinition;
}

void ALFAParser::AdviceDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdviceDefinition(this);
}

void ALFAParser::AdviceDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdviceDefinition(this);
}


antlrcpp::Any ALFAParser::AdviceDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitAdviceDefinition(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::AdviceDefinitionContext* ALFAParser::adviceDefinition() {
  AdviceDefinitionContext *_localctx = _tracker.createInstance<AdviceDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 38, ALFAParser::RuleAdviceDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(681);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::NEWLINE) {
      setState(678);
      match(ALFAParser::NEWLINE);
      setState(683);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(684);
    match(ALFAParser::ADVICE);
    setState(722);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::TARGETRESSOURCE) {
      setState(720);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx)) {
      case 1: {
        setState(685);
        match(ALFAParser::TARGETRESSOURCE);
        setState(687); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(686);
                  match(ALFAParser::NEWLINE);
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(689); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

      case 2: {
        setState(691);
        match(ALFAParser::TARGETRESSOURCE);
        setState(695);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ALFAParser::NEWLINE) {
          setState(692);
          match(ALFAParser::NEWLINE);
          setState(697);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(698);
        match(ALFAParser::RIGHTCBRACKET);
        setState(702);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ALFAParser::NEWLINE) {
          setState(699);
          match(ALFAParser::NEWLINE);
          setState(704);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(716);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ALFAParser::TARGETRESSOURCE) {
          setState(705);
          match(ALFAParser::TARGETRESSOURCE);
          setState(706);
          match(ALFAParser::ASSIGN);
          setState(707);
          _la = _input->LA(1);
          if (!(_la == ALFAParser::TARGETRESSOURCE

          || _la == ALFAParser::STRING)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(711);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == ALFAParser::NEWLINE) {
            setState(708);
            match(ALFAParser::NEWLINE);
            setState(713);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(718);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(719);
        match(ALFAParser::LEFTCBRACKET);
        break;
      }

      }
      setState(724);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(728);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(725);
        match(ALFAParser::NEWLINE); 
      }
      setState(730);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObligationDefinitionContext ------------------------------------------------------------------

ALFAParser::ObligationDefinitionContext::ObligationDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ALFAParser::ObligationDefinitionContext::OBLIGATION() {
  return getToken(ALFAParser::OBLIGATION, 0);
}

std::vector<tree::TerminalNode *> ALFAParser::ObligationDefinitionContext::NEWLINE() {
  return getTokens(ALFAParser::NEWLINE);
}

tree::TerminalNode* ALFAParser::ObligationDefinitionContext::NEWLINE(size_t i) {
  return getToken(ALFAParser::NEWLINE, i);
}

std::vector<tree::TerminalNode *> ALFAParser::ObligationDefinitionContext::TARGETRESSOURCE() {
  return getTokens(ALFAParser::TARGETRESSOURCE);
}

tree::TerminalNode* ALFAParser::ObligationDefinitionContext::TARGETRESSOURCE(size_t i) {
  return getToken(ALFAParser::TARGETRESSOURCE, i);
}

std::vector<tree::TerminalNode *> ALFAParser::ObligationDefinitionContext::RIGHTCBRACKET() {
  return getTokens(ALFAParser::RIGHTCBRACKET);
}

tree::TerminalNode* ALFAParser::ObligationDefinitionContext::RIGHTCBRACKET(size_t i) {
  return getToken(ALFAParser::RIGHTCBRACKET, i);
}

std::vector<tree::TerminalNode *> ALFAParser::ObligationDefinitionContext::LEFTCBRACKET() {
  return getTokens(ALFAParser::LEFTCBRACKET);
}

tree::TerminalNode* ALFAParser::ObligationDefinitionContext::LEFTCBRACKET(size_t i) {
  return getToken(ALFAParser::LEFTCBRACKET, i);
}

std::vector<tree::TerminalNode *> ALFAParser::ObligationDefinitionContext::ASSIGN() {
  return getTokens(ALFAParser::ASSIGN);
}

tree::TerminalNode* ALFAParser::ObligationDefinitionContext::ASSIGN(size_t i) {
  return getToken(ALFAParser::ASSIGN, i);
}

std::vector<tree::TerminalNode *> ALFAParser::ObligationDefinitionContext::STRING() {
  return getTokens(ALFAParser::STRING);
}

tree::TerminalNode* ALFAParser::ObligationDefinitionContext::STRING(size_t i) {
  return getToken(ALFAParser::STRING, i);
}


size_t ALFAParser::ObligationDefinitionContext::getRuleIndex() const {
  return ALFAParser::RuleObligationDefinition;
}

void ALFAParser::ObligationDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObligationDefinition(this);
}

void ALFAParser::ObligationDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObligationDefinition(this);
}


antlrcpp::Any ALFAParser::ObligationDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitObligationDefinition(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::ObligationDefinitionContext* ALFAParser::obligationDefinition() {
  ObligationDefinitionContext *_localctx = _tracker.createInstance<ObligationDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 40, ALFAParser::RuleObligationDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(734);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::NEWLINE) {
      setState(731);
      match(ALFAParser::NEWLINE);
      setState(736);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(737);
    match(ALFAParser::OBLIGATION);
    setState(775);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::TARGETRESSOURCE) {
      setState(773);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 115, _ctx)) {
      case 1: {
        setState(738);
        match(ALFAParser::TARGETRESSOURCE);
        setState(740); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(739);
                  match(ALFAParser::NEWLINE);
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(742); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

      case 2: {
        setState(744);
        match(ALFAParser::TARGETRESSOURCE);
        setState(748);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ALFAParser::NEWLINE) {
          setState(745);
          match(ALFAParser::NEWLINE);
          setState(750);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(751);
        match(ALFAParser::RIGHTCBRACKET);
        setState(755);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ALFAParser::NEWLINE) {
          setState(752);
          match(ALFAParser::NEWLINE);
          setState(757);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(769);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ALFAParser::TARGETRESSOURCE) {
          setState(758);
          match(ALFAParser::TARGETRESSOURCE);
          setState(759);
          match(ALFAParser::ASSIGN);
          setState(760);
          _la = _input->LA(1);
          if (!(_la == ALFAParser::TARGETRESSOURCE

          || _la == ALFAParser::STRING)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(764);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == ALFAParser::NEWLINE) {
            setState(761);
            match(ALFAParser::NEWLINE);
            setState(766);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(771);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(772);
        match(ALFAParser::LEFTCBRACKET);
        break;
      }

      }
      setState(777);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(781);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(778);
        match(ALFAParser::NEWLINE); 
      }
      setState(783);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeDefinitionContext ------------------------------------------------------------------

ALFAParser::AttributeDefinitionContext::AttributeDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ALFAParser::AttributeDefinitionContext::ATTRIBUTE() {
  return getToken(ALFAParser::ATTRIBUTE, 0);
}

tree::TerminalNode* ALFAParser::AttributeDefinitionContext::WORD() {
  return getToken(ALFAParser::WORD, 0);
}

tree::TerminalNode* ALFAParser::AttributeDefinitionContext::RIGHTCBRACKET() {
  return getToken(ALFAParser::RIGHTCBRACKET, 0);
}

tree::TerminalNode* ALFAParser::AttributeDefinitionContext::LEFTCBRACKET() {
  return getToken(ALFAParser::LEFTCBRACKET, 0);
}

std::vector<tree::TerminalNode *> ALFAParser::AttributeDefinitionContext::NEWLINE() {
  return getTokens(ALFAParser::NEWLINE);
}

tree::TerminalNode* ALFAParser::AttributeDefinitionContext::NEWLINE(size_t i) {
  return getToken(ALFAParser::NEWLINE, i);
}

std::vector<tree::TerminalNode *> ALFAParser::AttributeDefinitionContext::IDENTIFIERS() {
  return getTokens(ALFAParser::IDENTIFIERS);
}

tree::TerminalNode* ALFAParser::AttributeDefinitionContext::IDENTIFIERS(size_t i) {
  return getToken(ALFAParser::IDENTIFIERS, i);
}

std::vector<tree::TerminalNode *> ALFAParser::AttributeDefinitionContext::ASSIGN() {
  return getTokens(ALFAParser::ASSIGN);
}

tree::TerminalNode* ALFAParser::AttributeDefinitionContext::ASSIGN(size_t i) {
  return getToken(ALFAParser::ASSIGN, i);
}

std::vector<tree::TerminalNode *> ALFAParser::AttributeDefinitionContext::VALUE() {
  return getTokens(ALFAParser::VALUE);
}

tree::TerminalNode* ALFAParser::AttributeDefinitionContext::VALUE(size_t i) {
  return getToken(ALFAParser::VALUE, i);
}


size_t ALFAParser::AttributeDefinitionContext::getRuleIndex() const {
  return ALFAParser::RuleAttributeDefinition;
}

void ALFAParser::AttributeDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttributeDefinition(this);
}

void ALFAParser::AttributeDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ALFAListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttributeDefinition(this);
}


antlrcpp::Any ALFAParser::AttributeDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ALFAVisitor*>(visitor))
    return parserVisitor->visitAttributeDefinition(this);
  else
    return visitor->visitChildren(this);
}

ALFAParser::AttributeDefinitionContext* ALFAParser::attributeDefinition() {
  AttributeDefinitionContext *_localctx = _tracker.createInstance<AttributeDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 42, ALFAParser::RuleAttributeDefinition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(787);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::NEWLINE) {
      setState(784);
      match(ALFAParser::NEWLINE);
      setState(789);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(790);
    match(ALFAParser::ATTRIBUTE);
    setState(791);
    match(ALFAParser::WORD);
    setState(795);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::NEWLINE) {
      setState(792);
      match(ALFAParser::NEWLINE);
      setState(797);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(798);
    match(ALFAParser::RIGHTCBRACKET);
    setState(802);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::NEWLINE) {
      setState(799);
      match(ALFAParser::NEWLINE);
      setState(804);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(816);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ALFAParser::IDENTIFIERS) {
      setState(805);
      match(ALFAParser::IDENTIFIERS);
      setState(806);
      match(ALFAParser::ASSIGN);
      setState(807);
      match(ALFAParser::VALUE);
      setState(811);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ALFAParser::NEWLINE) {
        setState(808);
        match(ALFAParser::NEWLINE);
        setState(813);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(818);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(819);
    match(ALFAParser::LEFTCBRACKET);
    setState(823);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 123, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(820);
        match(ALFAParser::NEWLINE); 
      }
      setState(825);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 123, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> ALFAParser::_decisionToDFA;
atn::PredictionContextCache ALFAParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ALFAParser::_atn;
std::vector<uint16_t> ALFAParser::_serializedATN;

std::vector<std::string> ALFAParser::_ruleNames = {
  "translationunit", "declarationseq", "namespaceDefinition", "policysetDefinition", 
  "policyDefinition", "ruleDefinition", "onBlock", "onPermitBlock", "onDenyBlock", 
  "targetDefinition", "clauseDefinition", "booleenExpression", "conditionDefinition", 
  "condition", "functionType", "functionName", "importDefinition", "permitdeny", 
  "combiningAlgorithm", "adviceDefinition", "obligationDefinition", "attributeDefinition"
};

std::vector<std::string> ALFAParser::_literalNames = {
  "", "'and'", "'or'", "'['", "']'", "','", "'AllOf'", "'AnyOf'", "'AnyOfAny'", 
  "'AllOfAny'", "'AnyOfAll'", "'AllOfAll'", "'stringRegexpMatch'", "'anyURIRegesMatch'", 
  "'NameRegexMatch'", "'booleanOneAndOnly'", "'import'", "'apply'", "'denyOverrides'", 
  "'permitOverrides'", "'firstApplicable'", "'onlyOneApplicable'", "'orderedDenyOverrides'", 
  "'orderedPermitOverrides'", "'denyUnlessPermit'", "'permitUnlessDeny'", 
  "'onPermitApplySecond'", "", "", "", "", "", "", "", "", "'namespace'", 
  "'policyset'", "'policy'", "'rule'", "'permit'", "'deny'", "'target'", 
  "'clause'", "'advice'", "'obligation'", "'on permit'", "'on deny'", "'condition'", 
  "'function'", "", "", "'attribute'", "", "'id'", "'type'", "'category'", 
  "'+'", "'-'", "'/'", "'*'", "'{'", "'}'", "'('", "')'", "'='", "'%'", 
  "'&'", "'|'", "'not'", "'<'", "'>'", "'^'", "'=='", "'!='", "'<='", "'>='", 
  "'&&'", "'||'"
};

std::vector<std::string> ALFAParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "BlockComment", "LineComment", "VALUE", 
  "TYPES", "COMPARE", "NEWLINE", "WHITESPACE", "BOOL", "NAMESPACE", "POLICYSET", 
  "POLICY", "RULE", "PERMIT", "DENY", "TARGET", "CLAUSE", "ADVICE", "OBLIGATION", 
  "ONPERMIT", "ONDENY", "CONDITION", "FUNCTION", "BAGFUNCTION", "COMMENT", 
  "ATTRIBUTE", "IDENTIFIERS", "ID", "TYPE", "CATEGORY", "PLUS", "MINUS", 
  "DIV", "MULTIPLY", "RIGHTCBRACKET", "LEFTCBRACKET", "RIGHTPAREN", "LEFTPAREN", 
  "ASSIGN", "MOD", "AND", "OR", "NOT", "LESS", "GREATER", "CARET", "EQUAL", 
  "NOTEQUAL", "LESSEQUAL", "GREATEREQUAL", "ANDAND", "OROR", "TARGETRESSOURCE", 
  "WORD", "STRING"
};

dfa::Vocabulary ALFAParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ALFAParser::_tokenNames;

ALFAParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x52, 0x33d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x3, 0x2, 0x6, 
    0x2, 0x30, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x31, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x7, 0x3, 0x37, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x3a, 0xb, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x49, 
    0xa, 0x3, 0x3, 0x4, 0x7, 0x4, 0x4c, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x4f, 
    0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x53, 0xa, 0x4, 0xc, 0x4, 0xe, 
    0x4, 0x56, 0xb, 0x4, 0x3, 0x4, 0x5, 0x4, 0x59, 0xa, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x7, 0x4, 0x5d, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x60, 0xb, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x6e, 0xa, 0x4, 
    0x3, 0x4, 0x7, 0x4, 0x71, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x74, 0xb, 0x4, 
    0x7, 0x4, 0x76, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x79, 0xb, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x5, 0x7, 0x5, 0x7e, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x81, 
    0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x86, 0xa, 0x5, 0xc, 
    0x5, 0xe, 0x5, 0x89, 0xb, 0x5, 0x3, 0x5, 0x7, 0x5, 0x8c, 0xa, 0x5, 0xc, 
    0x5, 0xe, 0x5, 0x8f, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x93, 0xa, 
    0x5, 0xc, 0x5, 0xe, 0x5, 0x96, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x7, 0x5, 0x9c, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x9f, 0xb, 0x5, 
    0x5, 0x5, 0xa1, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xac, 0xa, 0x5, 
    0xc, 0x5, 0xe, 0x5, 0xaf, 0xb, 0x5, 0x3, 0x5, 0x5, 0x5, 0xb2, 0xa, 0x5, 
    0x3, 0x5, 0x7, 0x5, 0xb5, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xb8, 0xb, 0x5, 
    0x3, 0x6, 0x7, 0x6, 0xbb, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0xbe, 0xb, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0xc3, 0xa, 0x6, 0xc, 0x6, 0xe, 
    0x6, 0xc6, 0xb, 0x6, 0x3, 0x6, 0x7, 0x6, 0xc9, 0xa, 0x6, 0xc, 0x6, 0xe, 
    0x6, 0xcc, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0xd0, 0xa, 0x6, 0xc, 
    0x6, 0xe, 0x6, 0xd3, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x7, 0x6, 0xd9, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0xdc, 0xb, 0x6, 0x5, 0x6, 
    0xde, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0xe8, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 
    0xeb, 0xb, 0x6, 0x3, 0x6, 0x5, 0x6, 0xee, 0xa, 0x6, 0x3, 0x6, 0x7, 0x6, 
    0xf1, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0xf4, 0xb, 0x6, 0x3, 0x7, 0x7, 0x7, 
    0xf7, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0xfa, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x7, 0x7, 0xff, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x102, 0xb, 
    0x7, 0x3, 0x7, 0x7, 0x7, 0x105, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x108, 
    0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x10c, 0xa, 0x7, 0xc, 0x7, 0xe, 
    0x7, 0x10f, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 
    0x115, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x118, 0xb, 0x7, 0x5, 0x7, 0x11a, 
    0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x7, 0x7, 0x122, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x125, 0xb, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x128, 0xa, 0x7, 0x3, 0x7, 0x7, 0x7, 0x12b, 0xa, 0x7, 
    0xc, 0x7, 0xe, 0x7, 0x12e, 0xb, 0x7, 0x3, 0x8, 0x7, 0x8, 0x131, 0xa, 
    0x8, 0xc, 0x8, 0xe, 0x8, 0x134, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0x138, 0xa, 0x8, 0x3, 0x8, 0x7, 0x8, 0x13b, 0xa, 0x8, 0xc, 0x8, 0xe, 
    0x8, 0x13e, 0xb, 0x8, 0x3, 0x9, 0x7, 0x9, 0x141, 0xa, 0x9, 0xc, 0x9, 
    0xe, 0x9, 0x144, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x148, 0xa, 
    0x9, 0xc, 0x9, 0xe, 0x9, 0x14b, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 
    0x14f, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x152, 0xb, 0x9, 0x3, 0x9, 0x7, 
    0x9, 0x155, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x158, 0xb, 0x9, 0x3, 0x9, 
    0x7, 0x9, 0x15b, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x15e, 0xb, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x7, 0x9, 0x162, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x165, 
    0xb, 0x9, 0x3, 0xa, 0x7, 0xa, 0x168, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x16b, 
    0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x16f, 0xa, 0xa, 0xc, 0xa, 0xe, 
    0xa, 0x172, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x176, 0xa, 0xa, 
    0xc, 0xa, 0xe, 0xa, 0x179, 0xb, 0xa, 0x3, 0xa, 0x7, 0xa, 0x17c, 0xa, 
    0xa, 0xc, 0xa, 0xe, 0xa, 0x17f, 0xb, 0xa, 0x3, 0xa, 0x7, 0xa, 0x182, 
    0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x185, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 
    0xa, 0x189, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x18c, 0xb, 0xa, 0x3, 0xb, 
    0x7, 0xb, 0x18f, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x192, 0xb, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x197, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 
    0x19a, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x6, 0xc, 0x19e, 0xa, 0xc, 0xd, 
    0xc, 0xe, 0xc, 0x19f, 0x3, 0xc, 0x7, 0xc, 0x1a3, 0xa, 0xc, 0xc, 0xc, 
    0xe, 0xc, 0x1a6, 0xb, 0xc, 0x3, 0xd, 0x7, 0xd, 0x1a9, 0xa, 0xd, 0xc, 
    0xd, 0xe, 0xd, 0x1ac, 0xb, 0xd, 0x3, 0xd, 0x7, 0xd, 0x1af, 0xa, 0xd, 
    0xc, 0xd, 0xe, 0xd, 0x1b2, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x7, 0xd, 0x1b8, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x1bb, 0xb, 0xd, 
    0x3, 0xd, 0x7, 0xd, 0x1be, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x1c1, 0xb, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x1c7, 0xa, 0xd, 
    0xc, 0xd, 0xe, 0xd, 0x1ca, 0xb, 0xd, 0x3, 0xd, 0x7, 0xd, 0x1cd, 0xa, 
    0xd, 0xc, 0xd, 0xe, 0xd, 0x1d0, 0xb, 0xd, 0x3, 0xd, 0x7, 0xd, 0x1d3, 
    0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x1d6, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x1df, 0xa, 0xd, 
    0xc, 0xd, 0xe, 0xd, 0x1e2, 0xb, 0xd, 0x3, 0xd, 0x7, 0xd, 0x1e5, 0xa, 
    0xd, 0xc, 0xd, 0xe, 0xd, 0x1e8, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x7, 0xd, 0x1ee, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x1f1, 0xb, 
    0xd, 0x5, 0xd, 0x1f3, 0xa, 0xd, 0x3, 0xe, 0x7, 0xe, 0x1f6, 0xa, 0xe, 
    0xc, 0xe, 0xe, 0xe, 0x1f9, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x1fd, 
    0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x200, 0xb, 0xe, 0x3, 0xe, 0x7, 0xe, 0x203, 
    0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x206, 0xb, 0xe, 0x3, 0xf, 0x7, 0xf, 0x209, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x20c, 0xb, 0xf, 0x3, 0xf, 0x7, 0xf, 0x20f, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x212, 0xb, 0xf, 0x3, 0xf, 0x7, 0xf, 0x215, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x218, 0xb, 0xf, 0x3, 0xf, 0x7, 0xf, 0x21b, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x21e, 0xb, 0xf, 0x3, 0xf, 0x7, 0xf, 0x221, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x224, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 
    0xf, 0x22f, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x232, 0xb, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x237, 0xa, 0xf, 0x7, 0xf, 0x239, 0xa, 
    0xf, 0xc, 0xf, 0xe, 0xf, 0x23c, 0xb, 0xf, 0x3, 0xf, 0x7, 0xf, 0x23f, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x242, 0xb, 0xf, 0x3, 0xf, 0x7, 0xf, 0x245, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x248, 0xb, 0xf, 0x3, 0xf, 0x7, 0xf, 0x24b, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x24e, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x7, 0xf, 0x254, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x257, 
    0xb, 0xf, 0x7, 0xf, 0x259, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x25c, 0xb, 
    0xf, 0x3, 0xf, 0x7, 0xf, 0x25f, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x262, 
    0xb, 0xf, 0x3, 0xf, 0x7, 0xf, 0x265, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x268, 
    0xb, 0xf, 0x3, 0xf, 0x7, 0xf, 0x26b, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x26e, 
    0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 
    0x275, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x278, 0xb, 0xf, 0x5, 0xf, 0x27a, 
    0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x7, 
    0x12, 0x281, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x284, 0xb, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x289, 0xa, 0x12, 0xc, 0x12, 
    0xe, 0x12, 0x28c, 0xb, 0x12, 0x3, 0x13, 0x7, 0x13, 0x28f, 0xa, 0x13, 
    0xc, 0x13, 0xe, 0x13, 0x292, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 
    0x296, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x299, 0xb, 0x13, 0x3, 0x14, 
    0x7, 0x14, 0x29c, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x29f, 0xb, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0x2a4, 0xa, 0x14, 0xc, 0x14, 
    0xe, 0x14, 0x2a7, 0xb, 0x14, 0x3, 0x15, 0x7, 0x15, 0x2aa, 0xa, 0x15, 
    0xc, 0x15, 0xe, 0x15, 0x2ad, 0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x6, 0x15, 0x2b2, 0xa, 0x15, 0xd, 0x15, 0xe, 0x15, 0x2b3, 0x3, 0x15, 
    0x3, 0x15, 0x7, 0x15, 0x2b8, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x2bb, 
    0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x7, 0x15, 0x2bf, 0xa, 0x15, 0xc, 0x15, 
    0xe, 0x15, 0x2c2, 0xb, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x7, 0x15, 0x2c8, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x2cb, 0xb, 0x15, 
    0x7, 0x15, 0x2cd, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x2d0, 0xb, 0x15, 
    0x3, 0x15, 0x7, 0x15, 0x2d3, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x2d6, 
    0xb, 0x15, 0x3, 0x15, 0x7, 0x15, 0x2d9, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 
    0x2dc, 0xb, 0x15, 0x3, 0x16, 0x7, 0x16, 0x2df, 0xa, 0x16, 0xc, 0x16, 
    0xe, 0x16, 0x2e2, 0xb, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x6, 0x16, 
    0x2e7, 0xa, 0x16, 0xd, 0x16, 0xe, 0x16, 0x2e8, 0x3, 0x16, 0x3, 0x16, 
    0x7, 0x16, 0x2ed, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x2f0, 0xb, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0x2f4, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 
    0x2f7, 0xb, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 
    0x2fd, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x300, 0xb, 0x16, 0x7, 0x16, 
    0x302, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x305, 0xb, 0x16, 0x3, 0x16, 
    0x7, 0x16, 0x308, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x30b, 0xb, 0x16, 
    0x3, 0x16, 0x7, 0x16, 0x30e, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0x311, 
    0xb, 0x16, 0x3, 0x17, 0x7, 0x17, 0x314, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 
    0x317, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x31c, 
    0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x31f, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x7, 0x17, 0x323, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x326, 0xb, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x32c, 0xa, 0x17, 
    0xc, 0x17, 0xe, 0x17, 0x32f, 0xb, 0x17, 0x7, 0x17, 0x331, 0xa, 0x17, 
    0xc, 0x17, 0xe, 0x17, 0x334, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 
    0x338, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x33b, 0xb, 0x17, 0x3, 0x17, 
    0x2, 0x2, 0x18, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
    0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 
    0x2, 0x8, 0x3, 0x2, 0x44, 0x45, 0x3, 0x2, 0x8, 0xd, 0x3, 0x2, 0xe, 0x11, 
    0x3, 0x2, 0x29, 0x2a, 0x3, 0x2, 0x14, 0x1c, 0x4, 0x2, 0x50, 0x50, 0x52, 
    0x52, 0x2, 0x3c9, 0x2, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x4, 0x48, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x8, 0x7f, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xc, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xe, 0x132, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x142, 0x3, 0x2, 0x2, 0x2, 0x12, 0x169, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x190, 0x3, 0x2, 0x2, 0x2, 0x16, 0x19b, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1f7, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x279, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x27b, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x22, 0x282, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x290, 0x3, 0x2, 0x2, 0x2, 0x26, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2ab, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x315, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x30, 0x5, 0x4, 0x3, 0x2, 0x2f, 0x2e, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x31, 0x3, 0x2, 0x2, 0x2, 0x31, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0x31, 0x32, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x33, 0x34, 0x7, 0x2, 0x2, 0x3, 0x34, 0x3, 0x3, 0x2, 0x2, 0x2, 0x35, 
    0x37, 0x7, 0x22, 0x2, 0x2, 0x36, 0x35, 0x3, 0x2, 0x2, 0x2, 0x37, 0x3a, 
    0x3, 0x2, 0x2, 0x2, 0x38, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 
    0x2, 0x2, 0x2, 0x39, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x38, 0x3, 0x2, 
    0x2, 0x2, 0x3b, 0x49, 0x7, 0x22, 0x2, 0x2, 0x3c, 0x49, 0x5, 0x6, 0x4, 
    0x2, 0x3d, 0x49, 0x7, 0x34, 0x2, 0x2, 0x3e, 0x49, 0x5, 0x22, 0x12, 0x2, 
    0x3f, 0x49, 0x5, 0x2c, 0x17, 0x2, 0x40, 0x49, 0x5, 0x8, 0x5, 0x2, 0x41, 
    0x49, 0x5, 0xa, 0x6, 0x2, 0x42, 0x49, 0x5, 0x1a, 0xe, 0x2, 0x43, 0x49, 
    0x5, 0x14, 0xb, 0x2, 0x44, 0x49, 0x5, 0x26, 0x14, 0x2, 0x45, 0x49, 0x5, 
    0xe, 0x8, 0x2, 0x46, 0x49, 0x5, 0x24, 0x13, 0x2, 0x47, 0x49, 0x5, 0x18, 
    0xd, 0x2, 0x48, 0x38, 0x3, 0x2, 0x2, 0x2, 0x48, 0x3c, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x48, 0x3e, 0x3, 0x2, 0x2, 0x2, 
    0x48, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x48, 0x40, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x48, 0x42, 0x3, 0x2, 0x2, 0x2, 0x48, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x44, 0x3, 0x2, 0x2, 0x2, 0x48, 0x45, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0x49, 0x5, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4c, 0x7, 0x22, 0x2, 
    0x2, 0x4b, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4f, 0x3, 0x2, 0x2, 0x2, 
    0x4d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x50, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x50, 0x58, 
    0x7, 0x25, 0x2, 0x2, 0x51, 0x53, 0x7, 0x22, 0x2, 0x2, 0x52, 0x51, 0x3, 
    0x2, 0x2, 0x2, 0x53, 0x56, 0x3, 0x2, 0x2, 0x2, 0x54, 0x52, 0x3, 0x2, 
    0x2, 0x2, 0x54, 0x55, 0x3, 0x2, 0x2, 0x2, 0x55, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x57, 0x59, 0x7, 0x51, 0x2, 0x2, 
    0x58, 0x54, 0x3, 0x2, 0x2, 0x2, 0x58, 0x57, 0x3, 0x2, 0x2, 0x2, 0x59, 
    0x5a, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x77, 0x7, 0x3e, 0x2, 0x2, 0x5b, 0x5d, 
    0x7, 0x22, 0x2, 0x2, 0x5c, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x60, 0x3, 
    0x2, 0x2, 0x2, 0x5e, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x3, 0x2, 
    0x2, 0x2, 0x5f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5e, 0x3, 0x2, 0x2, 
    0x2, 0x61, 0x6e, 0x5, 0x6, 0x4, 0x2, 0x62, 0x6e, 0x7, 0x34, 0x2, 0x2, 
    0x63, 0x6e, 0x5, 0x22, 0x12, 0x2, 0x64, 0x6e, 0x5, 0x2c, 0x17, 0x2, 
    0x65, 0x6e, 0x5, 0x8, 0x5, 0x2, 0x66, 0x6e, 0x5, 0xa, 0x6, 0x2, 0x67, 
    0x6e, 0x5, 0x1a, 0xe, 0x2, 0x68, 0x6e, 0x5, 0x14, 0xb, 0x2, 0x69, 0x6e, 
    0x5, 0x26, 0x14, 0x2, 0x6a, 0x6e, 0x5, 0xe, 0x8, 0x2, 0x6b, 0x6e, 0x5, 
    0x24, 0x13, 0x2, 0x6c, 0x6e, 0x5, 0x18, 0xd, 0x2, 0x6d, 0x61, 0x3, 0x2, 
    0x2, 0x2, 0x6d, 0x62, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x63, 0x3, 0x2, 0x2, 
    0x2, 0x6d, 0x64, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x65, 0x3, 0x2, 0x2, 0x2, 
    0x6d, 0x66, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x67, 0x3, 0x2, 0x2, 0x2, 0x6d, 
    0x68, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6a, 
    0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6c, 0x3, 
    0x2, 0x2, 0x2, 0x6e, 0x72, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x71, 0x7, 0x22, 
    0x2, 0x2, 0x70, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 0x74, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x70, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x3, 0x2, 0x2, 0x2, 
    0x73, 0x76, 0x3, 0x2, 0x2, 0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 0x75, 
    0x5e, 0x3, 0x2, 0x2, 0x2, 0x76, 0x79, 0x3, 0x2, 0x2, 0x2, 0x77, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 0x2, 0x2, 0x78, 0x7a, 0x3, 
    0x2, 0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x3f, 
    0x2, 0x2, 0x7b, 0x7, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7e, 0x7, 0x22, 0x2, 
    0x2, 0x7d, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x81, 0x3, 0x2, 0x2, 0x2, 
    0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 
    0x82, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x82, 0xb1, 
    0x7, 0x26, 0x2, 0x2, 0x83, 0x87, 0x7, 0x51, 0x2, 0x2, 0x84, 0x86, 0x7, 
    0x22, 0x2, 0x2, 0x85, 0x84, 0x3, 0x2, 0x2, 0x2, 0x86, 0x89, 0x3, 0x2, 
    0x2, 0x2, 0x87, 0x85, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 
    0x8a, 0x8c, 0x7, 0x22, 0x2, 0x2, 0x8b, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8c, 
    0x8f, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 
    0x3, 0x2, 0x2, 0x2, 0x8e, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x8d, 0x3, 
    0x2, 0x2, 0x2, 0x90, 0x94, 0x7, 0x51, 0x2, 0x2, 0x91, 0x93, 0x7, 0x22, 
    0x2, 0x2, 0x92, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 0x96, 0x3, 0x2, 0x2, 
    0x2, 0x94, 0x92, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 0x2, 0x2, 0x2, 
    0x95, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 0x2, 0x97, 
    0x98, 0x7, 0x51, 0x2, 0x2, 0x98, 0x99, 0x7, 0x42, 0x2, 0x2, 0x99, 0x9d, 
    0x7, 0x52, 0x2, 0x2, 0x9a, 0x9c, 0x7, 0x22, 0x2, 0x2, 0x9b, 0x9a, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9b, 0x3, 0x2, 
    0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa1, 0x3, 0x2, 0x2, 
    0x2, 0x9f, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x8d, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0x90, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x97, 0x3, 0x2, 0x2, 0x2, 0xa1, 
    0xa2, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xad, 0x7, 0x3e, 0x2, 0x2, 0xa3, 0xac, 
    0x5, 0x6, 0x4, 0x2, 0xa4, 0xac, 0x5, 0x8, 0x5, 0x2, 0xa5, 0xac, 0x5, 
    0xa, 0x6, 0x2, 0xa6, 0xac, 0x5, 0xc, 0x7, 0x2, 0xa7, 0xac, 0x5, 0x1a, 
    0xe, 0x2, 0xa8, 0xac, 0x5, 0x14, 0xb, 0x2, 0xa9, 0xac, 0x5, 0x26, 0x14, 
    0x2, 0xaa, 0xac, 0x5, 0xe, 0x8, 0x2, 0xab, 0xa3, 0x3, 0x2, 0x2, 0x2, 
    0xab, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xab, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xab, 
    0xa6, 0x3, 0x2, 0x2, 0x2, 0xab, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xab, 0xa8, 
    0x3, 0x2, 0x2, 0x2, 0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xab, 0xaa, 0x3, 
    0x2, 0x2, 0x2, 0xac, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xad, 0xab, 0x3, 0x2, 
    0x2, 0x2, 0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0xb0, 0x3, 0x2, 0x2, 
    0x2, 0xaf, 0xad, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb2, 0x7, 0x3f, 0x2, 0x2, 
    0xb1, 0x83, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xb2, 
    0xb6, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb5, 0x7, 0x22, 0x2, 0x2, 0xb4, 0xb3, 
    0x3, 0x2, 0x2, 0x2, 0xb5, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb4, 0x3, 
    0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xbb, 0x7, 0x22, 0x2, 
    0x2, 0xba, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbe, 0x3, 0x2, 0x2, 0x2, 
    0xbc, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 
    0xbf, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xed, 
    0x7, 0x27, 0x2, 0x2, 0xc0, 0xc4, 0x7, 0x51, 0x2, 0x2, 0xc1, 0xc3, 0x7, 
    0x22, 0x2, 0x2, 0xc2, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc6, 0x3, 0x2, 
    0x2, 0x2, 0xc4, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x3, 0x2, 0x2, 
    0x2, 0xc5, 0xee, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc4, 0x3, 0x2, 0x2, 0x2, 
    0xc7, 0xc9, 0x7, 0x22, 0x2, 0x2, 0xc8, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc9, 
    0xcc, 0x3, 0x2, 0x2, 0x2, 0xca, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 
    0x3, 0x2, 0x2, 0x2, 0xcb, 0xde, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xca, 0x3, 
    0x2, 0x2, 0x2, 0xcd, 0xd1, 0x7, 0x51, 0x2, 0x2, 0xce, 0xd0, 0x7, 0x22, 
    0x2, 0x2, 0xcf, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd3, 0x3, 0x2, 0x2, 
    0x2, 0xd1, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x3, 0x2, 0x2, 0x2, 
    0xd2, 0xde, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd4, 
    0xd5, 0x7, 0x51, 0x2, 0x2, 0xd5, 0xd6, 0x7, 0x42, 0x2, 0x2, 0xd6, 0xda, 
    0x7, 0x52, 0x2, 0x2, 0xd7, 0xd9, 0x7, 0x22, 0x2, 0x2, 0xd8, 0xd7, 0x3, 
    0x2, 0x2, 0x2, 0xd9, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 
    0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xde, 0x3, 0x2, 0x2, 
    0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xca, 0x3, 0x2, 0x2, 0x2, 
    0xdd, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xde, 
    0xdf, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe9, 0x7, 0x3e, 0x2, 0x2, 0xe0, 0xe8, 
    0x5, 0x6, 0x4, 0x2, 0xe1, 0xe8, 0x5, 0xa, 0x6, 0x2, 0xe2, 0xe8, 0x5, 
    0xc, 0x7, 0x2, 0xe3, 0xe8, 0x5, 0x1a, 0xe, 0x2, 0xe4, 0xe8, 0x5, 0x14, 
    0xb, 0x2, 0xe5, 0xe8, 0x5, 0x26, 0x14, 0x2, 0xe6, 0xe8, 0x5, 0xe, 0x8, 
    0x2, 0xe7, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe1, 0x3, 0x2, 0x2, 0x2, 
    0xe7, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe7, 
    0xe4, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe6, 
    0x3, 0x2, 0x2, 0x2, 0xe8, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xe7, 0x3, 
    0x2, 0x2, 0x2, 0xe9, 0xea, 0x3, 0x2, 0x2, 0x2, 0xea, 0xec, 0x3, 0x2, 
    0x2, 0x2, 0xeb, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xec, 0xee, 0x7, 0x3f, 0x2, 
    0x2, 0xed, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xed, 0xdd, 0x3, 0x2, 0x2, 0x2, 
    0xee, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf1, 0x7, 0x22, 0x2, 0x2, 0xf0, 
    0xef, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf0, 
    0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0xf4, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf7, 0x7, 0x22, 
    0x2, 0x2, 0xf6, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xfa, 0x3, 0x2, 0x2, 
    0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x3, 0x2, 0x2, 0x2, 
    0xf9, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfb, 
    0x127, 0x7, 0x28, 0x2, 0x2, 0xfc, 0x100, 0x7, 0x51, 0x2, 0x2, 0xfd, 
    0xff, 0x7, 0x22, 0x2, 0x2, 0xfe, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xff, 0x102, 
    0x3, 0x2, 0x2, 0x2, 0x100, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x3, 
    0x2, 0x2, 0x2, 0x101, 0x128, 0x3, 0x2, 0x2, 0x2, 0x102, 0x100, 0x3, 
    0x2, 0x2, 0x2, 0x103, 0x105, 0x7, 0x22, 0x2, 0x2, 0x104, 0x103, 0x3, 
    0x2, 0x2, 0x2, 0x105, 0x108, 0x3, 0x2, 0x2, 0x2, 0x106, 0x104, 0x3, 
    0x2, 0x2, 0x2, 0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x11a, 0x3, 
    0x2, 0x2, 0x2, 0x108, 0x106, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10d, 0x7, 
    0x51, 0x2, 0x2, 0x10a, 0x10c, 0x7, 0x22, 0x2, 0x2, 0x10b, 0x10a, 0x3, 
    0x2, 0x2, 0x2, 0x10c, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10b, 0x3, 
    0x2, 0x2, 0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x11a, 0x3, 
    0x2, 0x2, 0x2, 0x10f, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x7, 
    0x51, 0x2, 0x2, 0x111, 0x112, 0x7, 0x42, 0x2, 0x2, 0x112, 0x116, 0x7, 
    0x52, 0x2, 0x2, 0x113, 0x115, 0x7, 0x22, 0x2, 0x2, 0x114, 0x113, 0x3, 
    0x2, 0x2, 0x2, 0x115, 0x118, 0x3, 0x2, 0x2, 0x2, 0x116, 0x114, 0x3, 
    0x2, 0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 0x117, 0x11a, 0x3, 
    0x2, 0x2, 0x2, 0x118, 0x116, 0x3, 0x2, 0x2, 0x2, 0x119, 0x106, 0x3, 
    0x2, 0x2, 0x2, 0x119, 0x109, 0x3, 0x2, 0x2, 0x2, 0x119, 0x110, 0x3, 
    0x2, 0x2, 0x2, 0x11a, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x123, 0x7, 
    0x3e, 0x2, 0x2, 0x11c, 0x122, 0x5, 0xc, 0x7, 0x2, 0x11d, 0x122, 0x5, 
    0x1a, 0xe, 0x2, 0x11e, 0x122, 0x5, 0x14, 0xb, 0x2, 0x11f, 0x122, 0x5, 
    0x24, 0x13, 0x2, 0x120, 0x122, 0x5, 0xe, 0x8, 0x2, 0x121, 0x11c, 0x3, 
    0x2, 0x2, 0x2, 0x121, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x121, 0x11e, 0x3, 
    0x2, 0x2, 0x2, 0x121, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x121, 0x120, 0x3, 
    0x2, 0x2, 0x2, 0x122, 0x125, 0x3, 0x2, 0x2, 0x2, 0x123, 0x121, 0x3, 
    0x2, 0x2, 0x2, 0x123, 0x124, 0x3, 0x2, 0x2, 0x2, 0x124, 0x126, 0x3, 
    0x2, 0x2, 0x2, 0x125, 0x123, 0x3, 0x2, 0x2, 0x2, 0x126, 0x128, 0x7, 
    0x3f, 0x2, 0x2, 0x127, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x127, 0x119, 0x3, 
    0x2, 0x2, 0x2, 0x128, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12b, 0x7, 
    0x22, 0x2, 0x2, 0x12a, 0x129, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12e, 0x3, 
    0x2, 0x2, 0x2, 0x12c, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x3, 
    0x2, 0x2, 0x2, 0x12d, 0xd, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12c, 0x3, 0x2, 
    0x2, 0x2, 0x12f, 0x131, 0x7, 0x22, 0x2, 0x2, 0x130, 0x12f, 0x3, 0x2, 
    0x2, 0x2, 0x131, 0x134, 0x3, 0x2, 0x2, 0x2, 0x132, 0x130, 0x3, 0x2, 
    0x2, 0x2, 0x132, 0x133, 0x3, 0x2, 0x2, 0x2, 0x133, 0x137, 0x3, 0x2, 
    0x2, 0x2, 0x134, 0x132, 0x3, 0x2, 0x2, 0x2, 0x135, 0x138, 0x5, 0x10, 
    0x9, 0x2, 0x136, 0x138, 0x5, 0x12, 0xa, 0x2, 0x137, 0x135, 0x3, 0x2, 
    0x2, 0x2, 0x137, 0x136, 0x3, 0x2, 0x2, 0x2, 0x138, 0x13c, 0x3, 0x2, 
    0x2, 0x2, 0x139, 0x13b, 0x7, 0x22, 0x2, 0x2, 0x13a, 0x139, 0x3, 0x2, 
    0x2, 0x2, 0x13b, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13a, 0x3, 0x2, 
    0x2, 0x2, 0x13c, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13d, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0x13e, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x141, 0x7, 0x22, 0x2, 
    0x2, 0x140, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x141, 0x144, 0x3, 0x2, 0x2, 
    0x2, 0x142, 0x140, 0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 0x3, 0x2, 0x2, 
    0x2, 0x143, 0x145, 0x3, 0x2, 0x2, 0x2, 0x144, 0x142, 0x3, 0x2, 0x2, 
    0x2, 0x145, 0x149, 0x7, 0x2f, 0x2, 0x2, 0x146, 0x148, 0x7, 0x22, 0x2, 
    0x2, 0x147, 0x146, 0x3, 0x2, 0x2, 0x2, 0x148, 0x14b, 0x3, 0x2, 0x2, 
    0x2, 0x149, 0x147, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x3, 0x2, 0x2, 
    0x2, 0x14a, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x149, 0x3, 0x2, 0x2, 
    0x2, 0x14c, 0x150, 0x7, 0x3e, 0x2, 0x2, 0x14d, 0x14f, 0x7, 0x22, 0x2, 
    0x2, 0x14e, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x152, 0x3, 0x2, 0x2, 
    0x2, 0x150, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 0x3, 0x2, 0x2, 
    0x2, 0x151, 0x156, 0x3, 0x2, 0x2, 0x2, 0x152, 0x150, 0x3, 0x2, 0x2, 
    0x2, 0x153, 0x155, 0x5, 0x2a, 0x16, 0x2, 0x154, 0x153, 0x3, 0x2, 0x2, 
    0x2, 0x155, 0x158, 0x3, 0x2, 0x2, 0x2, 0x156, 0x154, 0x3, 0x2, 0x2, 
    0x2, 0x156, 0x157, 0x3, 0x2, 0x2, 0x2, 0x157, 0x15c, 0x3, 0x2, 0x2, 
    0x2, 0x158, 0x156, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15b, 0x7, 0x22, 0x2, 
    0x2, 0x15a, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15e, 0x3, 0x2, 0x2, 
    0x2, 0x15c, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 0x3, 0x2, 0x2, 
    0x2, 0x15d, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15c, 0x3, 0x2, 0x2, 
    0x2, 0x15f, 0x163, 0x7, 0x3f, 0x2, 0x2, 0x160, 0x162, 0x7, 0x22, 0x2, 
    0x2, 0x161, 0x160, 0x3, 0x2, 0x2, 0x2, 0x162, 0x165, 0x3, 0x2, 0x2, 
    0x2, 0x163, 0x161, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x3, 0x2, 0x2, 
    0x2, 0x164, 0x11, 0x3, 0x2, 0x2, 0x2, 0x165, 0x163, 0x3, 0x2, 0x2, 0x2, 
    0x166, 0x168, 0x7, 0x22, 0x2, 0x2, 0x167, 0x166, 0x3, 0x2, 0x2, 0x2, 
    0x168, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x169, 0x167, 0x3, 0x2, 0x2, 0x2, 
    0x169, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16c, 0x3, 0x2, 0x2, 0x2, 
    0x16b, 0x169, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x170, 0x7, 0x30, 0x2, 0x2, 
    0x16d, 0x16f, 0x7, 0x22, 0x2, 0x2, 0x16e, 0x16d, 0x3, 0x2, 0x2, 0x2, 
    0x16f, 0x172, 0x3, 0x2, 0x2, 0x2, 0x170, 0x16e, 0x3, 0x2, 0x2, 0x2, 
    0x170, 0x171, 0x3, 0x2, 0x2, 0x2, 0x171, 0x173, 0x3, 0x2, 0x2, 0x2, 
    0x172, 0x170, 0x3, 0x2, 0x2, 0x2, 0x173, 0x177, 0x7, 0x3e, 0x2, 0x2, 
    0x174, 0x176, 0x7, 0x22, 0x2, 0x2, 0x175, 0x174, 0x3, 0x2, 0x2, 0x2, 
    0x176, 0x179, 0x3, 0x2, 0x2, 0x2, 0x177, 0x175, 0x3, 0x2, 0x2, 0x2, 
    0x177, 0x178, 0x3, 0x2, 0x2, 0x2, 0x178, 0x17d, 0x3, 0x2, 0x2, 0x2, 
    0x179, 0x177, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17c, 0x5, 0x28, 0x15, 0x2, 
    0x17b, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17f, 0x3, 0x2, 0x2, 0x2, 
    0x17d, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17e, 0x3, 0x2, 0x2, 0x2, 
    0x17e, 0x183, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x17d, 0x3, 0x2, 0x2, 0x2, 
    0x180, 0x182, 0x7, 0x22, 0x2, 0x2, 0x181, 0x180, 0x3, 0x2, 0x2, 0x2, 
    0x182, 0x185, 0x3, 0x2, 0x2, 0x2, 0x183, 0x181, 0x3, 0x2, 0x2, 0x2, 
    0x183, 0x184, 0x3, 0x2, 0x2, 0x2, 0x184, 0x186, 0x3, 0x2, 0x2, 0x2, 
    0x185, 0x183, 0x3, 0x2, 0x2, 0x2, 0x186, 0x18a, 0x7, 0x3f, 0x2, 0x2, 
    0x187, 0x189, 0x7, 0x22, 0x2, 0x2, 0x188, 0x187, 0x3, 0x2, 0x2, 0x2, 
    0x189, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x188, 0x3, 0x2, 0x2, 0x2, 
    0x18a, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x13, 0x3, 0x2, 0x2, 0x2, 0x18c, 
    0x18a, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18f, 0x7, 0x22, 0x2, 0x2, 0x18e, 
    0x18d, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x192, 0x3, 0x2, 0x2, 0x2, 0x190, 
    0x18e, 0x3, 0x2, 0x2, 0x2, 0x190, 0x191, 0x3, 0x2, 0x2, 0x2, 0x191, 
    0x193, 0x3, 0x2, 0x2, 0x2, 0x192, 0x190, 0x3, 0x2, 0x2, 0x2, 0x193, 
    0x194, 0x7, 0x2b, 0x2, 0x2, 0x194, 0x198, 0x5, 0x16, 0xc, 0x2, 0x195, 
    0x197, 0x7, 0x22, 0x2, 0x2, 0x196, 0x195, 0x3, 0x2, 0x2, 0x2, 0x197, 
    0x19a, 0x3, 0x2, 0x2, 0x2, 0x198, 0x196, 0x3, 0x2, 0x2, 0x2, 0x198, 
    0x199, 0x3, 0x2, 0x2, 0x2, 0x199, 0x15, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x198, 
    0x3, 0x2, 0x2, 0x2, 0x19b, 0x19d, 0x7, 0x2c, 0x2, 0x2, 0x19c, 0x19e, 
    0x5, 0x18, 0xd, 0x2, 0x19d, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 
    0x3, 0x2, 0x2, 0x2, 0x19f, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a0, 
    0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a3, 
    0x5, 0x16, 0xc, 0x2, 0x1a2, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a6, 
    0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 
    0x3, 0x2, 0x2, 0x2, 0x1a5, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a4, 0x3, 
    0x2, 0x2, 0x2, 0x1a7, 0x1a9, 0x7, 0x46, 0x2, 0x2, 0x1a8, 0x1a7, 0x3, 
    0x2, 0x2, 0x2, 0x1a9, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1a8, 0x3, 
    0x2, 0x2, 0x2, 0x1aa, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1b0, 0x3, 
    0x2, 0x2, 0x2, 0x1ac, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1af, 0x7, 
    0x40, 0x2, 0x2, 0x1ae, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b2, 0x3, 
    0x2, 0x2, 0x2, 0x1b0, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b1, 0x3, 
    0x2, 0x2, 0x2, 0x1b1, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b0, 0x3, 
    0x2, 0x2, 0x2, 0x1b3, 0x1b4, 0x7, 0x50, 0x2, 0x2, 0x1b4, 0x1b5, 0x7, 
    0x21, 0x2, 0x2, 0x1b5, 0x1b9, 0x7, 0x1f, 0x2, 0x2, 0x1b6, 0x1b8, 0x7, 
    0x41, 0x2, 0x2, 0x1b7, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1bb, 0x3, 
    0x2, 0x2, 0x2, 0x1b9, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x3, 
    0x2, 0x2, 0x2, 0x1ba, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1b9, 0x3, 
    0x2, 0x2, 0x2, 0x1bc, 0x1be, 0x7, 0x22, 0x2, 0x2, 0x1bd, 0x1bc, 0x3, 
    0x2, 0x2, 0x2, 0x1be, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1bd, 0x3, 
    0x2, 0x2, 0x2, 0x1bf, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c8, 0x3, 
    0x2, 0x2, 0x2, 0x1c1, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c3, 0x7, 
    0x3, 0x2, 0x2, 0x1c3, 0x1c7, 0x5, 0x18, 0xd, 0x2, 0x1c4, 0x1c5, 0x7, 
    0x4, 0x2, 0x2, 0x1c5, 0x1c7, 0x5, 0x18, 0xd, 0x2, 0x1c6, 0x1c2, 0x3, 
    0x2, 0x2, 0x2, 0x1c6, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1ca, 0x3, 
    0x2, 0x2, 0x2, 0x1c8, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 0x3, 
    0x2, 0x2, 0x2, 0x1c9, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1c8, 0x3, 
    0x2, 0x2, 0x2, 0x1cb, 0x1cd, 0x7, 0x46, 0x2, 0x2, 0x1cc, 0x1cb, 0x3, 
    0x2, 0x2, 0x2, 0x1cd, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cc, 0x3, 
    0x2, 0x2, 0x2, 0x1ce, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d4, 0x3, 
    0x2, 0x2, 0x2, 0x1d0, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1d3, 0x7, 
    0x40, 0x2, 0x2, 0x1d2, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d6, 0x3, 
    0x2, 0x2, 0x2, 0x1d4, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0x3, 
    0x2, 0x2, 0x2, 0x1d5, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d4, 0x3, 
    0x2, 0x2, 0x2, 0x1d7, 0x1d8, 0x7, 0x33, 0x2, 0x2, 0x1d8, 0x1d9, 0x7, 
    0x40, 0x2, 0x2, 0x1d9, 0x1da, 0x7, 0x50, 0x2, 0x2, 0x1da, 0x1db, 0x7, 
    0x41, 0x2, 0x2, 0x1db, 0x1dc, 0x7, 0x21, 0x2, 0x2, 0x1dc, 0x1e0, 0x7, 
    0x1f, 0x2, 0x2, 0x1dd, 0x1df, 0x7, 0x41, 0x2, 0x2, 0x1de, 0x1dd, 0x3, 
    0x2, 0x2, 0x2, 0x1df, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1de, 0x3, 
    0x2, 0x2, 0x2, 0x1e0, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e6, 0x3, 
    0x2, 0x2, 0x2, 0x1e2, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e5, 0x7, 
    0x22, 0x2, 0x2, 0x1e4, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e8, 0x3, 
    0x2, 0x2, 0x2, 0x1e6, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x3, 
    0x2, 0x2, 0x2, 0x1e7, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e6, 0x3, 
    0x2, 0x2, 0x2, 0x1e9, 0x1ea, 0x7, 0x3, 0x2, 0x2, 0x1ea, 0x1ee, 0x5, 
    0x18, 0xd, 0x2, 0x1eb, 0x1ec, 0x7, 0x4, 0x2, 0x2, 0x1ec, 0x1ee, 0x5, 
    0x18, 0xd, 0x2, 0x1ed, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1eb, 0x3, 
    0x2, 0x2, 0x2, 0x1ee, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1ed, 0x3, 
    0x2, 0x2, 0x2, 0x1ef, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f3, 0x3, 
    0x2, 0x2, 0x2, 0x1f1, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1aa, 0x3, 
    0x2, 0x2, 0x2, 0x1f2, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0x1f4, 0x1f6, 0x7, 0x22, 0x2, 0x2, 0x1f5, 0x1f4, 0x3, 0x2, 
    0x2, 0x2, 0x1f6, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f5, 0x3, 0x2, 
    0x2, 0x2, 0x1f7, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1fa, 0x3, 0x2, 
    0x2, 0x2, 0x1f9, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fe, 0x7, 0x31, 
    0x2, 0x2, 0x1fb, 0x1fd, 0x5, 0x1c, 0xf, 0x2, 0x1fc, 0x1fb, 0x3, 0x2, 
    0x2, 0x2, 0x1fd, 0x200, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1fc, 0x3, 0x2, 
    0x2, 0x2, 0x1fe, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x204, 0x3, 0x2, 
    0x2, 0x2, 0x200, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x201, 0x203, 0x7, 0x22, 
    0x2, 0x2, 0x202, 0x201, 0x3, 0x2, 0x2, 0x2, 0x203, 0x206, 0x3, 0x2, 
    0x2, 0x2, 0x204, 0x202, 0x3, 0x2, 0x2, 0x2, 0x204, 0x205, 0x3, 0x2, 
    0x2, 0x2, 0x205, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x206, 0x204, 0x3, 0x2, 0x2, 
    0x2, 0x207, 0x209, 0x7, 0x22, 0x2, 0x2, 0x208, 0x207, 0x3, 0x2, 0x2, 
    0x2, 0x209, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x208, 0x3, 0x2, 0x2, 
    0x2, 0x20a, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x210, 0x3, 0x2, 0x2, 
    0x2, 0x20c, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20f, 0x7, 0x46, 0x2, 
    0x2, 0x20e, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x212, 0x3, 0x2, 0x2, 
    0x2, 0x210, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x210, 0x211, 0x3, 0x2, 0x2, 
    0x2, 0x211, 0x216, 0x3, 0x2, 0x2, 0x2, 0x212, 0x210, 0x3, 0x2, 0x2, 
    0x2, 0x213, 0x215, 0x7, 0x40, 0x2, 0x2, 0x214, 0x213, 0x3, 0x2, 0x2, 
    0x2, 0x215, 0x218, 0x3, 0x2, 0x2, 0x2, 0x216, 0x214, 0x3, 0x2, 0x2, 
    0x2, 0x216, 0x217, 0x3, 0x2, 0x2, 0x2, 0x217, 0x21c, 0x3, 0x2, 0x2, 
    0x2, 0x218, 0x216, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21b, 0x5, 0x1e, 0x10, 
    0x2, 0x21a, 0x219, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21e, 0x3, 0x2, 0x2, 
    0x2, 0x21c, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21d, 0x3, 0x2, 0x2, 
    0x2, 0x21d, 0x222, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21c, 0x3, 0x2, 0x2, 
    0x2, 0x21f, 0x221, 0x7, 0x40, 0x2, 0x2, 0x220, 0x21f, 0x3, 0x2, 0x2, 
    0x2, 0x221, 0x224, 0x3, 0x2, 0x2, 0x2, 0x222, 0x220, 0x3, 0x2, 0x2, 
    0x2, 0x222, 0x223, 0x3, 0x2, 0x2, 0x2, 0x223, 0x225, 0x3, 0x2, 0x2, 
    0x2, 0x224, 0x222, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x7, 0x32, 0x2, 
    0x2, 0x226, 0x227, 0x7, 0x5, 0x2, 0x2, 0x227, 0x228, 0x5, 0x20, 0x11, 
    0x2, 0x228, 0x229, 0x7, 0x6, 0x2, 0x2, 0x229, 0x22a, 0x7, 0x7, 0x2, 
    0x2, 0x22a, 0x22b, 0x7, 0x1f, 0x2, 0x2, 0x22b, 0x22c, 0x7, 0x7, 0x2, 
    0x2, 0x22c, 0x230, 0x7, 0x50, 0x2, 0x2, 0x22d, 0x22f, 0x7, 0x41, 0x2, 
    0x2, 0x22e, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x232, 0x3, 0x2, 0x2, 
    0x2, 0x230, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x230, 0x231, 0x3, 0x2, 0x2, 
    0x2, 0x231, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x232, 0x230, 0x3, 0x2, 0x2, 
    0x2, 0x233, 0x236, 0x9, 0x2, 0x2, 0x2, 0x234, 0x237, 0x5, 0x18, 0xd, 
    0x2, 0x235, 0x237, 0x5, 0x1c, 0xf, 0x2, 0x236, 0x234, 0x3, 0x2, 0x2, 
    0x2, 0x236, 0x235, 0x3, 0x2, 0x2, 0x2, 0x237, 0x239, 0x3, 0x2, 0x2, 
    0x2, 0x238, 0x233, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23c, 0x3, 0x2, 0x2, 
    0x2, 0x23a, 0x238, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23b, 0x3, 0x2, 0x2, 
    0x2, 0x23b, 0x240, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23a, 0x3, 0x2, 0x2, 
    0x2, 0x23d, 0x23f, 0x7, 0x41, 0x2, 0x2, 0x23e, 0x23d, 0x3, 0x2, 0x2, 
    0x2, 0x23f, 0x242, 0x3, 0x2, 0x2, 0x2, 0x240, 0x23e, 0x3, 0x2, 0x2, 
    0x2, 0x240, 0x241, 0x3, 0x2, 0x2, 0x2, 0x241, 0x27a, 0x3, 0x2, 0x2, 
    0x2, 0x242, 0x240, 0x3, 0x2, 0x2, 0x2, 0x243, 0x245, 0x7, 0x46, 0x2, 
    0x2, 0x244, 0x243, 0x3, 0x2, 0x2, 0x2, 0x245, 0x248, 0x3, 0x2, 0x2, 
    0x2, 0x246, 0x244, 0x3, 0x2, 0x2, 0x2, 0x246, 0x247, 0x3, 0x2, 0x2, 
    0x2, 0x247, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x248, 0x246, 0x3, 0x2, 0x2, 
    0x2, 0x249, 0x24b, 0x7, 0x40, 0x2, 0x2, 0x24a, 0x249, 0x3, 0x2, 0x2, 
    0x2, 0x24b, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24a, 0x3, 0x2, 0x2, 
    0x2, 0x24c, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24f, 0x3, 0x2, 0x2, 
    0x2, 0x24e, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x25a, 0x5, 0x18, 0xd, 
    0x2, 0x250, 0x255, 0x9, 0x2, 0x2, 0x2, 0x251, 0x254, 0x5, 0x18, 0xd, 
    0x2, 0x252, 0x254, 0x5, 0x1c, 0xf, 0x2, 0x253, 0x251, 0x3, 0x2, 0x2, 
    0x2, 0x253, 0x252, 0x3, 0x2, 0x2, 0x2, 0x254, 0x257, 0x3, 0x2, 0x2, 
    0x2, 0x255, 0x253, 0x3, 0x2, 0x2, 0x2, 0x255, 0x256, 0x3, 0x2, 0x2, 
    0x2, 0x256, 0x259, 0x3, 0x2, 0x2, 0x2, 0x257, 0x255, 0x3, 0x2, 0x2, 
    0x2, 0x258, 0x250, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25c, 0x3, 0x2, 0x2, 
    0x2, 0x25a, 0x258, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25b, 0x3, 0x2, 0x2, 
    0x2, 0x25b, 0x260, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25a, 0x3, 0x2, 0x2, 
    0x2, 0x25d, 0x25f, 0x7, 0x41, 0x2, 0x2, 0x25e, 0x25d, 0x3, 0x2, 0x2, 
    0x2, 0x25f, 0x262, 0x3, 0x2, 0x2, 0x2, 0x260, 0x25e, 0x3, 0x2, 0x2, 
    0x2, 0x260, 0x261, 0x3, 0x2, 0x2, 0x2, 0x261, 0x27a, 0x3, 0x2, 0x2, 
    0x2, 0x262, 0x260, 0x3, 0x2, 0x2, 0x2, 0x263, 0x265, 0x7, 0x46, 0x2, 
    0x2, 0x264, 0x263, 0x3, 0x2, 0x2, 0x2, 0x265, 0x268, 0x3, 0x2, 0x2, 
    0x2, 0x266, 0x264, 0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 0x3, 0x2, 0x2, 
    0x2, 0x267, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x268, 0x266, 0x3, 0x2, 0x2, 
    0x2, 0x269, 0x26b, 0x7, 0x40, 0x2, 0x2, 0x26a, 0x269, 0x3, 0x2, 0x2, 
    0x2, 0x26b, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26a, 0x3, 0x2, 0x2, 
    0x2, 0x26c, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26f, 0x3, 0x2, 0x2, 
    0x2, 0x26e, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x270, 0x5, 0x20, 0x11, 
    0x2, 0x270, 0x271, 0x7, 0x40, 0x2, 0x2, 0x271, 0x272, 0x7, 0x50, 0x2, 
    0x2, 0x272, 0x276, 0x7, 0x41, 0x2, 0x2, 0x273, 0x275, 0x7, 0x41, 0x2, 
    0x2, 0x274, 0x273, 0x3, 0x2, 0x2, 0x2, 0x275, 0x278, 0x3, 0x2, 0x2, 
    0x2, 0x276, 0x274, 0x3, 0x2, 0x2, 0x2, 0x276, 0x277, 0x3, 0x2, 0x2, 
    0x2, 0x277, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x278, 0x276, 0x3, 0x2, 0x2, 
    0x2, 0x279, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x279, 0x246, 0x3, 0x2, 0x2, 
    0x2, 0x279, 0x266, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x27b, 0x27c, 0x9, 0x3, 0x2, 0x2, 0x27c, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x27d, 
    0x27e, 0x9, 0x4, 0x2, 0x2, 0x27e, 0x21, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x281, 
    0x7, 0x22, 0x2, 0x2, 0x280, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x281, 0x284, 
    0x3, 0x2, 0x2, 0x2, 0x282, 0x280, 0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 
    0x3, 0x2, 0x2, 0x2, 0x283, 0x285, 0x3, 0x2, 0x2, 0x2, 0x284, 0x282, 
    0x3, 0x2, 0x2, 0x2, 0x285, 0x286, 0x7, 0x12, 0x2, 0x2, 0x286, 0x28a, 
    0x7, 0x50, 0x2, 0x2, 0x287, 0x289, 0x7, 0x22, 0x2, 0x2, 0x288, 0x287, 
    0x3, 0x2, 0x2, 0x2, 0x289, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x288, 
    0x3, 0x2, 0x2, 0x2, 0x28a, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0x28c, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x28f, 0x7, 
    0x22, 0x2, 0x2, 0x28e, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x292, 0x3, 
    0x2, 0x2, 0x2, 0x290, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x290, 0x291, 0x3, 
    0x2, 0x2, 0x2, 0x291, 0x293, 0x3, 0x2, 0x2, 0x2, 0x292, 0x290, 0x3, 
    0x2, 0x2, 0x2, 0x293, 0x297, 0x9, 0x5, 0x2, 0x2, 0x294, 0x296, 0x7, 
    0x22, 0x2, 0x2, 0x295, 0x294, 0x3, 0x2, 0x2, 0x2, 0x296, 0x299, 0x3, 
    0x2, 0x2, 0x2, 0x297, 0x295, 0x3, 0x2, 0x2, 0x2, 0x297, 0x298, 0x3, 
    0x2, 0x2, 0x2, 0x298, 0x25, 0x3, 0x2, 0x2, 0x2, 0x299, 0x297, 0x3, 0x2, 
    0x2, 0x2, 0x29a, 0x29c, 0x7, 0x22, 0x2, 0x2, 0x29b, 0x29a, 0x3, 0x2, 
    0x2, 0x2, 0x29c, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x29b, 0x3, 0x2, 
    0x2, 0x2, 0x29d, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x2a0, 0x3, 0x2, 
    0x2, 0x2, 0x29f, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2a1, 0x7, 0x13, 
    0x2, 0x2, 0x2a1, 0x2a5, 0x9, 0x6, 0x2, 0x2, 0x2a2, 0x2a4, 0x7, 0x22, 
    0x2, 0x2, 0x2a3, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a7, 0x3, 0x2, 
    0x2, 0x2, 0x2a5, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a6, 0x3, 0x2, 
    0x2, 0x2, 0x2a6, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2a5, 0x3, 0x2, 0x2, 
    0x2, 0x2a8, 0x2aa, 0x7, 0x22, 0x2, 0x2, 0x2a9, 0x2a8, 0x3, 0x2, 0x2, 
    0x2, 0x2aa, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2a9, 0x3, 0x2, 0x2, 
    0x2, 0x2ab, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2ae, 0x3, 0x2, 0x2, 
    0x2, 0x2ad, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2d4, 0x7, 0x2d, 0x2, 
    0x2, 0x2af, 0x2b1, 0x7, 0x50, 0x2, 0x2, 0x2b0, 0x2b2, 0x7, 0x22, 0x2, 
    0x2, 0x2b1, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b3, 0x3, 0x2, 0x2, 
    0x2, 0x2b3, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b4, 0x3, 0x2, 0x2, 
    0x2, 0x2b4, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b9, 0x7, 0x50, 0x2, 
    0x2, 0x2b6, 0x2b8, 0x7, 0x22, 0x2, 0x2, 0x2b7, 0x2b6, 0x3, 0x2, 0x2, 
    0x2, 0x2b8, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2b7, 0x3, 0x2, 0x2, 
    0x2, 0x2b9, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2bc, 0x3, 0x2, 0x2, 
    0x2, 0x2bb, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2c0, 0x7, 0x3e, 0x2, 
    0x2, 0x2bd, 0x2bf, 0x7, 0x22, 0x2, 0x2, 0x2be, 0x2bd, 0x3, 0x2, 0x2, 
    0x2, 0x2bf, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2be, 0x3, 0x2, 0x2, 
    0x2, 0x2c0, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2ce, 0x3, 0x2, 0x2, 
    0x2, 0x2c2, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c4, 0x7, 0x50, 0x2, 
    0x2, 0x2c4, 0x2c5, 0x7, 0x42, 0x2, 0x2, 0x2c5, 0x2c9, 0x9, 0x7, 0x2, 
    0x2, 0x2c6, 0x2c8, 0x7, 0x22, 0x2, 0x2, 0x2c7, 0x2c6, 0x3, 0x2, 0x2, 
    0x2, 0x2c8, 0x2cb, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2c7, 0x3, 0x2, 0x2, 
    0x2, 0x2c9, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cd, 0x3, 0x2, 0x2, 
    0x2, 0x2cb, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2c3, 0x3, 0x2, 0x2, 
    0x2, 0x2cd, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2cc, 0x3, 0x2, 0x2, 
    0x2, 0x2ce, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2d1, 0x3, 0x2, 0x2, 
    0x2, 0x2d0, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d3, 0x7, 0x3f, 0x2, 
    0x2, 0x2d2, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2b5, 0x3, 0x2, 0x2, 
    0x2, 0x2d3, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d2, 0x3, 0x2, 0x2, 
    0x2, 0x2d4, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2da, 0x3, 0x2, 0x2, 
    0x2, 0x2d6, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d9, 0x7, 0x22, 0x2, 
    0x2, 0x2d8, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2dc, 0x3, 0x2, 0x2, 
    0x2, 0x2da, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2db, 0x3, 0x2, 0x2, 
    0x2, 0x2db, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2da, 0x3, 0x2, 0x2, 0x2, 
    0x2dd, 0x2df, 0x7, 0x22, 0x2, 0x2, 0x2de, 0x2dd, 0x3, 0x2, 0x2, 0x2, 
    0x2df, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2de, 0x3, 0x2, 0x2, 0x2, 
    0x2e0, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2e3, 0x3, 0x2, 0x2, 0x2, 
    0x2e2, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x309, 0x7, 0x2e, 0x2, 0x2, 
    0x2e4, 0x2e6, 0x7, 0x50, 0x2, 0x2, 0x2e5, 0x2e7, 0x7, 0x22, 0x2, 0x2, 
    0x2e6, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2e8, 0x3, 0x2, 0x2, 0x2, 
    0x2e8, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2e9, 0x3, 0x2, 0x2, 0x2, 
    0x2e9, 0x308, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2ee, 0x7, 0x50, 0x2, 0x2, 
    0x2eb, 0x2ed, 0x7, 0x22, 0x2, 0x2, 0x2ec, 0x2eb, 0x3, 0x2, 0x2, 0x2, 
    0x2ed, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2ec, 0x3, 0x2, 0x2, 0x2, 
    0x2ee, 0x2ef, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2f1, 0x3, 0x2, 0x2, 0x2, 
    0x2f0, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f5, 0x7, 0x3e, 0x2, 0x2, 
    0x2f2, 0x2f4, 0x7, 0x22, 0x2, 0x2, 0x2f3, 0x2f2, 0x3, 0x2, 0x2, 0x2, 
    0x2f4, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f3, 0x3, 0x2, 0x2, 0x2, 
    0x2f5, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x303, 0x3, 0x2, 0x2, 0x2, 
    0x2f7, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f9, 0x7, 0x50, 0x2, 0x2, 
    0x2f9, 0x2fa, 0x7, 0x42, 0x2, 0x2, 0x2fa, 0x2fe, 0x9, 0x7, 0x2, 0x2, 
    0x2fb, 0x2fd, 0x7, 0x22, 0x2, 0x2, 0x2fc, 0x2fb, 0x3, 0x2, 0x2, 0x2, 
    0x2fd, 0x300, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x2fc, 0x3, 0x2, 0x2, 0x2, 
    0x2fe, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x302, 0x3, 0x2, 0x2, 0x2, 
    0x300, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2f8, 0x3, 0x2, 0x2, 0x2, 
    0x302, 0x305, 0x3, 0x2, 0x2, 0x2, 0x303, 0x301, 0x3, 0x2, 0x2, 0x2, 
    0x303, 0x304, 0x3, 0x2, 0x2, 0x2, 0x304, 0x306, 0x3, 0x2, 0x2, 0x2, 
    0x305, 0x303, 0x3, 0x2, 0x2, 0x2, 0x306, 0x308, 0x7, 0x3f, 0x2, 0x2, 
    0x307, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x307, 0x2ea, 0x3, 0x2, 0x2, 0x2, 
    0x308, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x309, 0x307, 0x3, 0x2, 0x2, 0x2, 
    0x309, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x30f, 0x3, 0x2, 0x2, 0x2, 
    0x30b, 0x309, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x30e, 0x7, 0x22, 0x2, 0x2, 
    0x30d, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x30e, 0x311, 0x3, 0x2, 0x2, 0x2, 
    0x30f, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x310, 0x3, 0x2, 0x2, 0x2, 
    0x310, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x311, 0x30f, 0x3, 0x2, 0x2, 0x2, 0x312, 
    0x314, 0x7, 0x22, 0x2, 0x2, 0x313, 0x312, 0x3, 0x2, 0x2, 0x2, 0x314, 
    0x317, 0x3, 0x2, 0x2, 0x2, 0x315, 0x313, 0x3, 0x2, 0x2, 0x2, 0x315, 
    0x316, 0x3, 0x2, 0x2, 0x2, 0x316, 0x318, 0x3, 0x2, 0x2, 0x2, 0x317, 
    0x315, 0x3, 0x2, 0x2, 0x2, 0x318, 0x319, 0x7, 0x35, 0x2, 0x2, 0x319, 
    0x31d, 0x7, 0x51, 0x2, 0x2, 0x31a, 0x31c, 0x7, 0x22, 0x2, 0x2, 0x31b, 
    0x31a, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x31d, 
    0x31b, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x31e, 
    0x320, 0x3, 0x2, 0x2, 0x2, 0x31f, 0x31d, 0x3, 0x2, 0x2, 0x2, 0x320, 
    0x324, 0x7, 0x3e, 0x2, 0x2, 0x321, 0x323, 0x7, 0x22, 0x2, 0x2, 0x322, 
    0x321, 0x3, 0x2, 0x2, 0x2, 0x323, 0x326, 0x3, 0x2, 0x2, 0x2, 0x324, 
    0x322, 0x3, 0x2, 0x2, 0x2, 0x324, 0x325, 0x3, 0x2, 0x2, 0x2, 0x325, 
    0x332, 0x3, 0x2, 0x2, 0x2, 0x326, 0x324, 0x3, 0x2, 0x2, 0x2, 0x327, 
    0x328, 0x7, 0x36, 0x2, 0x2, 0x328, 0x329, 0x7, 0x42, 0x2, 0x2, 0x329, 
    0x32d, 0x7, 0x1f, 0x2, 0x2, 0x32a, 0x32c, 0x7, 0x22, 0x2, 0x2, 0x32b, 
    0x32a, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x32d, 
    0x32b, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x32e, 
    0x331, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x330, 
    0x327, 0x3, 0x2, 0x2, 0x2, 0x331, 0x334, 0x3, 0x2, 0x2, 0x2, 0x332, 
    0x330, 0x3, 0x2, 0x2, 0x2, 0x332, 0x333, 0x3, 0x2, 0x2, 0x2, 0x333, 
    0x335, 0x3, 0x2, 0x2, 0x2, 0x334, 0x332, 0x3, 0x2, 0x2, 0x2, 0x335, 
    0x339, 0x7, 0x3f, 0x2, 0x2, 0x336, 0x338, 0x7, 0x22, 0x2, 0x2, 0x337, 
    0x336, 0x3, 0x2, 0x2, 0x2, 0x338, 0x33b, 0x3, 0x2, 0x2, 0x2, 0x339, 
    0x337, 0x3, 0x2, 0x2, 0x2, 0x339, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x33a, 
    0x2d, 0x3, 0x2, 0x2, 0x2, 0x33b, 0x339, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x31, 
    0x38, 0x48, 0x4d, 0x54, 0x58, 0x5e, 0x6d, 0x72, 0x77, 0x7f, 0x87, 0x8d, 
    0x94, 0x9d, 0xa0, 0xab, 0xad, 0xb1, 0xb6, 0xbc, 0xc4, 0xca, 0xd1, 0xda, 
    0xdd, 0xe7, 0xe9, 0xed, 0xf2, 0xf8, 0x100, 0x106, 0x10d, 0x116, 0x119, 
    0x121, 0x123, 0x127, 0x12c, 0x132, 0x137, 0x13c, 0x142, 0x149, 0x150, 
    0x156, 0x15c, 0x163, 0x169, 0x170, 0x177, 0x17d, 0x183, 0x18a, 0x190, 
    0x198, 0x19f, 0x1a4, 0x1aa, 0x1b0, 0x1b9, 0x1bf, 0x1c6, 0x1c8, 0x1ce, 
    0x1d4, 0x1e0, 0x1e6, 0x1ed, 0x1ef, 0x1f2, 0x1f7, 0x1fe, 0x204, 0x20a, 
    0x210, 0x216, 0x21c, 0x222, 0x230, 0x236, 0x23a, 0x240, 0x246, 0x24c, 
    0x253, 0x255, 0x25a, 0x260, 0x266, 0x26c, 0x276, 0x279, 0x282, 0x28a, 
    0x290, 0x297, 0x29d, 0x2a5, 0x2ab, 0x2b3, 0x2b9, 0x2c0, 0x2c9, 0x2ce, 
    0x2d2, 0x2d4, 0x2da, 0x2e0, 0x2e8, 0x2ee, 0x2f5, 0x2fe, 0x303, 0x307, 
    0x309, 0x30f, 0x315, 0x31d, 0x324, 0x32d, 0x332, 0x339, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ALFAParser::Initializer ALFAParser::_init;
