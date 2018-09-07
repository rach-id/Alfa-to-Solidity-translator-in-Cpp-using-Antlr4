
// Generated from ALFA.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  ALFALexer : public antlr4::Lexer {
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

  ALFALexer(antlr4::CharStream *input);
  ~ALFALexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

