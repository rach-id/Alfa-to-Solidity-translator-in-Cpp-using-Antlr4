
// Generated from /home/sweexordious/Desktop/taaatata/Internship2018/Antlr_API/GitCommits/Antlr_Cpp_RandomCoding/grammar/ALFA.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  ALFALexer : public antlr4::Lexer {
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
    STRING = 80, ANY = 81
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

}  // namespace antlrcpptest
