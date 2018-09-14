// Generated from ALFA.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class ALFAParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		BlockComment=18, LineComment=19, COMPARE=20, NEWLINE=21, WHITESPACE=22, 
		NUMBER=23, BOOL=24, NAMESPACE=25, POLICYSET=26, POLICY=27, RULE=28, PERMIT=29, 
		DENY=30, TARGET=31, CLAUSE=32, ADVICE=33, OBLIGATION=34, ONPERMIT=35, 
		ONDENY=36, CONDITION=37, FUNCTION=38, BAGFUNCTION=39, COMMENT=40, ATTRIBUTE=41, 
		IDENTIFIERS=42, ID=43, TYPE=44, CATEGORY=45, FUNCTIONTYPE=46, FUNCTIONNAME=47, 
		PLUS=48, MINUS=49, DIV=50, MULTIPLY=51, RIGHTCBRACKET=52, LEFTCBRACKET=53, 
		RIGHTPAREN=54, LEFTPAREN=55, ASSIGN=56, MOD=57, AND=58, OR=59, NOT=60, 
		LESS=61, GREATER=62, CARET=63, EQUAL=64, NOTEQUAL=65, LESSEQUAL=66, GREATEREQUAL=67, 
		ANDAND=68, OROR=69, TARGETRESSOURCE=70, WORD=71, STRING=72;
	public static final int
		RULE_translationunit = 0, RULE_declarationseq = 1, RULE_namespaceDefinition = 2, 
		RULE_policysetDefinition = 3, RULE_policyDefinition = 4, RULE_ruleDefinition = 5, 
		RULE_onBlock = 6, RULE_onPermitBlock = 7, RULE_onDenyBlock = 8, RULE_targetDefinition = 9, 
		RULE_clauseDefinition = 10, RULE_booleenExpression = 11, RULE_conditionDefinition = 12, 
		RULE_condition = 13, RULE_importDefinition = 14, RULE_permitdeny = 15, 
		RULE_combiningAlgorithm = 16, RULE_adviceDefinition = 17, RULE_obligationDefinition = 18, 
		RULE_attributeDefinition = 19, RULE_value = 20, RULE_lAND = 21, RULE_lOR = 22;
	public static final String[] ruleNames = {
		"translationunit", "declarationseq", "namespaceDefinition", "policysetDefinition", 
		"policyDefinition", "ruleDefinition", "onBlock", "onPermitBlock", "onDenyBlock", 
		"targetDefinition", "clauseDefinition", "booleenExpression", "conditionDefinition", 
		"condition", "importDefinition", "permitdeny", "combiningAlgorithm", "adviceDefinition", 
		"obligationDefinition", "attributeDefinition", "value", "lAND", "lOR"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'['", "']'", "','", "'import'", "'apply'", "'denyOverrides'", "'permitOverrides'", 
		"'firstApplicable'", "'onlyOneApplicable'", "'orderedDenyOverrides'", 
		"'orderedPermitOverrides'", "'denyUnlessPermit'", "'permitUnlessDeny'", 
		"'onPermitApplySecond'", "':'", "'and'", "'or'", null, null, null, null, 
		null, null, null, "'namespace'", "'policyset'", "'policy'", "'rule'", 
		"'permit'", "'deny'", "'target'", "'clause'", "'advice'", "'obligation'", 
		"'on permit'", "'on deny'", "'condition'", "'function'", null, null, "'attribute'", 
		null, "'id'", "'type'", "'category'", null, null, "'+'", "'-'", "'/'", 
		"'*'", "'{'", "'}'", "'('", "')'", "'='", "'%'", "'&'", "'|'", "'not'", 
		"'<'", "'>'", "'^'", "'=='", "'!='", "'<='", "'>='", "'&&'", "'||'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, null, "BlockComment", "LineComment", "COMPARE", 
		"NEWLINE", "WHITESPACE", "NUMBER", "BOOL", "NAMESPACE", "POLICYSET", "POLICY", 
		"RULE", "PERMIT", "DENY", "TARGET", "CLAUSE", "ADVICE", "OBLIGATION", 
		"ONPERMIT", "ONDENY", "CONDITION", "FUNCTION", "BAGFUNCTION", "COMMENT", 
		"ATTRIBUTE", "IDENTIFIERS", "ID", "TYPE", "CATEGORY", "FUNCTIONTYPE", 
		"FUNCTIONNAME", "PLUS", "MINUS", "DIV", "MULTIPLY", "RIGHTCBRACKET", "LEFTCBRACKET", 
		"RIGHTPAREN", "LEFTPAREN", "ASSIGN", "MOD", "AND", "OR", "NOT", "LESS", 
		"GREATER", "CARET", "EQUAL", "NOTEQUAL", "LESSEQUAL", "GREATEREQUAL", 
		"ANDAND", "OROR", "TARGETRESSOURCE", "WORD", "STRING"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "ALFA.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public ALFAParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class TranslationunitContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(ALFAParser.EOF, 0); }
		public List<DeclarationseqContext> declarationseq() {
			return getRuleContexts(DeclarationseqContext.class);
		}
		public DeclarationseqContext declarationseq(int i) {
			return getRuleContext(DeclarationseqContext.class,i);
		}
		public TranslationunitContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_translationunit; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterTranslationunit(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitTranslationunit(this);
		}
	}

	public final TranslationunitContext translationunit() throws RecognitionException {
		TranslationunitContext _localctx = new TranslationunitContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_translationunit);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(47); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(46);
				declarationseq();
				}
				}
				setState(49); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__3) | (1L << T__4) | (1L << NEWLINE) | (1L << NAMESPACE) | (1L << POLICYSET) | (1L << POLICY) | (1L << PERMIT) | (1L << DENY) | (1L << TARGET) | (1L << ONPERMIT) | (1L << ONDENY) | (1L << CONDITION) | (1L << BAGFUNCTION) | (1L << COMMENT) | (1L << ATTRIBUTE) | (1L << RIGHTPAREN) | (1L << NOT))) != 0) || _la==TARGETRESSOURCE );
			setState(51);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationseqContext extends ParserRuleContext {
		public List<TerminalNode> NEWLINE() { return getTokens(ALFAParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(ALFAParser.NEWLINE, i);
		}
		public NamespaceDefinitionContext namespaceDefinition() {
			return getRuleContext(NamespaceDefinitionContext.class,0);
		}
		public TerminalNode COMMENT() { return getToken(ALFAParser.COMMENT, 0); }
		public ImportDefinitionContext importDefinition() {
			return getRuleContext(ImportDefinitionContext.class,0);
		}
		public AttributeDefinitionContext attributeDefinition() {
			return getRuleContext(AttributeDefinitionContext.class,0);
		}
		public PolicysetDefinitionContext policysetDefinition() {
			return getRuleContext(PolicysetDefinitionContext.class,0);
		}
		public PolicyDefinitionContext policyDefinition() {
			return getRuleContext(PolicyDefinitionContext.class,0);
		}
		public ConditionDefinitionContext conditionDefinition() {
			return getRuleContext(ConditionDefinitionContext.class,0);
		}
		public TargetDefinitionContext targetDefinition() {
			return getRuleContext(TargetDefinitionContext.class,0);
		}
		public CombiningAlgorithmContext combiningAlgorithm() {
			return getRuleContext(CombiningAlgorithmContext.class,0);
		}
		public OnBlockContext onBlock() {
			return getRuleContext(OnBlockContext.class,0);
		}
		public PermitdenyContext permitdeny() {
			return getRuleContext(PermitdenyContext.class,0);
		}
		public BooleenExpressionContext booleenExpression() {
			return getRuleContext(BooleenExpressionContext.class,0);
		}
		public DeclarationseqContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declarationseq; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterDeclarationseq(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitDeclarationseq(this);
		}
	}

	public final DeclarationseqContext declarationseq() throws RecognitionException {
		DeclarationseqContext _localctx = new DeclarationseqContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_declarationseq);
		try {
			int _alt;
			setState(72);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(56);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(53);
						match(NEWLINE);
						}
						} 
					}
					setState(58);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
				}
				setState(59);
				match(NEWLINE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(60);
				namespaceDefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(61);
				match(COMMENT);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(62);
				importDefinition();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(63);
				attributeDefinition();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(64);
				policysetDefinition();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(65);
				policyDefinition();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(66);
				conditionDefinition();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(67);
				targetDefinition();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(68);
				combiningAlgorithm();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(69);
				onBlock();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(70);
				permitdeny();
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(71);
				booleenExpression();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NamespaceDefinitionContext extends ParserRuleContext {
		public TerminalNode NAMESPACE() { return getToken(ALFAParser.NAMESPACE, 0); }
		public TerminalNode RIGHTCBRACKET() { return getToken(ALFAParser.RIGHTCBRACKET, 0); }
		public TerminalNode LEFTCBRACKET() { return getToken(ALFAParser.LEFTCBRACKET, 0); }
		public TerminalNode WORD() { return getToken(ALFAParser.WORD, 0); }
		public List<TerminalNode> NEWLINE() { return getTokens(ALFAParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(ALFAParser.NEWLINE, i);
		}
		public List<NamespaceDefinitionContext> namespaceDefinition() {
			return getRuleContexts(NamespaceDefinitionContext.class);
		}
		public NamespaceDefinitionContext namespaceDefinition(int i) {
			return getRuleContext(NamespaceDefinitionContext.class,i);
		}
		public List<TerminalNode> COMMENT() { return getTokens(ALFAParser.COMMENT); }
		public TerminalNode COMMENT(int i) {
			return getToken(ALFAParser.COMMENT, i);
		}
		public List<ImportDefinitionContext> importDefinition() {
			return getRuleContexts(ImportDefinitionContext.class);
		}
		public ImportDefinitionContext importDefinition(int i) {
			return getRuleContext(ImportDefinitionContext.class,i);
		}
		public List<AttributeDefinitionContext> attributeDefinition() {
			return getRuleContexts(AttributeDefinitionContext.class);
		}
		public AttributeDefinitionContext attributeDefinition(int i) {
			return getRuleContext(AttributeDefinitionContext.class,i);
		}
		public List<PolicysetDefinitionContext> policysetDefinition() {
			return getRuleContexts(PolicysetDefinitionContext.class);
		}
		public PolicysetDefinitionContext policysetDefinition(int i) {
			return getRuleContext(PolicysetDefinitionContext.class,i);
		}
		public List<PolicyDefinitionContext> policyDefinition() {
			return getRuleContexts(PolicyDefinitionContext.class);
		}
		public PolicyDefinitionContext policyDefinition(int i) {
			return getRuleContext(PolicyDefinitionContext.class,i);
		}
		public List<ConditionDefinitionContext> conditionDefinition() {
			return getRuleContexts(ConditionDefinitionContext.class);
		}
		public ConditionDefinitionContext conditionDefinition(int i) {
			return getRuleContext(ConditionDefinitionContext.class,i);
		}
		public List<TargetDefinitionContext> targetDefinition() {
			return getRuleContexts(TargetDefinitionContext.class);
		}
		public TargetDefinitionContext targetDefinition(int i) {
			return getRuleContext(TargetDefinitionContext.class,i);
		}
		public List<CombiningAlgorithmContext> combiningAlgorithm() {
			return getRuleContexts(CombiningAlgorithmContext.class);
		}
		public CombiningAlgorithmContext combiningAlgorithm(int i) {
			return getRuleContext(CombiningAlgorithmContext.class,i);
		}
		public List<OnBlockContext> onBlock() {
			return getRuleContexts(OnBlockContext.class);
		}
		public OnBlockContext onBlock(int i) {
			return getRuleContext(OnBlockContext.class,i);
		}
		public List<PermitdenyContext> permitdeny() {
			return getRuleContexts(PermitdenyContext.class);
		}
		public PermitdenyContext permitdeny(int i) {
			return getRuleContext(PermitdenyContext.class,i);
		}
		public List<BooleenExpressionContext> booleenExpression() {
			return getRuleContexts(BooleenExpressionContext.class);
		}
		public BooleenExpressionContext booleenExpression(int i) {
			return getRuleContext(BooleenExpressionContext.class,i);
		}
		public NamespaceDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_namespaceDefinition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterNamespaceDefinition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitNamespaceDefinition(this);
		}
	}

	public final NamespaceDefinitionContext namespaceDefinition() throws RecognitionException {
		NamespaceDefinitionContext _localctx = new NamespaceDefinitionContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_namespaceDefinition);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(77);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(74);
				match(NEWLINE);
				}
				}
				setState(79);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(80);
			match(NAMESPACE);
			setState(88);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NEWLINE:
			case RIGHTCBRACKET:
				{
				setState(84);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==NEWLINE) {
					{
					{
					setState(81);
					match(NEWLINE);
					}
					}
					setState(86);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case WORD:
				{
				setState(87);
				match(WORD);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(90);
			match(RIGHTCBRACKET);
			setState(119);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__3) | (1L << T__4) | (1L << NEWLINE) | (1L << NAMESPACE) | (1L << POLICYSET) | (1L << POLICY) | (1L << PERMIT) | (1L << DENY) | (1L << TARGET) | (1L << ONPERMIT) | (1L << ONDENY) | (1L << CONDITION) | (1L << BAGFUNCTION) | (1L << COMMENT) | (1L << ATTRIBUTE) | (1L << RIGHTPAREN) | (1L << NOT))) != 0) || _la==TARGETRESSOURCE) {
				{
				{
				setState(94);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(91);
						match(NEWLINE);
						}
						} 
					}
					setState(96);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
				}
				setState(109);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
				case 1:
					{
					setState(97);
					namespaceDefinition();
					}
					break;
				case 2:
					{
					setState(98);
					match(COMMENT);
					}
					break;
				case 3:
					{
					setState(99);
					importDefinition();
					}
					break;
				case 4:
					{
					setState(100);
					attributeDefinition();
					}
					break;
				case 5:
					{
					setState(101);
					policysetDefinition();
					}
					break;
				case 6:
					{
					setState(102);
					policyDefinition();
					}
					break;
				case 7:
					{
					setState(103);
					conditionDefinition();
					}
					break;
				case 8:
					{
					setState(104);
					targetDefinition();
					}
					break;
				case 9:
					{
					setState(105);
					combiningAlgorithm();
					}
					break;
				case 10:
					{
					setState(106);
					onBlock();
					}
					break;
				case 11:
					{
					setState(107);
					permitdeny();
					}
					break;
				case 12:
					{
					setState(108);
					booleenExpression();
					}
					break;
				}
				setState(114);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(111);
						match(NEWLINE);
						}
						} 
					}
					setState(116);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
				}
				}
				}
				setState(121);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(122);
			match(LEFTCBRACKET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PolicysetDefinitionContext extends ParserRuleContext {
		public TerminalNode POLICYSET() { return getToken(ALFAParser.POLICYSET, 0); }
		public TerminalNode WORD() { return getToken(ALFAParser.WORD, 0); }
		public TerminalNode RIGHTCBRACKET() { return getToken(ALFAParser.RIGHTCBRACKET, 0); }
		public TerminalNode LEFTCBRACKET() { return getToken(ALFAParser.LEFTCBRACKET, 0); }
		public List<TerminalNode> NEWLINE() { return getTokens(ALFAParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(ALFAParser.NEWLINE, i);
		}
		public TerminalNode ASSIGN() { return getToken(ALFAParser.ASSIGN, 0); }
		public TerminalNode STRING() { return getToken(ALFAParser.STRING, 0); }
		public List<NamespaceDefinitionContext> namespaceDefinition() {
			return getRuleContexts(NamespaceDefinitionContext.class);
		}
		public NamespaceDefinitionContext namespaceDefinition(int i) {
			return getRuleContext(NamespaceDefinitionContext.class,i);
		}
		public List<PolicysetDefinitionContext> policysetDefinition() {
			return getRuleContexts(PolicysetDefinitionContext.class);
		}
		public PolicysetDefinitionContext policysetDefinition(int i) {
			return getRuleContext(PolicysetDefinitionContext.class,i);
		}
		public List<PolicyDefinitionContext> policyDefinition() {
			return getRuleContexts(PolicyDefinitionContext.class);
		}
		public PolicyDefinitionContext policyDefinition(int i) {
			return getRuleContext(PolicyDefinitionContext.class,i);
		}
		public List<RuleDefinitionContext> ruleDefinition() {
			return getRuleContexts(RuleDefinitionContext.class);
		}
		public RuleDefinitionContext ruleDefinition(int i) {
			return getRuleContext(RuleDefinitionContext.class,i);
		}
		public List<ConditionDefinitionContext> conditionDefinition() {
			return getRuleContexts(ConditionDefinitionContext.class);
		}
		public ConditionDefinitionContext conditionDefinition(int i) {
			return getRuleContext(ConditionDefinitionContext.class,i);
		}
		public List<TargetDefinitionContext> targetDefinition() {
			return getRuleContexts(TargetDefinitionContext.class);
		}
		public TargetDefinitionContext targetDefinition(int i) {
			return getRuleContext(TargetDefinitionContext.class,i);
		}
		public List<CombiningAlgorithmContext> combiningAlgorithm() {
			return getRuleContexts(CombiningAlgorithmContext.class);
		}
		public CombiningAlgorithmContext combiningAlgorithm(int i) {
			return getRuleContext(CombiningAlgorithmContext.class,i);
		}
		public List<OnBlockContext> onBlock() {
			return getRuleContexts(OnBlockContext.class);
		}
		public OnBlockContext onBlock(int i) {
			return getRuleContext(OnBlockContext.class,i);
		}
		public PolicysetDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_policysetDefinition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterPolicysetDefinition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitPolicysetDefinition(this);
		}
	}

	public final PolicysetDefinitionContext policysetDefinition() throws RecognitionException {
		PolicysetDefinitionContext _localctx = new PolicysetDefinitionContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_policysetDefinition);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(127);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(124);
				match(NEWLINE);
				}
				}
				setState(129);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(130);
			match(POLICYSET);
			setState(177);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				{
				setState(131);
				match(WORD);
				setState(135);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(132);
						match(NEWLINE);
						}
						} 
					}
					setState(137);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
				}
				}
				break;
			case 2:
				{
				setState(160);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
				case 1:
					{
					setState(141);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(138);
						match(NEWLINE);
						}
						}
						setState(143);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				case 2:
					{
					setState(144);
					match(WORD);
					setState(148);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(145);
						match(NEWLINE);
						}
						}
						setState(150);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				case 3:
					{
					setState(151);
					match(WORD);
					setState(152);
					match(ASSIGN);
					setState(153);
					match(STRING);
					setState(157);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(154);
						match(NEWLINE);
						}
						}
						setState(159);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				}
				setState(162);
				match(RIGHTCBRACKET);
				setState(173);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << NEWLINE) | (1L << NAMESPACE) | (1L << POLICYSET) | (1L << POLICY) | (1L << RULE) | (1L << TARGET) | (1L << ONPERMIT) | (1L << ONDENY) | (1L << CONDITION))) != 0)) {
					{
					setState(171);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
					case 1:
						{
						setState(163);
						namespaceDefinition();
						}
						break;
					case 2:
						{
						setState(164);
						policysetDefinition();
						}
						break;
					case 3:
						{
						setState(165);
						policyDefinition();
						}
						break;
					case 4:
						{
						setState(166);
						ruleDefinition();
						}
						break;
					case 5:
						{
						setState(167);
						conditionDefinition();
						}
						break;
					case 6:
						{
						setState(168);
						targetDefinition();
						}
						break;
					case 7:
						{
						setState(169);
						combiningAlgorithm();
						}
						break;
					case 8:
						{
						setState(170);
						onBlock();
						}
						break;
					}
					}
					setState(175);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(176);
				match(LEFTCBRACKET);
				}
				break;
			}
			setState(182);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,19,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(179);
					match(NEWLINE);
					}
					} 
				}
				setState(184);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,19,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PolicyDefinitionContext extends ParserRuleContext {
		public TerminalNode POLICY() { return getToken(ALFAParser.POLICY, 0); }
		public TerminalNode WORD() { return getToken(ALFAParser.WORD, 0); }
		public TerminalNode RIGHTCBRACKET() { return getToken(ALFAParser.RIGHTCBRACKET, 0); }
		public TerminalNode LEFTCBRACKET() { return getToken(ALFAParser.LEFTCBRACKET, 0); }
		public List<TerminalNode> NEWLINE() { return getTokens(ALFAParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(ALFAParser.NEWLINE, i);
		}
		public TerminalNode ASSIGN() { return getToken(ALFAParser.ASSIGN, 0); }
		public TerminalNode STRING() { return getToken(ALFAParser.STRING, 0); }
		public List<NamespaceDefinitionContext> namespaceDefinition() {
			return getRuleContexts(NamespaceDefinitionContext.class);
		}
		public NamespaceDefinitionContext namespaceDefinition(int i) {
			return getRuleContext(NamespaceDefinitionContext.class,i);
		}
		public List<PolicyDefinitionContext> policyDefinition() {
			return getRuleContexts(PolicyDefinitionContext.class);
		}
		public PolicyDefinitionContext policyDefinition(int i) {
			return getRuleContext(PolicyDefinitionContext.class,i);
		}
		public List<RuleDefinitionContext> ruleDefinition() {
			return getRuleContexts(RuleDefinitionContext.class);
		}
		public RuleDefinitionContext ruleDefinition(int i) {
			return getRuleContext(RuleDefinitionContext.class,i);
		}
		public List<ConditionDefinitionContext> conditionDefinition() {
			return getRuleContexts(ConditionDefinitionContext.class);
		}
		public ConditionDefinitionContext conditionDefinition(int i) {
			return getRuleContext(ConditionDefinitionContext.class,i);
		}
		public List<TargetDefinitionContext> targetDefinition() {
			return getRuleContexts(TargetDefinitionContext.class);
		}
		public TargetDefinitionContext targetDefinition(int i) {
			return getRuleContext(TargetDefinitionContext.class,i);
		}
		public List<CombiningAlgorithmContext> combiningAlgorithm() {
			return getRuleContexts(CombiningAlgorithmContext.class);
		}
		public CombiningAlgorithmContext combiningAlgorithm(int i) {
			return getRuleContext(CombiningAlgorithmContext.class,i);
		}
		public List<OnBlockContext> onBlock() {
			return getRuleContexts(OnBlockContext.class);
		}
		public OnBlockContext onBlock(int i) {
			return getRuleContext(OnBlockContext.class,i);
		}
		public PolicyDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_policyDefinition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterPolicyDefinition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitPolicyDefinition(this);
		}
	}

	public final PolicyDefinitionContext policyDefinition() throws RecognitionException {
		PolicyDefinitionContext _localctx = new PolicyDefinitionContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_policyDefinition);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(188);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(185);
				match(NEWLINE);
				}
				}
				setState(190);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(191);
			match(POLICY);
			setState(237);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
			case 1:
				{
				setState(192);
				match(WORD);
				setState(196);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(193);
						match(NEWLINE);
						}
						} 
					}
					setState(198);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
				}
				}
				break;
			case 2:
				{
				setState(221);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
				case 1:
					{
					setState(202);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(199);
						match(NEWLINE);
						}
						}
						setState(204);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				case 2:
					{
					setState(205);
					match(WORD);
					setState(209);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(206);
						match(NEWLINE);
						}
						}
						setState(211);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				case 3:
					{
					setState(212);
					match(WORD);
					setState(213);
					match(ASSIGN);
					setState(214);
					match(STRING);
					setState(218);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(215);
						match(NEWLINE);
						}
						}
						setState(220);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				}
				setState(223);
				match(RIGHTCBRACKET);
				setState(233);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << NEWLINE) | (1L << NAMESPACE) | (1L << POLICY) | (1L << RULE) | (1L << TARGET) | (1L << ONPERMIT) | (1L << ONDENY) | (1L << CONDITION))) != 0)) {
					{
					setState(231);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,26,_ctx) ) {
					case 1:
						{
						setState(224);
						namespaceDefinition();
						}
						break;
					case 2:
						{
						setState(225);
						policyDefinition();
						}
						break;
					case 3:
						{
						setState(226);
						ruleDefinition();
						}
						break;
					case 4:
						{
						setState(227);
						conditionDefinition();
						}
						break;
					case 5:
						{
						setState(228);
						targetDefinition();
						}
						break;
					case 6:
						{
						setState(229);
						combiningAlgorithm();
						}
						break;
					case 7:
						{
						setState(230);
						onBlock();
						}
						break;
					}
					}
					setState(235);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(236);
				match(LEFTCBRACKET);
				}
				break;
			}
			setState(242);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,29,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(239);
					match(NEWLINE);
					}
					} 
				}
				setState(244);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,29,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RuleDefinitionContext extends ParserRuleContext {
		public TerminalNode RULE() { return getToken(ALFAParser.RULE, 0); }
		public TerminalNode WORD() { return getToken(ALFAParser.WORD, 0); }
		public TerminalNode RIGHTCBRACKET() { return getToken(ALFAParser.RIGHTCBRACKET, 0); }
		public TerminalNode LEFTCBRACKET() { return getToken(ALFAParser.LEFTCBRACKET, 0); }
		public List<TerminalNode> NEWLINE() { return getTokens(ALFAParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(ALFAParser.NEWLINE, i);
		}
		public TerminalNode ASSIGN() { return getToken(ALFAParser.ASSIGN, 0); }
		public TerminalNode STRING() { return getToken(ALFAParser.STRING, 0); }
		public List<RuleDefinitionContext> ruleDefinition() {
			return getRuleContexts(RuleDefinitionContext.class);
		}
		public RuleDefinitionContext ruleDefinition(int i) {
			return getRuleContext(RuleDefinitionContext.class,i);
		}
		public List<ConditionDefinitionContext> conditionDefinition() {
			return getRuleContexts(ConditionDefinitionContext.class);
		}
		public ConditionDefinitionContext conditionDefinition(int i) {
			return getRuleContext(ConditionDefinitionContext.class,i);
		}
		public List<TargetDefinitionContext> targetDefinition() {
			return getRuleContexts(TargetDefinitionContext.class);
		}
		public TargetDefinitionContext targetDefinition(int i) {
			return getRuleContext(TargetDefinitionContext.class,i);
		}
		public List<PermitdenyContext> permitdeny() {
			return getRuleContexts(PermitdenyContext.class);
		}
		public PermitdenyContext permitdeny(int i) {
			return getRuleContext(PermitdenyContext.class,i);
		}
		public List<OnBlockContext> onBlock() {
			return getRuleContexts(OnBlockContext.class);
		}
		public OnBlockContext onBlock(int i) {
			return getRuleContext(OnBlockContext.class,i);
		}
		public RuleDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ruleDefinition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterRuleDefinition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitRuleDefinition(this);
		}
	}

	public final RuleDefinitionContext ruleDefinition() throws RecognitionException {
		RuleDefinitionContext _localctx = new RuleDefinitionContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_ruleDefinition);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(248);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(245);
				match(NEWLINE);
				}
				}
				setState(250);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(251);
			match(RULE);
			setState(295);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
			case 1:
				{
				setState(252);
				match(WORD);
				setState(256);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,31,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(253);
						match(NEWLINE);
						}
						} 
					}
					setState(258);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,31,_ctx);
				}
				}
				break;
			case 2:
				{
				setState(281);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,35,_ctx) ) {
				case 1:
					{
					setState(262);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(259);
						match(NEWLINE);
						}
						}
						setState(264);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				case 2:
					{
					setState(265);
					match(WORD);
					setState(269);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(266);
						match(NEWLINE);
						}
						}
						setState(271);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				case 3:
					{
					setState(272);
					match(WORD);
					setState(273);
					match(ASSIGN);
					setState(274);
					match(STRING);
					setState(278);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(275);
						match(NEWLINE);
						}
						}
						setState(280);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				}
				setState(283);
				match(RIGHTCBRACKET);
				setState(291);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << NEWLINE) | (1L << RULE) | (1L << PERMIT) | (1L << DENY) | (1L << TARGET) | (1L << ONPERMIT) | (1L << ONDENY) | (1L << CONDITION))) != 0)) {
					{
					setState(289);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,36,_ctx) ) {
					case 1:
						{
						setState(284);
						ruleDefinition();
						}
						break;
					case 2:
						{
						setState(285);
						conditionDefinition();
						}
						break;
					case 3:
						{
						setState(286);
						targetDefinition();
						}
						break;
					case 4:
						{
						setState(287);
						permitdeny();
						}
						break;
					case 5:
						{
						setState(288);
						onBlock();
						}
						break;
					}
					}
					setState(293);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(294);
				match(LEFTCBRACKET);
				}
				break;
			}
			setState(300);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,39,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(297);
					match(NEWLINE);
					}
					} 
				}
				setState(302);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,39,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OnBlockContext extends ParserRuleContext {
		public OnPermitBlockContext onPermitBlock() {
			return getRuleContext(OnPermitBlockContext.class,0);
		}
		public OnDenyBlockContext onDenyBlock() {
			return getRuleContext(OnDenyBlockContext.class,0);
		}
		public List<TerminalNode> NEWLINE() { return getTokens(ALFAParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(ALFAParser.NEWLINE, i);
		}
		public OnBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_onBlock; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterOnBlock(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitOnBlock(this);
		}
	}

	public final OnBlockContext onBlock() throws RecognitionException {
		OnBlockContext _localctx = new OnBlockContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_onBlock);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(306);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,40,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(303);
					match(NEWLINE);
					}
					} 
				}
				setState(308);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,40,_ctx);
			}
			setState(311);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,41,_ctx) ) {
			case 1:
				{
				setState(309);
				onPermitBlock();
				}
				break;
			case 2:
				{
				setState(310);
				onDenyBlock();
				}
				break;
			}
			setState(316);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,42,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(313);
					match(NEWLINE);
					}
					} 
				}
				setState(318);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,42,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OnPermitBlockContext extends ParserRuleContext {
		public TerminalNode ONPERMIT() { return getToken(ALFAParser.ONPERMIT, 0); }
		public TerminalNode RIGHTCBRACKET() { return getToken(ALFAParser.RIGHTCBRACKET, 0); }
		public TerminalNode LEFTCBRACKET() { return getToken(ALFAParser.LEFTCBRACKET, 0); }
		public List<TerminalNode> NEWLINE() { return getTokens(ALFAParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(ALFAParser.NEWLINE, i);
		}
		public List<ObligationDefinitionContext> obligationDefinition() {
			return getRuleContexts(ObligationDefinitionContext.class);
		}
		public ObligationDefinitionContext obligationDefinition(int i) {
			return getRuleContext(ObligationDefinitionContext.class,i);
		}
		public OnPermitBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_onPermitBlock; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterOnPermitBlock(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitOnPermitBlock(this);
		}
	}

	public final OnPermitBlockContext onPermitBlock() throws RecognitionException {
		OnPermitBlockContext _localctx = new OnPermitBlockContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_onPermitBlock);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(322);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(319);
				match(NEWLINE);
				}
				}
				setState(324);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(325);
			match(ONPERMIT);
			setState(329);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(326);
				match(NEWLINE);
				}
				}
				setState(331);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(332);
			match(RIGHTCBRACKET);
			setState(336);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,45,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(333);
					match(NEWLINE);
					}
					} 
				}
				setState(338);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,45,_ctx);
			}
			setState(342);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,46,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(339);
					obligationDefinition();
					}
					} 
				}
				setState(344);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,46,_ctx);
			}
			setState(348);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(345);
				match(NEWLINE);
				}
				}
				setState(350);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(351);
			match(LEFTCBRACKET);
			setState(355);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,48,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(352);
					match(NEWLINE);
					}
					} 
				}
				setState(357);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,48,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class OnDenyBlockContext extends ParserRuleContext {
		public TerminalNode ONDENY() { return getToken(ALFAParser.ONDENY, 0); }
		public TerminalNode RIGHTCBRACKET() { return getToken(ALFAParser.RIGHTCBRACKET, 0); }
		public TerminalNode LEFTCBRACKET() { return getToken(ALFAParser.LEFTCBRACKET, 0); }
		public List<TerminalNode> NEWLINE() { return getTokens(ALFAParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(ALFAParser.NEWLINE, i);
		}
		public List<AdviceDefinitionContext> adviceDefinition() {
			return getRuleContexts(AdviceDefinitionContext.class);
		}
		public AdviceDefinitionContext adviceDefinition(int i) {
			return getRuleContext(AdviceDefinitionContext.class,i);
		}
		public OnDenyBlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_onDenyBlock; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterOnDenyBlock(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitOnDenyBlock(this);
		}
	}

	public final OnDenyBlockContext onDenyBlock() throws RecognitionException {
		OnDenyBlockContext _localctx = new OnDenyBlockContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_onDenyBlock);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(361);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(358);
				match(NEWLINE);
				}
				}
				setState(363);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(364);
			match(ONDENY);
			setState(368);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(365);
				match(NEWLINE);
				}
				}
				setState(370);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(371);
			match(RIGHTCBRACKET);
			setState(375);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,51,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(372);
					match(NEWLINE);
					}
					} 
				}
				setState(377);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,51,_ctx);
			}
			setState(381);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,52,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(378);
					adviceDefinition();
					}
					} 
				}
				setState(383);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,52,_ctx);
			}
			setState(387);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(384);
				match(NEWLINE);
				}
				}
				setState(389);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(390);
			match(LEFTCBRACKET);
			setState(394);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,54,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(391);
					match(NEWLINE);
					}
					} 
				}
				setState(396);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,54,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TargetDefinitionContext extends ParserRuleContext {
		public TerminalNode TARGET() { return getToken(ALFAParser.TARGET, 0); }
		public ClauseDefinitionContext clauseDefinition() {
			return getRuleContext(ClauseDefinitionContext.class,0);
		}
		public List<TerminalNode> NEWLINE() { return getTokens(ALFAParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(ALFAParser.NEWLINE, i);
		}
		public TargetDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_targetDefinition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterTargetDefinition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitTargetDefinition(this);
		}
	}

	public final TargetDefinitionContext targetDefinition() throws RecognitionException {
		TargetDefinitionContext _localctx = new TargetDefinitionContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_targetDefinition);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(400);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(397);
				match(NEWLINE);
				}
				}
				setState(402);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(403);
			match(TARGET);
			setState(404);
			clauseDefinition();
			setState(408);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,56,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(405);
					match(NEWLINE);
					}
					} 
				}
				setState(410);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,56,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ClauseDefinitionContext extends ParserRuleContext {
		public TerminalNode CLAUSE() { return getToken(ALFAParser.CLAUSE, 0); }
		public List<BooleenExpressionContext> booleenExpression() {
			return getRuleContexts(BooleenExpressionContext.class);
		}
		public BooleenExpressionContext booleenExpression(int i) {
			return getRuleContext(BooleenExpressionContext.class,i);
		}
		public ClauseDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_clauseDefinition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterClauseDefinition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitClauseDefinition(this);
		}
	}

	public final ClauseDefinitionContext clauseDefinition() throws RecognitionException {
		ClauseDefinitionContext _localctx = new ClauseDefinitionContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_clauseDefinition);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(411);
			match(CLAUSE);
			setState(413); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(412);
					booleenExpression();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(415); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,57,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BooleenExpressionContext extends ParserRuleContext {
		public TerminalNode TARGETRESSOURCE() { return getToken(ALFAParser.TARGETRESSOURCE, 0); }
		public TerminalNode COMPARE() { return getToken(ALFAParser.COMPARE, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public List<TerminalNode> NOT() { return getTokens(ALFAParser.NOT); }
		public TerminalNode NOT(int i) {
			return getToken(ALFAParser.NOT, i);
		}
		public List<TerminalNode> RIGHTPAREN() { return getTokens(ALFAParser.RIGHTPAREN); }
		public TerminalNode RIGHTPAREN(int i) {
			return getToken(ALFAParser.RIGHTPAREN, i);
		}
		public List<TerminalNode> LEFTPAREN() { return getTokens(ALFAParser.LEFTPAREN); }
		public TerminalNode LEFTPAREN(int i) {
			return getToken(ALFAParser.LEFTPAREN, i);
		}
		public List<TerminalNode> NEWLINE() { return getTokens(ALFAParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(ALFAParser.NEWLINE, i);
		}
		public List<LANDContext> lAND() {
			return getRuleContexts(LANDContext.class);
		}
		public LANDContext lAND(int i) {
			return getRuleContext(LANDContext.class,i);
		}
		public List<BooleenExpressionContext> booleenExpression() {
			return getRuleContexts(BooleenExpressionContext.class);
		}
		public BooleenExpressionContext booleenExpression(int i) {
			return getRuleContext(BooleenExpressionContext.class,i);
		}
		public List<LORContext> lOR() {
			return getRuleContexts(LORContext.class);
		}
		public LORContext lOR(int i) {
			return getRuleContext(LORContext.class,i);
		}
		public TerminalNode BAGFUNCTION() { return getToken(ALFAParser.BAGFUNCTION, 0); }
		public BooleenExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_booleenExpression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterBooleenExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitBooleenExpression(this);
		}
	}

	public final BooleenExpressionContext booleenExpression() throws RecognitionException {
		BooleenExpressionContext _localctx = new BooleenExpressionContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_booleenExpression);
		int _la;
		try {
			int _alt;
			setState(496);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,70,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(420);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==NOT) {
					{
					{
					setState(417);
					match(NOT);
					}
					}
					setState(422);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(426);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==RIGHTPAREN) {
					{
					{
					setState(423);
					match(RIGHTPAREN);
					}
					}
					setState(428);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(429);
				match(TARGETRESSOURCE);
				setState(430);
				match(COMPARE);
				setState(431);
				value();
				setState(435);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,60,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(432);
						match(LEFTPAREN);
						}
						} 
					}
					setState(437);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,60,_ctx);
				}
				setState(441);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,61,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(438);
						match(NEWLINE);
						}
						} 
					}
					setState(443);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,61,_ctx);
				}
				setState(452);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,63,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						setState(450);
						_errHandler.sync(this);
						switch (_input.LA(1)) {
						case T__15:
							{
							setState(444);
							lAND();
							setState(445);
							booleenExpression();
							}
							break;
						case T__16:
							{
							setState(447);
							lOR();
							setState(448);
							booleenExpression();
							}
							break;
						default:
							throw new NoViableAltException(this);
						}
						} 
					}
					setState(454);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,63,_ctx);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(458);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==NOT) {
					{
					{
					setState(455);
					match(NOT);
					}
					}
					setState(460);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(464);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==RIGHTPAREN) {
					{
					{
					setState(461);
					match(RIGHTPAREN);
					}
					}
					setState(466);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(467);
				match(BAGFUNCTION);
				setState(468);
				match(RIGHTPAREN);
				setState(469);
				match(TARGETRESSOURCE);
				setState(470);
				match(LEFTPAREN);
				setState(471);
				match(COMPARE);
				setState(472);
				value();
				setState(476);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,66,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(473);
						match(LEFTPAREN);
						}
						} 
					}
					setState(478);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,66,_ctx);
				}
				setState(482);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,67,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(479);
						match(NEWLINE);
						}
						} 
					}
					setState(484);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,67,_ctx);
				}
				setState(493);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,69,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						setState(491);
						_errHandler.sync(this);
						switch (_input.LA(1)) {
						case T__15:
							{
							setState(485);
							lAND();
							setState(486);
							booleenExpression();
							}
							break;
						case T__16:
							{
							setState(488);
							lOR();
							setState(489);
							booleenExpression();
							}
							break;
						default:
							throw new NoViableAltException(this);
						}
						} 
					}
					setState(495);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,69,_ctx);
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConditionDefinitionContext extends ParserRuleContext {
		public TerminalNode CONDITION() { return getToken(ALFAParser.CONDITION, 0); }
		public List<TerminalNode> NEWLINE() { return getTokens(ALFAParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(ALFAParser.NEWLINE, i);
		}
		public List<ConditionContext> condition() {
			return getRuleContexts(ConditionContext.class);
		}
		public ConditionContext condition(int i) {
			return getRuleContext(ConditionContext.class,i);
		}
		public ConditionDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_conditionDefinition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterConditionDefinition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitConditionDefinition(this);
		}
	}

	public final ConditionDefinitionContext conditionDefinition() throws RecognitionException {
		ConditionDefinitionContext _localctx = new ConditionDefinitionContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_conditionDefinition);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(501);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(498);
				match(NEWLINE);
				}
				}
				setState(503);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(504);
			match(CONDITION);
			setState(508);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,72,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(505);
					condition();
					}
					} 
				}
				setState(510);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,72,_ctx);
			}
			setState(514);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,73,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(511);
					match(NEWLINE);
					}
					} 
				}
				setState(516);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,73,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConditionContext extends ParserRuleContext {
		public TerminalNode FUNCTION() { return getToken(ALFAParser.FUNCTION, 0); }
		public TerminalNode FUNCTIONNAME() { return getToken(ALFAParser.FUNCTIONNAME, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public TerminalNode TARGETRESSOURCE() { return getToken(ALFAParser.TARGETRESSOURCE, 0); }
		public List<TerminalNode> NEWLINE() { return getTokens(ALFAParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(ALFAParser.NEWLINE, i);
		}
		public List<TerminalNode> NOT() { return getTokens(ALFAParser.NOT); }
		public TerminalNode NOT(int i) {
			return getToken(ALFAParser.NOT, i);
		}
		public List<TerminalNode> RIGHTPAREN() { return getTokens(ALFAParser.RIGHTPAREN); }
		public TerminalNode RIGHTPAREN(int i) {
			return getToken(ALFAParser.RIGHTPAREN, i);
		}
		public List<TerminalNode> FUNCTIONTYPE() { return getTokens(ALFAParser.FUNCTIONTYPE); }
		public TerminalNode FUNCTIONTYPE(int i) {
			return getToken(ALFAParser.FUNCTIONTYPE, i);
		}
		public List<TerminalNode> LEFTPAREN() { return getTokens(ALFAParser.LEFTPAREN); }
		public TerminalNode LEFTPAREN(int i) {
			return getToken(ALFAParser.LEFTPAREN, i);
		}
		public List<TerminalNode> AND() { return getTokens(ALFAParser.AND); }
		public TerminalNode AND(int i) {
			return getToken(ALFAParser.AND, i);
		}
		public List<TerminalNode> OR() { return getTokens(ALFAParser.OR); }
		public TerminalNode OR(int i) {
			return getToken(ALFAParser.OR, i);
		}
		public List<BooleenExpressionContext> booleenExpression() {
			return getRuleContexts(BooleenExpressionContext.class);
		}
		public BooleenExpressionContext booleenExpression(int i) {
			return getRuleContext(BooleenExpressionContext.class,i);
		}
		public List<ConditionContext> condition() {
			return getRuleContexts(ConditionContext.class);
		}
		public ConditionContext condition(int i) {
			return getRuleContext(ConditionContext.class,i);
		}
		public ConditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_condition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterCondition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitCondition(this);
		}
	}

	public final ConditionContext condition() throws RecognitionException {
		ConditionContext _localctx = new ConditionContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_condition);
		int _la;
		try {
			int _alt;
			setState(631);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,92,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(520);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==NEWLINE) {
					{
					{
					setState(517);
					match(NEWLINE);
					}
					}
					setState(522);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(526);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==NOT) {
					{
					{
					setState(523);
					match(NOT);
					}
					}
					setState(528);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(532);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,76,_ctx);
				while ( _alt!=1 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1+1 ) {
						{
						{
						setState(529);
						match(RIGHTPAREN);
						}
						} 
					}
					setState(534);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,76,_ctx);
				}
				setState(538);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==FUNCTIONTYPE) {
					{
					{
					setState(535);
					match(FUNCTIONTYPE);
					}
					}
					setState(540);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(544);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==RIGHTPAREN) {
					{
					{
					setState(541);
					match(RIGHTPAREN);
					}
					}
					setState(546);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(547);
				match(FUNCTION);
				setState(548);
				match(T__0);
				setState(549);
				match(FUNCTIONNAME);
				setState(550);
				match(T__1);
				setState(551);
				match(T__2);
				setState(552);
				value();
				setState(553);
				match(T__2);
				setState(554);
				match(TARGETRESSOURCE);
				setState(558);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,79,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(555);
						match(LEFTPAREN);
						}
						} 
					}
					setState(560);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,79,_ctx);
				}
				setState(568);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,81,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(561);
						_la = _input.LA(1);
						if ( !(_la==AND || _la==OR) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(564);
						_errHandler.sync(this);
						switch ( getInterpreter().adaptivePredict(_input,80,_ctx) ) {
						case 1:
							{
							setState(562);
							booleenExpression();
							}
							break;
						case 2:
							{
							setState(563);
							condition();
							}
							break;
						}
						}
						} 
					}
					setState(570);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,81,_ctx);
				}
				setState(574);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,82,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(571);
						match(LEFTPAREN);
						}
						} 
					}
					setState(576);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,82,_ctx);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(580);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,83,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(577);
						match(NOT);
						}
						} 
					}
					setState(582);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,83,_ctx);
				}
				setState(586);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,84,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(583);
						match(RIGHTPAREN);
						}
						} 
					}
					setState(588);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,84,_ctx);
				}
				setState(589);
				booleenExpression();
				setState(600);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,87,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(590);
						_la = _input.LA(1);
						if ( !(_la==AND || _la==OR) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(595);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,86,_ctx);
						while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
							if ( _alt==1 ) {
								{
								setState(593);
								_errHandler.sync(this);
								switch ( getInterpreter().adaptivePredict(_input,85,_ctx) ) {
								case 1:
									{
									setState(591);
									booleenExpression();
									}
									break;
								case 2:
									{
									setState(592);
									condition();
									}
									break;
								}
								} 
							}
							setState(597);
							_errHandler.sync(this);
							_alt = getInterpreter().adaptivePredict(_input,86,_ctx);
						}
						}
						} 
					}
					setState(602);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,87,_ctx);
				}
				setState(606);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,88,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(603);
						match(LEFTPAREN);
						}
						} 
					}
					setState(608);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,88,_ctx);
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(612);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==NOT) {
					{
					{
					setState(609);
					match(NOT);
					}
					}
					setState(614);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(618);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==RIGHTPAREN) {
					{
					{
					setState(615);
					match(RIGHTPAREN);
					}
					}
					setState(620);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(621);
				match(FUNCTIONNAME);
				setState(622);
				match(RIGHTPAREN);
				setState(623);
				match(TARGETRESSOURCE);
				setState(624);
				match(LEFTPAREN);
				setState(628);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,91,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(625);
						match(LEFTPAREN);
						}
						} 
					}
					setState(630);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,91,_ctx);
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ImportDefinitionContext extends ParserRuleContext {
		public TerminalNode TARGETRESSOURCE() { return getToken(ALFAParser.TARGETRESSOURCE, 0); }
		public List<TerminalNode> NEWLINE() { return getTokens(ALFAParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(ALFAParser.NEWLINE, i);
		}
		public ImportDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_importDefinition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterImportDefinition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitImportDefinition(this);
		}
	}

	public final ImportDefinitionContext importDefinition() throws RecognitionException {
		ImportDefinitionContext _localctx = new ImportDefinitionContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_importDefinition);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(636);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(633);
				match(NEWLINE);
				}
				}
				setState(638);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(639);
			match(T__3);
			setState(640);
			match(TARGETRESSOURCE);
			setState(644);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,94,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(641);
					match(NEWLINE);
					}
					} 
				}
				setState(646);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,94,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PermitdenyContext extends ParserRuleContext {
		public TerminalNode PERMIT() { return getToken(ALFAParser.PERMIT, 0); }
		public TerminalNode DENY() { return getToken(ALFAParser.DENY, 0); }
		public List<TerminalNode> NEWLINE() { return getTokens(ALFAParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(ALFAParser.NEWLINE, i);
		}
		public PermitdenyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_permitdeny; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterPermitdeny(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitPermitdeny(this);
		}
	}

	public final PermitdenyContext permitdeny() throws RecognitionException {
		PermitdenyContext _localctx = new PermitdenyContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_permitdeny);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(650);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(647);
				match(NEWLINE);
				}
				}
				setState(652);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(653);
			_la = _input.LA(1);
			if ( !(_la==PERMIT || _la==DENY) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(657);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,96,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(654);
					match(NEWLINE);
					}
					} 
				}
				setState(659);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,96,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CombiningAlgorithmContext extends ParserRuleContext {
		public List<TerminalNode> NEWLINE() { return getTokens(ALFAParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(ALFAParser.NEWLINE, i);
		}
		public CombiningAlgorithmContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_combiningAlgorithm; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterCombiningAlgorithm(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitCombiningAlgorithm(this);
		}
	}

	public final CombiningAlgorithmContext combiningAlgorithm() throws RecognitionException {
		CombiningAlgorithmContext _localctx = new CombiningAlgorithmContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_combiningAlgorithm);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(663);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(660);
				match(NEWLINE);
				}
				}
				setState(665);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(666);
			match(T__4);
			setState(667);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__8) | (1L << T__9) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << T__13))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(671);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,98,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(668);
					match(NEWLINE);
					}
					} 
				}
				setState(673);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,98,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AdviceDefinitionContext extends ParserRuleContext {
		public TerminalNode ADVICE() { return getToken(ALFAParser.ADVICE, 0); }
		public List<TerminalNode> NEWLINE() { return getTokens(ALFAParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(ALFAParser.NEWLINE, i);
		}
		public List<TerminalNode> TARGETRESSOURCE() { return getTokens(ALFAParser.TARGETRESSOURCE); }
		public TerminalNode TARGETRESSOURCE(int i) {
			return getToken(ALFAParser.TARGETRESSOURCE, i);
		}
		public List<TerminalNode> RIGHTCBRACKET() { return getTokens(ALFAParser.RIGHTCBRACKET); }
		public TerminalNode RIGHTCBRACKET(int i) {
			return getToken(ALFAParser.RIGHTCBRACKET, i);
		}
		public List<TerminalNode> LEFTCBRACKET() { return getTokens(ALFAParser.LEFTCBRACKET); }
		public TerminalNode LEFTCBRACKET(int i) {
			return getToken(ALFAParser.LEFTCBRACKET, i);
		}
		public List<TerminalNode> ASSIGN() { return getTokens(ALFAParser.ASSIGN); }
		public TerminalNode ASSIGN(int i) {
			return getToken(ALFAParser.ASSIGN, i);
		}
		public List<TerminalNode> STRING() { return getTokens(ALFAParser.STRING); }
		public TerminalNode STRING(int i) {
			return getToken(ALFAParser.STRING, i);
		}
		public AdviceDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_adviceDefinition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterAdviceDefinition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitAdviceDefinition(this);
		}
	}

	public final AdviceDefinitionContext adviceDefinition() throws RecognitionException {
		AdviceDefinitionContext _localctx = new AdviceDefinitionContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_adviceDefinition);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(677);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(674);
				match(NEWLINE);
				}
				}
				setState(679);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(680);
			match(ADVICE);
			setState(718);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TARGETRESSOURCE) {
				{
				setState(716);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,105,_ctx) ) {
				case 1:
					{
					setState(681);
					match(TARGETRESSOURCE);
					setState(683); 
					_errHandler.sync(this);
					_alt = 1;
					do {
						switch (_alt) {
						case 1:
							{
							{
							setState(682);
							match(NEWLINE);
							}
							}
							break;
						default:
							throw new NoViableAltException(this);
						}
						setState(685); 
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,100,_ctx);
					} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
					}
					break;
				case 2:
					{
					setState(687);
					match(TARGETRESSOURCE);
					setState(691);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(688);
						match(NEWLINE);
						}
						}
						setState(693);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(694);
					match(RIGHTCBRACKET);
					setState(698);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(695);
						match(NEWLINE);
						}
						}
						setState(700);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(712);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==TARGETRESSOURCE) {
						{
						{
						setState(701);
						match(TARGETRESSOURCE);
						setState(702);
						match(ASSIGN);
						setState(703);
						_la = _input.LA(1);
						if ( !(_la==TARGETRESSOURCE || _la==STRING) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(707);
						_errHandler.sync(this);
						_la = _input.LA(1);
						while (_la==NEWLINE) {
							{
							{
							setState(704);
							match(NEWLINE);
							}
							}
							setState(709);
							_errHandler.sync(this);
							_la = _input.LA(1);
						}
						}
						}
						setState(714);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(715);
					match(LEFTCBRACKET);
					}
					break;
				}
				}
				setState(720);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(724);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,107,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(721);
					match(NEWLINE);
					}
					} 
				}
				setState(726);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,107,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ObligationDefinitionContext extends ParserRuleContext {
		public TerminalNode OBLIGATION() { return getToken(ALFAParser.OBLIGATION, 0); }
		public List<TerminalNode> NEWLINE() { return getTokens(ALFAParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(ALFAParser.NEWLINE, i);
		}
		public List<TerminalNode> TARGETRESSOURCE() { return getTokens(ALFAParser.TARGETRESSOURCE); }
		public TerminalNode TARGETRESSOURCE(int i) {
			return getToken(ALFAParser.TARGETRESSOURCE, i);
		}
		public List<TerminalNode> RIGHTCBRACKET() { return getTokens(ALFAParser.RIGHTCBRACKET); }
		public TerminalNode RIGHTCBRACKET(int i) {
			return getToken(ALFAParser.RIGHTCBRACKET, i);
		}
		public List<TerminalNode> LEFTCBRACKET() { return getTokens(ALFAParser.LEFTCBRACKET); }
		public TerminalNode LEFTCBRACKET(int i) {
			return getToken(ALFAParser.LEFTCBRACKET, i);
		}
		public List<TerminalNode> ASSIGN() { return getTokens(ALFAParser.ASSIGN); }
		public TerminalNode ASSIGN(int i) {
			return getToken(ALFAParser.ASSIGN, i);
		}
		public List<TerminalNode> STRING() { return getTokens(ALFAParser.STRING); }
		public TerminalNode STRING(int i) {
			return getToken(ALFAParser.STRING, i);
		}
		public ObligationDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_obligationDefinition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterObligationDefinition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitObligationDefinition(this);
		}
	}

	public final ObligationDefinitionContext obligationDefinition() throws RecognitionException {
		ObligationDefinitionContext _localctx = new ObligationDefinitionContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_obligationDefinition);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(730);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(727);
				match(NEWLINE);
				}
				}
				setState(732);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(733);
			match(OBLIGATION);
			setState(771);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TARGETRESSOURCE) {
				{
				setState(769);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,114,_ctx) ) {
				case 1:
					{
					setState(734);
					match(TARGETRESSOURCE);
					setState(736); 
					_errHandler.sync(this);
					_alt = 1;
					do {
						switch (_alt) {
						case 1:
							{
							{
							setState(735);
							match(NEWLINE);
							}
							}
							break;
						default:
							throw new NoViableAltException(this);
						}
						setState(738); 
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,109,_ctx);
					} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
					}
					break;
				case 2:
					{
					setState(740);
					match(TARGETRESSOURCE);
					setState(744);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(741);
						match(NEWLINE);
						}
						}
						setState(746);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(747);
					match(RIGHTCBRACKET);
					setState(751);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(748);
						match(NEWLINE);
						}
						}
						setState(753);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(765);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==TARGETRESSOURCE) {
						{
						{
						setState(754);
						match(TARGETRESSOURCE);
						setState(755);
						match(ASSIGN);
						setState(756);
						_la = _input.LA(1);
						if ( !(_la==TARGETRESSOURCE || _la==STRING) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(760);
						_errHandler.sync(this);
						_la = _input.LA(1);
						while (_la==NEWLINE) {
							{
							{
							setState(757);
							match(NEWLINE);
							}
							}
							setState(762);
							_errHandler.sync(this);
							_la = _input.LA(1);
						}
						}
						}
						setState(767);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(768);
					match(LEFTCBRACKET);
					}
					break;
				}
				}
				setState(773);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(777);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,116,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(774);
					match(NEWLINE);
					}
					} 
				}
				setState(779);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,116,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AttributeDefinitionContext extends ParserRuleContext {
		public TerminalNode ATTRIBUTE() { return getToken(ALFAParser.ATTRIBUTE, 0); }
		public TerminalNode WORD() { return getToken(ALFAParser.WORD, 0); }
		public TerminalNode RIGHTCBRACKET() { return getToken(ALFAParser.RIGHTCBRACKET, 0); }
		public TerminalNode LEFTCBRACKET() { return getToken(ALFAParser.LEFTCBRACKET, 0); }
		public List<TerminalNode> NEWLINE() { return getTokens(ALFAParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(ALFAParser.NEWLINE, i);
		}
		public List<TerminalNode> IDENTIFIERS() { return getTokens(ALFAParser.IDENTIFIERS); }
		public TerminalNode IDENTIFIERS(int i) {
			return getToken(ALFAParser.IDENTIFIERS, i);
		}
		public List<TerminalNode> ASSIGN() { return getTokens(ALFAParser.ASSIGN); }
		public TerminalNode ASSIGN(int i) {
			return getToken(ALFAParser.ASSIGN, i);
		}
		public List<ValueContext> value() {
			return getRuleContexts(ValueContext.class);
		}
		public ValueContext value(int i) {
			return getRuleContext(ValueContext.class,i);
		}
		public AttributeDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_attributeDefinition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterAttributeDefinition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitAttributeDefinition(this);
		}
	}

	public final AttributeDefinitionContext attributeDefinition() throws RecognitionException {
		AttributeDefinitionContext _localctx = new AttributeDefinitionContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_attributeDefinition);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(783);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(780);
				match(NEWLINE);
				}
				}
				setState(785);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(786);
			match(ATTRIBUTE);
			setState(787);
			match(WORD);
			setState(791);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(788);
				match(NEWLINE);
				}
				}
				setState(793);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(794);
			match(RIGHTCBRACKET);
			setState(798);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(795);
				match(NEWLINE);
				}
				}
				setState(800);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(812);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==IDENTIFIERS) {
				{
				{
				setState(801);
				match(IDENTIFIERS);
				setState(802);
				match(ASSIGN);
				setState(803);
				value();
				setState(807);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==NEWLINE) {
					{
					{
					setState(804);
					match(NEWLINE);
					}
					}
					setState(809);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				}
				setState(814);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(815);
			match(LEFTCBRACKET);
			setState(819);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,122,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(816);
					match(NEWLINE);
					}
					} 
				}
				setState(821);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,122,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ValueContext extends ParserRuleContext {
		public TerminalNode NUMBER() { return getToken(ALFAParser.NUMBER, 0); }
		public TerminalNode STRING() { return getToken(ALFAParser.STRING, 0); }
		public TerminalNode BOOL() { return getToken(ALFAParser.BOOL, 0); }
		public TerminalNode WORD() { return getToken(ALFAParser.WORD, 0); }
		public ValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_value; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterValue(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitValue(this);
		}
	}

	public final ValueContext value() throws RecognitionException {
		ValueContext _localctx = new ValueContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_value);
		try {
			setState(828);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,123,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(822);
				match(NUMBER);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(823);
				match(STRING);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(824);
				match(BOOL);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(825);
				match(STRING);
				setState(826);
				match(T__14);
				setState(827);
				match(WORD);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LANDContext extends ParserRuleContext {
		public LANDContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lAND; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterLAND(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitLAND(this);
		}
	}

	public final LANDContext lAND() throws RecognitionException {
		LANDContext _localctx = new LANDContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_lAND);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(830);
			match(T__15);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LORContext extends ParserRuleContext {
		public LORContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_lOR; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterLOR(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitLOR(this);
		}
	}

	public final LORContext lOR() throws RecognitionException {
		LORContext _localctx = new LORContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_lOR);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(832);
			match(T__16);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3J\u0345\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\3\2\6\2\62"+
		"\n\2\r\2\16\2\63\3\2\3\2\3\3\7\39\n\3\f\3\16\3<\13\3\3\3\3\3\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3K\n\3\3\4\7\4N\n\4\f\4\16\4Q\13"+
		"\4\3\4\3\4\7\4U\n\4\f\4\16\4X\13\4\3\4\5\4[\n\4\3\4\3\4\7\4_\n\4\f\4\16"+
		"\4b\13\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\5\4p\n\4\3\4"+
		"\7\4s\n\4\f\4\16\4v\13\4\7\4x\n\4\f\4\16\4{\13\4\3\4\3\4\3\5\7\5\u0080"+
		"\n\5\f\5\16\5\u0083\13\5\3\5\3\5\3\5\7\5\u0088\n\5\f\5\16\5\u008b\13\5"+
		"\3\5\7\5\u008e\n\5\f\5\16\5\u0091\13\5\3\5\3\5\7\5\u0095\n\5\f\5\16\5"+
		"\u0098\13\5\3\5\3\5\3\5\3\5\7\5\u009e\n\5\f\5\16\5\u00a1\13\5\5\5\u00a3"+
		"\n\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\7\5\u00ae\n\5\f\5\16\5\u00b1"+
		"\13\5\3\5\5\5\u00b4\n\5\3\5\7\5\u00b7\n\5\f\5\16\5\u00ba\13\5\3\6\7\6"+
		"\u00bd\n\6\f\6\16\6\u00c0\13\6\3\6\3\6\3\6\7\6\u00c5\n\6\f\6\16\6\u00c8"+
		"\13\6\3\6\7\6\u00cb\n\6\f\6\16\6\u00ce\13\6\3\6\3\6\7\6\u00d2\n\6\f\6"+
		"\16\6\u00d5\13\6\3\6\3\6\3\6\3\6\7\6\u00db\n\6\f\6\16\6\u00de\13\6\5\6"+
		"\u00e0\n\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\3\6\7\6\u00ea\n\6\f\6\16\6\u00ed"+
		"\13\6\3\6\5\6\u00f0\n\6\3\6\7\6\u00f3\n\6\f\6\16\6\u00f6\13\6\3\7\7\7"+
		"\u00f9\n\7\f\7\16\7\u00fc\13\7\3\7\3\7\3\7\7\7\u0101\n\7\f\7\16\7\u0104"+
		"\13\7\3\7\7\7\u0107\n\7\f\7\16\7\u010a\13\7\3\7\3\7\7\7\u010e\n\7\f\7"+
		"\16\7\u0111\13\7\3\7\3\7\3\7\3\7\7\7\u0117\n\7\f\7\16\7\u011a\13\7\5\7"+
		"\u011c\n\7\3\7\3\7\3\7\3\7\3\7\3\7\7\7\u0124\n\7\f\7\16\7\u0127\13\7\3"+
		"\7\5\7\u012a\n\7\3\7\7\7\u012d\n\7\f\7\16\7\u0130\13\7\3\b\7\b\u0133\n"+
		"\b\f\b\16\b\u0136\13\b\3\b\3\b\5\b\u013a\n\b\3\b\7\b\u013d\n\b\f\b\16"+
		"\b\u0140\13\b\3\t\7\t\u0143\n\t\f\t\16\t\u0146\13\t\3\t\3\t\7\t\u014a"+
		"\n\t\f\t\16\t\u014d\13\t\3\t\3\t\7\t\u0151\n\t\f\t\16\t\u0154\13\t\3\t"+
		"\7\t\u0157\n\t\f\t\16\t\u015a\13\t\3\t\7\t\u015d\n\t\f\t\16\t\u0160\13"+
		"\t\3\t\3\t\7\t\u0164\n\t\f\t\16\t\u0167\13\t\3\n\7\n\u016a\n\n\f\n\16"+
		"\n\u016d\13\n\3\n\3\n\7\n\u0171\n\n\f\n\16\n\u0174\13\n\3\n\3\n\7\n\u0178"+
		"\n\n\f\n\16\n\u017b\13\n\3\n\7\n\u017e\n\n\f\n\16\n\u0181\13\n\3\n\7\n"+
		"\u0184\n\n\f\n\16\n\u0187\13\n\3\n\3\n\7\n\u018b\n\n\f\n\16\n\u018e\13"+
		"\n\3\13\7\13\u0191\n\13\f\13\16\13\u0194\13\13\3\13\3\13\3\13\7\13\u0199"+
		"\n\13\f\13\16\13\u019c\13\13\3\f\3\f\6\f\u01a0\n\f\r\f\16\f\u01a1\3\r"+
		"\7\r\u01a5\n\r\f\r\16\r\u01a8\13\r\3\r\7\r\u01ab\n\r\f\r\16\r\u01ae\13"+
		"\r\3\r\3\r\3\r\3\r\7\r\u01b4\n\r\f\r\16\r\u01b7\13\r\3\r\7\r\u01ba\n\r"+
		"\f\r\16\r\u01bd\13\r\3\r\3\r\3\r\3\r\3\r\3\r\7\r\u01c5\n\r\f\r\16\r\u01c8"+
		"\13\r\3\r\7\r\u01cb\n\r\f\r\16\r\u01ce\13\r\3\r\7\r\u01d1\n\r\f\r\16\r"+
		"\u01d4\13\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\7\r\u01dd\n\r\f\r\16\r\u01e0\13"+
		"\r\3\r\7\r\u01e3\n\r\f\r\16\r\u01e6\13\r\3\r\3\r\3\r\3\r\3\r\3\r\7\r\u01ee"+
		"\n\r\f\r\16\r\u01f1\13\r\5\r\u01f3\n\r\3\16\7\16\u01f6\n\16\f\16\16\16"+
		"\u01f9\13\16\3\16\3\16\7\16\u01fd\n\16\f\16\16\16\u0200\13\16\3\16\7\16"+
		"\u0203\n\16\f\16\16\16\u0206\13\16\3\17\7\17\u0209\n\17\f\17\16\17\u020c"+
		"\13\17\3\17\7\17\u020f\n\17\f\17\16\17\u0212\13\17\3\17\7\17\u0215\n\17"+
		"\f\17\16\17\u0218\13\17\3\17\7\17\u021b\n\17\f\17\16\17\u021e\13\17\3"+
		"\17\7\17\u0221\n\17\f\17\16\17\u0224\13\17\3\17\3\17\3\17\3\17\3\17\3"+
		"\17\3\17\3\17\3\17\7\17\u022f\n\17\f\17\16\17\u0232\13\17\3\17\3\17\3"+
		"\17\5\17\u0237\n\17\7\17\u0239\n\17\f\17\16\17\u023c\13\17\3\17\7\17\u023f"+
		"\n\17\f\17\16\17\u0242\13\17\3\17\7\17\u0245\n\17\f\17\16\17\u0248\13"+
		"\17\3\17\7\17\u024b\n\17\f\17\16\17\u024e\13\17\3\17\3\17\3\17\3\17\7"+
		"\17\u0254\n\17\f\17\16\17\u0257\13\17\7\17\u0259\n\17\f\17\16\17\u025c"+
		"\13\17\3\17\7\17\u025f\n\17\f\17\16\17\u0262\13\17\3\17\7\17\u0265\n\17"+
		"\f\17\16\17\u0268\13\17\3\17\7\17\u026b\n\17\f\17\16\17\u026e\13\17\3"+
		"\17\3\17\3\17\3\17\3\17\7\17\u0275\n\17\f\17\16\17\u0278\13\17\5\17\u027a"+
		"\n\17\3\20\7\20\u027d\n\20\f\20\16\20\u0280\13\20\3\20\3\20\3\20\7\20"+
		"\u0285\n\20\f\20\16\20\u0288\13\20\3\21\7\21\u028b\n\21\f\21\16\21\u028e"+
		"\13\21\3\21\3\21\7\21\u0292\n\21\f\21\16\21\u0295\13\21\3\22\7\22\u0298"+
		"\n\22\f\22\16\22\u029b\13\22\3\22\3\22\3\22\7\22\u02a0\n\22\f\22\16\22"+
		"\u02a3\13\22\3\23\7\23\u02a6\n\23\f\23\16\23\u02a9\13\23\3\23\3\23\3\23"+
		"\6\23\u02ae\n\23\r\23\16\23\u02af\3\23\3\23\7\23\u02b4\n\23\f\23\16\23"+
		"\u02b7\13\23\3\23\3\23\7\23\u02bb\n\23\f\23\16\23\u02be\13\23\3\23\3\23"+
		"\3\23\3\23\7\23\u02c4\n\23\f\23\16\23\u02c7\13\23\7\23\u02c9\n\23\f\23"+
		"\16\23\u02cc\13\23\3\23\7\23\u02cf\n\23\f\23\16\23\u02d2\13\23\3\23\7"+
		"\23\u02d5\n\23\f\23\16\23\u02d8\13\23\3\24\7\24\u02db\n\24\f\24\16\24"+
		"\u02de\13\24\3\24\3\24\3\24\6\24\u02e3\n\24\r\24\16\24\u02e4\3\24\3\24"+
		"\7\24\u02e9\n\24\f\24\16\24\u02ec\13\24\3\24\3\24\7\24\u02f0\n\24\f\24"+
		"\16\24\u02f3\13\24\3\24\3\24\3\24\3\24\7\24\u02f9\n\24\f\24\16\24\u02fc"+
		"\13\24\7\24\u02fe\n\24\f\24\16\24\u0301\13\24\3\24\7\24\u0304\n\24\f\24"+
		"\16\24\u0307\13\24\3\24\7\24\u030a\n\24\f\24\16\24\u030d\13\24\3\25\7"+
		"\25\u0310\n\25\f\25\16\25\u0313\13\25\3\25\3\25\3\25\7\25\u0318\n\25\f"+
		"\25\16\25\u031b\13\25\3\25\3\25\7\25\u031f\n\25\f\25\16\25\u0322\13\25"+
		"\3\25\3\25\3\25\3\25\7\25\u0328\n\25\f\25\16\25\u032b\13\25\7\25\u032d"+
		"\n\25\f\25\16\25\u0330\13\25\3\25\3\25\7\25\u0334\n\25\f\25\16\25\u0337"+
		"\13\25\3\26\3\26\3\26\3\26\3\26\3\26\5\26\u033f\n\26\3\27\3\27\3\30\3"+
		"\30\3\30\3\u0216\2\31\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(*,."+
		"\2\6\3\2<=\3\2\37 \3\2\b\20\4\2HHJJ\2\u03d2\2\61\3\2\2\2\4J\3\2\2\2\6"+
		"O\3\2\2\2\b\u0081\3\2\2\2\n\u00be\3\2\2\2\f\u00fa\3\2\2\2\16\u0134\3\2"+
		"\2\2\20\u0144\3\2\2\2\22\u016b\3\2\2\2\24\u0192\3\2\2\2\26\u019d\3\2\2"+
		"\2\30\u01f2\3\2\2\2\32\u01f7\3\2\2\2\34\u0279\3\2\2\2\36\u027e\3\2\2\2"+
		" \u028c\3\2\2\2\"\u0299\3\2\2\2$\u02a7\3\2\2\2&\u02dc\3\2\2\2(\u0311\3"+
		"\2\2\2*\u033e\3\2\2\2,\u0340\3\2\2\2.\u0342\3\2\2\2\60\62\5\4\3\2\61\60"+
		"\3\2\2\2\62\63\3\2\2\2\63\61\3\2\2\2\63\64\3\2\2\2\64\65\3\2\2\2\65\66"+
		"\7\2\2\3\66\3\3\2\2\2\679\7\27\2\28\67\3\2\2\29<\3\2\2\2:8\3\2\2\2:;\3"+
		"\2\2\2;=\3\2\2\2<:\3\2\2\2=K\7\27\2\2>K\5\6\4\2?K\7*\2\2@K\5\36\20\2A"+
		"K\5(\25\2BK\5\b\5\2CK\5\n\6\2DK\5\32\16\2EK\5\24\13\2FK\5\"\22\2GK\5\16"+
		"\b\2HK\5 \21\2IK\5\30\r\2J:\3\2\2\2J>\3\2\2\2J?\3\2\2\2J@\3\2\2\2JA\3"+
		"\2\2\2JB\3\2\2\2JC\3\2\2\2JD\3\2\2\2JE\3\2\2\2JF\3\2\2\2JG\3\2\2\2JH\3"+
		"\2\2\2JI\3\2\2\2K\5\3\2\2\2LN\7\27\2\2ML\3\2\2\2NQ\3\2\2\2OM\3\2\2\2O"+
		"P\3\2\2\2PR\3\2\2\2QO\3\2\2\2RZ\7\33\2\2SU\7\27\2\2TS\3\2\2\2UX\3\2\2"+
		"\2VT\3\2\2\2VW\3\2\2\2W[\3\2\2\2XV\3\2\2\2Y[\7I\2\2ZV\3\2\2\2ZY\3\2\2"+
		"\2[\\\3\2\2\2\\y\7\66\2\2]_\7\27\2\2^]\3\2\2\2_b\3\2\2\2`^\3\2\2\2`a\3"+
		"\2\2\2ao\3\2\2\2b`\3\2\2\2cp\5\6\4\2dp\7*\2\2ep\5\36\20\2fp\5(\25\2gp"+
		"\5\b\5\2hp\5\n\6\2ip\5\32\16\2jp\5\24\13\2kp\5\"\22\2lp\5\16\b\2mp\5 "+
		"\21\2np\5\30\r\2oc\3\2\2\2od\3\2\2\2oe\3\2\2\2of\3\2\2\2og\3\2\2\2oh\3"+
		"\2\2\2oi\3\2\2\2oj\3\2\2\2ok\3\2\2\2ol\3\2\2\2om\3\2\2\2on\3\2\2\2pt\3"+
		"\2\2\2qs\7\27\2\2rq\3\2\2\2sv\3\2\2\2tr\3\2\2\2tu\3\2\2\2ux\3\2\2\2vt"+
		"\3\2\2\2w`\3\2\2\2x{\3\2\2\2yw\3\2\2\2yz\3\2\2\2z|\3\2\2\2{y\3\2\2\2|"+
		"}\7\67\2\2}\7\3\2\2\2~\u0080\7\27\2\2\177~\3\2\2\2\u0080\u0083\3\2\2\2"+
		"\u0081\177\3\2\2\2\u0081\u0082\3\2\2\2\u0082\u0084\3\2\2\2\u0083\u0081"+
		"\3\2\2\2\u0084\u00b3\7\34\2\2\u0085\u0089\7I\2\2\u0086\u0088\7\27\2\2"+
		"\u0087\u0086\3\2\2\2\u0088\u008b\3\2\2\2\u0089\u0087\3\2\2\2\u0089\u008a"+
		"\3\2\2\2\u008a\u00b4\3\2\2\2\u008b\u0089\3\2\2\2\u008c\u008e\7\27\2\2"+
		"\u008d\u008c\3\2\2\2\u008e\u0091\3\2\2\2\u008f\u008d\3\2\2\2\u008f\u0090"+
		"\3\2\2\2\u0090\u00a3\3\2\2\2\u0091\u008f\3\2\2\2\u0092\u0096\7I\2\2\u0093"+
		"\u0095\7\27\2\2\u0094\u0093\3\2\2\2\u0095\u0098\3\2\2\2\u0096\u0094\3"+
		"\2\2\2\u0096\u0097\3\2\2\2\u0097\u00a3\3\2\2\2\u0098\u0096\3\2\2\2\u0099"+
		"\u009a\7I\2\2\u009a\u009b\7:\2\2\u009b\u009f\7J\2\2\u009c\u009e\7\27\2"+
		"\2\u009d\u009c\3\2\2\2\u009e\u00a1\3\2\2\2\u009f\u009d\3\2\2\2\u009f\u00a0"+
		"\3\2\2\2\u00a0\u00a3\3\2\2\2\u00a1\u009f\3\2\2\2\u00a2\u008f\3\2\2\2\u00a2"+
		"\u0092\3\2\2\2\u00a2\u0099\3\2\2\2\u00a3\u00a4\3\2\2\2\u00a4\u00af\7\66"+
		"\2\2\u00a5\u00ae\5\6\4\2\u00a6\u00ae\5\b\5\2\u00a7\u00ae\5\n\6\2\u00a8"+
		"\u00ae\5\f\7\2\u00a9\u00ae\5\32\16\2\u00aa\u00ae\5\24\13\2\u00ab\u00ae"+
		"\5\"\22\2\u00ac\u00ae\5\16\b\2\u00ad\u00a5\3\2\2\2\u00ad\u00a6\3\2\2\2"+
		"\u00ad\u00a7\3\2\2\2\u00ad\u00a8\3\2\2\2\u00ad\u00a9\3\2\2\2\u00ad\u00aa"+
		"\3\2\2\2\u00ad\u00ab\3\2\2\2\u00ad\u00ac\3\2\2\2\u00ae\u00b1\3\2\2\2\u00af"+
		"\u00ad\3\2\2\2\u00af\u00b0\3\2\2\2\u00b0\u00b2\3\2\2\2\u00b1\u00af\3\2"+
		"\2\2\u00b2\u00b4\7\67\2\2\u00b3\u0085\3\2\2\2\u00b3\u00a2\3\2\2\2\u00b4"+
		"\u00b8\3\2\2\2\u00b5\u00b7\7\27\2\2\u00b6\u00b5\3\2\2\2\u00b7\u00ba\3"+
		"\2\2\2\u00b8\u00b6\3\2\2\2\u00b8\u00b9\3\2\2\2\u00b9\t\3\2\2\2\u00ba\u00b8"+
		"\3\2\2\2\u00bb\u00bd\7\27\2\2\u00bc\u00bb\3\2\2\2\u00bd\u00c0\3\2\2\2"+
		"\u00be\u00bc\3\2\2\2\u00be\u00bf\3\2\2\2\u00bf\u00c1\3\2\2\2\u00c0\u00be"+
		"\3\2\2\2\u00c1\u00ef\7\35\2\2\u00c2\u00c6\7I\2\2\u00c3\u00c5\7\27\2\2"+
		"\u00c4\u00c3\3\2\2\2\u00c5\u00c8\3\2\2\2\u00c6\u00c4\3\2\2\2\u00c6\u00c7"+
		"\3\2\2\2\u00c7\u00f0\3\2\2\2\u00c8\u00c6\3\2\2\2\u00c9\u00cb\7\27\2\2"+
		"\u00ca\u00c9\3\2\2\2\u00cb\u00ce\3\2\2\2\u00cc\u00ca\3\2\2\2\u00cc\u00cd"+
		"\3\2\2\2\u00cd\u00e0\3\2\2\2\u00ce\u00cc\3\2\2\2\u00cf\u00d3\7I\2\2\u00d0"+
		"\u00d2\7\27\2\2\u00d1\u00d0\3\2\2\2\u00d2\u00d5\3\2\2\2\u00d3\u00d1\3"+
		"\2\2\2\u00d3\u00d4\3\2\2\2\u00d4\u00e0\3\2\2\2\u00d5\u00d3\3\2\2\2\u00d6"+
		"\u00d7\7I\2\2\u00d7\u00d8\7:\2\2\u00d8\u00dc\7J\2\2\u00d9\u00db\7\27\2"+
		"\2\u00da\u00d9\3\2\2\2\u00db\u00de\3\2\2\2\u00dc\u00da\3\2\2\2\u00dc\u00dd"+
		"\3\2\2\2\u00dd\u00e0\3\2\2\2\u00de\u00dc\3\2\2\2\u00df\u00cc\3\2\2\2\u00df"+
		"\u00cf\3\2\2\2\u00df\u00d6\3\2\2\2\u00e0\u00e1\3\2\2\2\u00e1\u00eb\7\66"+
		"\2\2\u00e2\u00ea\5\6\4\2\u00e3\u00ea\5\n\6\2\u00e4\u00ea\5\f\7\2\u00e5"+
		"\u00ea\5\32\16\2\u00e6\u00ea\5\24\13\2\u00e7\u00ea\5\"\22\2\u00e8\u00ea"+
		"\5\16\b\2\u00e9\u00e2\3\2\2\2\u00e9\u00e3\3\2\2\2\u00e9\u00e4\3\2\2\2"+
		"\u00e9\u00e5\3\2\2\2\u00e9\u00e6\3\2\2\2\u00e9\u00e7\3\2\2\2\u00e9\u00e8"+
		"\3\2\2\2\u00ea\u00ed\3\2\2\2\u00eb\u00e9\3\2\2\2\u00eb\u00ec\3\2\2\2\u00ec"+
		"\u00ee\3\2\2\2\u00ed\u00eb\3\2\2\2\u00ee\u00f0\7\67\2\2\u00ef\u00c2\3"+
		"\2\2\2\u00ef\u00df\3\2\2\2\u00f0\u00f4\3\2\2\2\u00f1\u00f3\7\27\2\2\u00f2"+
		"\u00f1\3\2\2\2\u00f3\u00f6\3\2\2\2\u00f4\u00f2\3\2\2\2\u00f4\u00f5\3\2"+
		"\2\2\u00f5\13\3\2\2\2\u00f6\u00f4\3\2\2\2\u00f7\u00f9\7\27\2\2\u00f8\u00f7"+
		"\3\2\2\2\u00f9\u00fc\3\2\2\2\u00fa\u00f8\3\2\2\2\u00fa\u00fb\3\2\2\2\u00fb"+
		"\u00fd\3\2\2\2\u00fc\u00fa\3\2\2\2\u00fd\u0129\7\36\2\2\u00fe\u0102\7"+
		"I\2\2\u00ff\u0101\7\27\2\2\u0100\u00ff\3\2\2\2\u0101\u0104\3\2\2\2\u0102"+
		"\u0100\3\2\2\2\u0102\u0103\3\2\2\2\u0103\u012a\3\2\2\2\u0104\u0102\3\2"+
		"\2\2\u0105\u0107\7\27\2\2\u0106\u0105\3\2\2\2\u0107\u010a\3\2\2\2\u0108"+
		"\u0106\3\2\2\2\u0108\u0109\3\2\2\2\u0109\u011c\3\2\2\2\u010a\u0108\3\2"+
		"\2\2\u010b\u010f\7I\2\2\u010c\u010e\7\27\2\2\u010d\u010c\3\2\2\2\u010e"+
		"\u0111\3\2\2\2\u010f\u010d\3\2\2\2\u010f\u0110\3\2\2\2\u0110\u011c\3\2"+
		"\2\2\u0111\u010f\3\2\2\2\u0112\u0113\7I\2\2\u0113\u0114\7:\2\2\u0114\u0118"+
		"\7J\2\2\u0115\u0117\7\27\2\2\u0116\u0115\3\2\2\2\u0117\u011a\3\2\2\2\u0118"+
		"\u0116\3\2\2\2\u0118\u0119\3\2\2\2\u0119\u011c\3\2\2\2\u011a\u0118\3\2"+
		"\2\2\u011b\u0108\3\2\2\2\u011b\u010b\3\2\2\2\u011b\u0112\3\2\2\2\u011c"+
		"\u011d\3\2\2\2\u011d\u0125\7\66\2\2\u011e\u0124\5\f\7\2\u011f\u0124\5"+
		"\32\16\2\u0120\u0124\5\24\13\2\u0121\u0124\5 \21\2\u0122\u0124\5\16\b"+
		"\2\u0123\u011e\3\2\2\2\u0123\u011f\3\2\2\2\u0123\u0120\3\2\2\2\u0123\u0121"+
		"\3\2\2\2\u0123\u0122\3\2\2\2\u0124\u0127\3\2\2\2\u0125\u0123\3\2\2\2\u0125"+
		"\u0126\3\2\2\2\u0126\u0128\3\2\2\2\u0127\u0125\3\2\2\2\u0128\u012a\7\67"+
		"\2\2\u0129\u00fe\3\2\2\2\u0129\u011b\3\2\2\2\u012a\u012e\3\2\2\2\u012b"+
		"\u012d\7\27\2\2\u012c\u012b\3\2\2\2\u012d\u0130\3\2\2\2\u012e\u012c\3"+
		"\2\2\2\u012e\u012f\3\2\2\2\u012f\r\3\2\2\2\u0130\u012e\3\2\2\2\u0131\u0133"+
		"\7\27\2\2\u0132\u0131\3\2\2\2\u0133\u0136\3\2\2\2\u0134\u0132\3\2\2\2"+
		"\u0134\u0135\3\2\2\2\u0135\u0139\3\2\2\2\u0136\u0134\3\2\2\2\u0137\u013a"+
		"\5\20\t\2\u0138\u013a\5\22\n\2\u0139\u0137\3\2\2\2\u0139\u0138\3\2\2\2"+
		"\u013a\u013e\3\2\2\2\u013b\u013d\7\27\2\2\u013c\u013b\3\2\2\2\u013d\u0140"+
		"\3\2\2\2\u013e\u013c\3\2\2\2\u013e\u013f\3\2\2\2\u013f\17\3\2\2\2\u0140"+
		"\u013e\3\2\2\2\u0141\u0143\7\27\2\2\u0142\u0141\3\2\2\2\u0143\u0146\3"+
		"\2\2\2\u0144\u0142\3\2\2\2\u0144\u0145\3\2\2\2\u0145\u0147\3\2\2\2\u0146"+
		"\u0144\3\2\2\2\u0147\u014b\7%\2\2\u0148\u014a\7\27\2\2\u0149\u0148\3\2"+
		"\2\2\u014a\u014d\3\2\2\2\u014b\u0149\3\2\2\2\u014b\u014c\3\2\2\2\u014c"+
		"\u014e\3\2\2\2\u014d\u014b\3\2\2\2\u014e\u0152\7\66\2\2\u014f\u0151\7"+
		"\27\2\2\u0150\u014f\3\2\2\2\u0151\u0154\3\2\2\2\u0152\u0150\3\2\2\2\u0152"+
		"\u0153\3\2\2\2\u0153\u0158\3\2\2\2\u0154\u0152\3\2\2\2\u0155\u0157\5&"+
		"\24\2\u0156\u0155\3\2\2\2\u0157\u015a\3\2\2\2\u0158\u0156\3\2\2\2\u0158"+
		"\u0159\3\2\2\2\u0159\u015e\3\2\2\2\u015a\u0158\3\2\2\2\u015b\u015d\7\27"+
		"\2\2\u015c\u015b\3\2\2\2\u015d\u0160\3\2\2\2\u015e\u015c\3\2\2\2\u015e"+
		"\u015f\3\2\2\2\u015f\u0161\3\2\2\2\u0160\u015e\3\2\2\2\u0161\u0165\7\67"+
		"\2\2\u0162\u0164\7\27\2\2\u0163\u0162\3\2\2\2\u0164\u0167\3\2\2\2\u0165"+
		"\u0163\3\2\2\2\u0165\u0166\3\2\2\2\u0166\21\3\2\2\2\u0167\u0165\3\2\2"+
		"\2\u0168\u016a\7\27\2\2\u0169\u0168\3\2\2\2\u016a\u016d\3\2\2\2\u016b"+
		"\u0169\3\2\2\2\u016b\u016c\3\2\2\2\u016c\u016e\3\2\2\2\u016d\u016b\3\2"+
		"\2\2\u016e\u0172\7&\2\2\u016f\u0171\7\27\2\2\u0170\u016f\3\2\2\2\u0171"+
		"\u0174\3\2\2\2\u0172\u0170\3\2\2\2\u0172\u0173\3\2\2\2\u0173\u0175\3\2"+
		"\2\2\u0174\u0172\3\2\2\2\u0175\u0179\7\66\2\2\u0176\u0178\7\27\2\2\u0177"+
		"\u0176\3\2\2\2\u0178\u017b\3\2\2\2\u0179\u0177\3\2\2\2\u0179\u017a\3\2"+
		"\2\2\u017a\u017f\3\2\2\2\u017b\u0179\3\2\2\2\u017c\u017e\5$\23\2\u017d"+
		"\u017c\3\2\2\2\u017e\u0181\3\2\2\2\u017f\u017d\3\2\2\2\u017f\u0180\3\2"+
		"\2\2\u0180\u0185\3\2\2\2\u0181\u017f\3\2\2\2\u0182\u0184\7\27\2\2\u0183"+
		"\u0182\3\2\2\2\u0184\u0187\3\2\2\2\u0185\u0183\3\2\2\2\u0185\u0186\3\2"+
		"\2\2\u0186\u0188\3\2\2\2\u0187\u0185\3\2\2\2\u0188\u018c\7\67\2\2\u0189"+
		"\u018b\7\27\2\2\u018a\u0189\3\2\2\2\u018b\u018e\3\2\2\2\u018c\u018a\3"+
		"\2\2\2\u018c\u018d\3\2\2\2\u018d\23\3\2\2\2\u018e\u018c\3\2\2\2\u018f"+
		"\u0191\7\27\2\2\u0190\u018f\3\2\2\2\u0191\u0194\3\2\2\2\u0192\u0190\3"+
		"\2\2\2\u0192\u0193\3\2\2\2\u0193\u0195\3\2\2\2\u0194\u0192\3\2\2\2\u0195"+
		"\u0196\7!\2\2\u0196\u019a\5\26\f\2\u0197\u0199\7\27\2\2\u0198\u0197\3"+
		"\2\2\2\u0199\u019c\3\2\2\2\u019a\u0198\3\2\2\2\u019a\u019b\3\2\2\2\u019b"+
		"\25\3\2\2\2\u019c\u019a\3\2\2\2\u019d\u019f\7\"\2\2\u019e\u01a0\5\30\r"+
		"\2\u019f\u019e\3\2\2\2\u01a0\u01a1\3\2\2\2\u01a1\u019f\3\2\2\2\u01a1\u01a2"+
		"\3\2\2\2\u01a2\27\3\2\2\2\u01a3\u01a5\7>\2\2\u01a4\u01a3\3\2\2\2\u01a5"+
		"\u01a8\3\2\2\2\u01a6\u01a4\3\2\2\2\u01a6\u01a7\3\2\2\2\u01a7\u01ac\3\2"+
		"\2\2\u01a8\u01a6\3\2\2\2\u01a9\u01ab\78\2\2\u01aa\u01a9\3\2\2\2\u01ab"+
		"\u01ae\3\2\2\2\u01ac\u01aa\3\2\2\2\u01ac\u01ad\3\2\2\2\u01ad\u01af\3\2"+
		"\2\2\u01ae\u01ac\3\2\2\2\u01af\u01b0\7H\2\2\u01b0\u01b1\7\26\2\2\u01b1"+
		"\u01b5\5*\26\2\u01b2\u01b4\79\2\2\u01b3\u01b2\3\2\2\2\u01b4\u01b7\3\2"+
		"\2\2\u01b5\u01b3\3\2\2\2\u01b5\u01b6\3\2\2\2\u01b6\u01bb\3\2\2\2\u01b7"+
		"\u01b5\3\2\2\2\u01b8\u01ba\7\27\2\2\u01b9\u01b8\3\2\2\2\u01ba\u01bd\3"+
		"\2\2\2\u01bb\u01b9\3\2\2\2\u01bb\u01bc\3\2\2\2\u01bc\u01c6\3\2\2\2\u01bd"+
		"\u01bb\3\2\2\2\u01be\u01bf\5,\27\2\u01bf\u01c0\5\30\r\2\u01c0\u01c5\3"+
		"\2\2\2\u01c1\u01c2\5.\30\2\u01c2\u01c3\5\30\r\2\u01c3\u01c5\3\2\2\2\u01c4"+
		"\u01be\3\2\2\2\u01c4\u01c1\3\2\2\2\u01c5\u01c8\3\2\2\2\u01c6\u01c4\3\2"+
		"\2\2\u01c6\u01c7\3\2\2\2\u01c7\u01f3\3\2\2\2\u01c8\u01c6\3\2\2\2\u01c9"+
		"\u01cb\7>\2\2\u01ca\u01c9\3\2\2\2\u01cb\u01ce\3\2\2\2\u01cc\u01ca\3\2"+
		"\2\2\u01cc\u01cd\3\2\2\2\u01cd\u01d2\3\2\2\2\u01ce\u01cc\3\2\2\2\u01cf"+
		"\u01d1\78\2\2\u01d0\u01cf\3\2\2\2\u01d1\u01d4\3\2\2\2\u01d2\u01d0\3\2"+
		"\2\2\u01d2\u01d3\3\2\2\2\u01d3\u01d5\3\2\2\2\u01d4\u01d2\3\2\2\2\u01d5"+
		"\u01d6\7)\2\2\u01d6\u01d7\78\2\2\u01d7\u01d8\7H\2\2\u01d8\u01d9\79\2\2"+
		"\u01d9\u01da\7\26\2\2\u01da\u01de\5*\26\2\u01db\u01dd\79\2\2\u01dc\u01db"+
		"\3\2\2\2\u01dd\u01e0\3\2\2\2\u01de\u01dc\3\2\2\2\u01de\u01df\3\2\2\2\u01df"+
		"\u01e4\3\2\2\2\u01e0\u01de\3\2\2\2\u01e1\u01e3\7\27\2\2\u01e2\u01e1\3"+
		"\2\2\2\u01e3\u01e6\3\2\2\2\u01e4\u01e2\3\2\2\2\u01e4\u01e5\3\2\2\2\u01e5"+
		"\u01ef\3\2\2\2\u01e6\u01e4\3\2\2\2\u01e7\u01e8\5,\27\2\u01e8\u01e9\5\30"+
		"\r\2\u01e9\u01ee\3\2\2\2\u01ea\u01eb\5.\30\2\u01eb\u01ec\5\30\r\2\u01ec"+
		"\u01ee\3\2\2\2\u01ed\u01e7\3\2\2\2\u01ed\u01ea\3\2\2\2\u01ee\u01f1\3\2"+
		"\2\2\u01ef\u01ed\3\2\2\2\u01ef\u01f0\3\2\2\2\u01f0\u01f3\3\2\2\2\u01f1"+
		"\u01ef\3\2\2\2\u01f2\u01a6\3\2\2\2\u01f2\u01cc\3\2\2\2\u01f3\31\3\2\2"+
		"\2\u01f4\u01f6\7\27\2\2\u01f5\u01f4\3\2\2\2\u01f6\u01f9\3\2\2\2\u01f7"+
		"\u01f5\3\2\2\2\u01f7\u01f8\3\2\2\2\u01f8\u01fa\3\2\2\2\u01f9\u01f7\3\2"+
		"\2\2\u01fa\u01fe\7\'\2\2\u01fb\u01fd\5\34\17\2\u01fc\u01fb\3\2\2\2\u01fd"+
		"\u0200\3\2\2\2\u01fe\u01fc\3\2\2\2\u01fe\u01ff\3\2\2\2\u01ff\u0204\3\2"+
		"\2\2\u0200\u01fe\3\2\2\2\u0201\u0203\7\27\2\2\u0202\u0201\3\2\2\2\u0203"+
		"\u0206\3\2\2\2\u0204\u0202\3\2\2\2\u0204\u0205\3\2\2\2\u0205\33\3\2\2"+
		"\2\u0206\u0204\3\2\2\2\u0207\u0209\7\27\2\2\u0208\u0207\3\2\2\2\u0209"+
		"\u020c\3\2\2\2\u020a\u0208\3\2\2\2\u020a\u020b\3\2\2\2\u020b\u0210\3\2"+
		"\2\2\u020c\u020a\3\2\2\2\u020d\u020f\7>\2\2\u020e\u020d\3\2\2\2\u020f"+
		"\u0212\3\2\2\2\u0210\u020e\3\2\2\2\u0210\u0211\3\2\2\2\u0211\u0216\3\2"+
		"\2\2\u0212\u0210\3\2\2\2\u0213\u0215\78\2\2\u0214\u0213\3\2\2\2\u0215"+
		"\u0218\3\2\2\2\u0216\u0217\3\2\2\2\u0216\u0214\3\2\2\2\u0217\u021c\3\2"+
		"\2\2\u0218\u0216\3\2\2\2\u0219\u021b\7\60\2\2\u021a\u0219\3\2\2\2\u021b"+
		"\u021e\3\2\2\2\u021c\u021a\3\2\2\2\u021c\u021d\3\2\2\2\u021d\u0222\3\2"+
		"\2\2\u021e\u021c\3\2\2\2\u021f\u0221\78\2\2\u0220\u021f\3\2\2\2\u0221"+
		"\u0224\3\2\2\2\u0222\u0220\3\2\2\2\u0222\u0223\3\2\2\2\u0223\u0225\3\2"+
		"\2\2\u0224\u0222\3\2\2\2\u0225\u0226\7(\2\2\u0226\u0227\7\3\2\2\u0227"+
		"\u0228\7\61\2\2\u0228\u0229\7\4\2\2\u0229\u022a\7\5\2\2\u022a\u022b\5"+
		"*\26\2\u022b\u022c\7\5\2\2\u022c\u0230\7H\2\2\u022d\u022f\79\2\2\u022e"+
		"\u022d\3\2\2\2\u022f\u0232\3\2\2\2\u0230\u022e\3\2\2\2\u0230\u0231\3\2"+
		"\2\2\u0231\u023a\3\2\2\2\u0232\u0230\3\2\2\2\u0233\u0236\t\2\2\2\u0234"+
		"\u0237\5\30\r\2\u0235\u0237\5\34\17\2\u0236\u0234\3\2\2\2\u0236\u0235"+
		"\3\2\2\2\u0237\u0239\3\2\2\2\u0238\u0233\3\2\2\2\u0239\u023c\3\2\2\2\u023a"+
		"\u0238\3\2\2\2\u023a\u023b\3\2\2\2\u023b\u0240\3\2\2\2\u023c\u023a\3\2"+
		"\2\2\u023d\u023f\79\2\2\u023e\u023d\3\2\2\2\u023f\u0242\3\2\2\2\u0240"+
		"\u023e\3\2\2\2\u0240\u0241\3\2\2\2\u0241\u027a\3\2\2\2\u0242\u0240\3\2"+
		"\2\2\u0243\u0245\7>\2\2\u0244\u0243\3\2\2\2\u0245\u0248\3\2\2\2\u0246"+
		"\u0244\3\2\2\2\u0246\u0247\3\2\2\2\u0247\u024c\3\2\2\2\u0248\u0246\3\2"+
		"\2\2\u0249\u024b\78\2\2\u024a\u0249\3\2\2\2\u024b\u024e\3\2\2\2\u024c"+
		"\u024a\3\2\2\2\u024c\u024d\3\2\2\2\u024d\u024f\3\2\2\2\u024e\u024c\3\2"+
		"\2\2\u024f\u025a\5\30\r\2\u0250\u0255\t\2\2\2\u0251\u0254\5\30\r\2\u0252"+
		"\u0254\5\34\17\2\u0253\u0251\3\2\2\2\u0253\u0252\3\2\2\2\u0254\u0257\3"+
		"\2\2\2\u0255\u0253\3\2\2\2\u0255\u0256\3\2\2\2\u0256\u0259\3\2\2\2\u0257"+
		"\u0255\3\2\2\2\u0258\u0250\3\2\2\2\u0259\u025c\3\2\2\2\u025a\u0258\3\2"+
		"\2\2\u025a\u025b\3\2\2\2\u025b\u0260\3\2\2\2\u025c\u025a\3\2\2\2\u025d"+
		"\u025f\79\2\2\u025e\u025d\3\2\2\2\u025f\u0262\3\2\2\2\u0260\u025e\3\2"+
		"\2\2\u0260\u0261\3\2\2\2\u0261\u027a\3\2\2\2\u0262\u0260\3\2\2\2\u0263"+
		"\u0265\7>\2\2\u0264\u0263\3\2\2\2\u0265\u0268\3\2\2\2\u0266\u0264\3\2"+
		"\2\2\u0266\u0267\3\2\2\2\u0267\u026c\3\2\2\2\u0268\u0266\3\2\2\2\u0269"+
		"\u026b\78\2\2\u026a\u0269\3\2\2\2\u026b\u026e\3\2\2\2\u026c\u026a\3\2"+
		"\2\2\u026c\u026d\3\2\2\2\u026d\u026f\3\2\2\2\u026e\u026c\3\2\2\2\u026f"+
		"\u0270\7\61\2\2\u0270\u0271\78\2\2\u0271\u0272\7H\2\2\u0272\u0276\79\2"+
		"\2\u0273\u0275\79\2\2\u0274\u0273\3\2\2\2\u0275\u0278\3\2\2\2\u0276\u0274"+
		"\3\2\2\2\u0276\u0277\3\2\2\2\u0277\u027a\3\2\2\2\u0278\u0276\3\2\2\2\u0279"+
		"\u020a\3\2\2\2\u0279\u0246\3\2\2\2\u0279\u0266\3\2\2\2\u027a\35\3\2\2"+
		"\2\u027b\u027d\7\27\2\2\u027c\u027b\3\2\2\2\u027d\u0280\3\2\2\2\u027e"+
		"\u027c\3\2\2\2\u027e\u027f\3\2\2\2\u027f\u0281\3\2\2\2\u0280\u027e\3\2"+
		"\2\2\u0281\u0282\7\6\2\2\u0282\u0286\7H\2\2\u0283\u0285\7\27\2\2\u0284"+
		"\u0283\3\2\2\2\u0285\u0288\3\2\2\2\u0286\u0284\3\2\2\2\u0286\u0287\3\2"+
		"\2\2\u0287\37\3\2\2\2\u0288\u0286\3\2\2\2\u0289\u028b\7\27\2\2\u028a\u0289"+
		"\3\2\2\2\u028b\u028e\3\2\2\2\u028c\u028a\3\2\2\2\u028c\u028d\3\2\2\2\u028d"+
		"\u028f\3\2\2\2\u028e\u028c\3\2\2\2\u028f\u0293\t\3\2\2\u0290\u0292\7\27"+
		"\2\2\u0291\u0290\3\2\2\2\u0292\u0295\3\2\2\2\u0293\u0291\3\2\2\2\u0293"+
		"\u0294\3\2\2\2\u0294!\3\2\2\2\u0295\u0293\3\2\2\2\u0296\u0298\7\27\2\2"+
		"\u0297\u0296\3\2\2\2\u0298\u029b\3\2\2\2\u0299\u0297\3\2\2\2\u0299\u029a"+
		"\3\2\2\2\u029a\u029c\3\2\2\2\u029b\u0299\3\2\2\2\u029c\u029d\7\7\2\2\u029d"+
		"\u02a1\t\4\2\2\u029e\u02a0\7\27\2\2\u029f\u029e\3\2\2\2\u02a0\u02a3\3"+
		"\2\2\2\u02a1\u029f\3\2\2\2\u02a1\u02a2\3\2\2\2\u02a2#\3\2\2\2\u02a3\u02a1"+
		"\3\2\2\2\u02a4\u02a6\7\27\2\2\u02a5\u02a4\3\2\2\2\u02a6\u02a9\3\2\2\2"+
		"\u02a7\u02a5\3\2\2\2\u02a7\u02a8\3\2\2\2\u02a8\u02aa\3\2\2\2\u02a9\u02a7"+
		"\3\2\2\2\u02aa\u02d0\7#\2\2\u02ab\u02ad\7H\2\2\u02ac\u02ae\7\27\2\2\u02ad"+
		"\u02ac\3\2\2\2\u02ae\u02af\3\2\2\2\u02af\u02ad\3\2\2\2\u02af\u02b0\3\2"+
		"\2\2\u02b0\u02cf\3\2\2\2\u02b1\u02b5\7H\2\2\u02b2\u02b4\7\27\2\2\u02b3"+
		"\u02b2\3\2\2\2\u02b4\u02b7\3\2\2\2\u02b5\u02b3\3\2\2\2\u02b5\u02b6\3\2"+
		"\2\2\u02b6\u02b8\3\2\2\2\u02b7\u02b5\3\2\2\2\u02b8\u02bc\7\66\2\2\u02b9"+
		"\u02bb\7\27\2\2\u02ba\u02b9\3\2\2\2\u02bb\u02be\3\2\2\2\u02bc\u02ba\3"+
		"\2\2\2\u02bc\u02bd\3\2\2\2\u02bd\u02ca\3\2\2\2\u02be\u02bc\3\2\2\2\u02bf"+
		"\u02c0\7H\2\2\u02c0\u02c1\7:\2\2\u02c1\u02c5\t\5\2\2\u02c2\u02c4\7\27"+
		"\2\2\u02c3\u02c2\3\2\2\2\u02c4\u02c7\3\2\2\2\u02c5\u02c3\3\2\2\2\u02c5"+
		"\u02c6\3\2\2\2\u02c6\u02c9\3\2\2\2\u02c7\u02c5\3\2\2\2\u02c8\u02bf\3\2"+
		"\2\2\u02c9\u02cc\3\2\2\2\u02ca\u02c8\3\2\2\2\u02ca\u02cb\3\2\2\2\u02cb"+
		"\u02cd\3\2\2\2\u02cc\u02ca\3\2\2\2\u02cd\u02cf\7\67\2\2\u02ce\u02ab\3"+
		"\2\2\2\u02ce\u02b1\3\2\2\2\u02cf\u02d2\3\2\2\2\u02d0\u02ce\3\2\2\2\u02d0"+
		"\u02d1\3\2\2\2\u02d1\u02d6\3\2\2\2\u02d2\u02d0\3\2\2\2\u02d3\u02d5\7\27"+
		"\2\2\u02d4\u02d3\3\2\2\2\u02d5\u02d8\3\2\2\2\u02d6\u02d4\3\2\2\2\u02d6"+
		"\u02d7\3\2\2\2\u02d7%\3\2\2\2\u02d8\u02d6\3\2\2\2\u02d9\u02db\7\27\2\2"+
		"\u02da\u02d9\3\2\2\2\u02db\u02de\3\2\2\2\u02dc\u02da\3\2\2\2\u02dc\u02dd"+
		"\3\2\2\2\u02dd\u02df\3\2\2\2\u02de\u02dc\3\2\2\2\u02df\u0305\7$\2\2\u02e0"+
		"\u02e2\7H\2\2\u02e1\u02e3\7\27\2\2\u02e2\u02e1\3\2\2\2\u02e3\u02e4\3\2"+
		"\2\2\u02e4\u02e2\3\2\2\2\u02e4\u02e5\3\2\2\2\u02e5\u0304\3\2\2\2\u02e6"+
		"\u02ea\7H\2\2\u02e7\u02e9\7\27\2\2\u02e8\u02e7\3\2\2\2\u02e9\u02ec\3\2"+
		"\2\2\u02ea\u02e8\3\2\2\2\u02ea\u02eb\3\2\2\2\u02eb\u02ed\3\2\2\2\u02ec"+
		"\u02ea\3\2\2\2\u02ed\u02f1\7\66\2\2\u02ee\u02f0\7\27\2\2\u02ef\u02ee\3"+
		"\2\2\2\u02f0\u02f3\3\2\2\2\u02f1\u02ef\3\2\2\2\u02f1\u02f2\3\2\2\2\u02f2"+
		"\u02ff\3\2\2\2\u02f3\u02f1\3\2\2\2\u02f4\u02f5\7H\2\2\u02f5\u02f6\7:\2"+
		"\2\u02f6\u02fa\t\5\2\2\u02f7\u02f9\7\27\2\2\u02f8\u02f7\3\2\2\2\u02f9"+
		"\u02fc\3\2\2\2\u02fa\u02f8\3\2\2\2\u02fa\u02fb\3\2\2\2\u02fb\u02fe\3\2"+
		"\2\2\u02fc\u02fa\3\2\2\2\u02fd\u02f4\3\2\2\2\u02fe\u0301\3\2\2\2\u02ff"+
		"\u02fd\3\2\2\2\u02ff\u0300\3\2\2\2\u0300\u0302\3\2\2\2\u0301\u02ff\3\2"+
		"\2\2\u0302\u0304\7\67\2\2\u0303\u02e0\3\2\2\2\u0303\u02e6\3\2\2\2\u0304"+
		"\u0307\3\2\2\2\u0305\u0303\3\2\2\2\u0305\u0306\3\2\2\2\u0306\u030b\3\2"+
		"\2\2\u0307\u0305\3\2\2\2\u0308\u030a\7\27\2\2\u0309\u0308\3\2\2\2\u030a"+
		"\u030d\3\2\2\2\u030b\u0309\3\2\2\2\u030b\u030c\3\2\2\2\u030c\'\3\2\2\2"+
		"\u030d\u030b\3\2\2\2\u030e\u0310\7\27\2\2\u030f\u030e\3\2\2\2\u0310\u0313"+
		"\3\2\2\2\u0311\u030f\3\2\2\2\u0311\u0312\3\2\2\2\u0312\u0314\3\2\2\2\u0313"+
		"\u0311\3\2\2\2\u0314\u0315\7+\2\2\u0315\u0319\7I\2\2\u0316\u0318\7\27"+
		"\2\2\u0317\u0316\3\2\2\2\u0318\u031b\3\2\2\2\u0319\u0317\3\2\2\2\u0319"+
		"\u031a\3\2\2\2\u031a\u031c\3\2\2\2\u031b\u0319\3\2\2\2\u031c\u0320\7\66"+
		"\2\2\u031d\u031f\7\27\2\2\u031e\u031d\3\2\2\2\u031f\u0322\3\2\2\2\u0320"+
		"\u031e\3\2\2\2\u0320\u0321\3\2\2\2\u0321\u032e\3\2\2\2\u0322\u0320\3\2"+
		"\2\2\u0323\u0324\7,\2\2\u0324\u0325\7:\2\2\u0325\u0329\5*\26\2\u0326\u0328"+
		"\7\27\2\2\u0327\u0326\3\2\2\2\u0328\u032b\3\2\2\2\u0329\u0327\3\2\2\2"+
		"\u0329\u032a\3\2\2\2\u032a\u032d\3\2\2\2\u032b\u0329\3\2\2\2\u032c\u0323"+
		"\3\2\2\2\u032d\u0330\3\2\2\2\u032e\u032c\3\2\2\2\u032e\u032f\3\2\2\2\u032f"+
		"\u0331\3\2\2\2\u0330\u032e\3\2\2\2\u0331\u0335\7\67\2\2\u0332\u0334\7"+
		"\27\2\2\u0333\u0332\3\2\2\2\u0334\u0337\3\2\2\2\u0335\u0333\3\2\2\2\u0335"+
		"\u0336\3\2\2\2\u0336)\3\2\2\2\u0337\u0335\3\2\2\2\u0338\u033f\7\31\2\2"+
		"\u0339\u033f\7J\2\2\u033a\u033f\7\32\2\2\u033b\u033c\7J\2\2\u033c\u033d"+
		"\7\21\2\2\u033d\u033f\7I\2\2\u033e\u0338\3\2\2\2\u033e\u0339\3\2\2\2\u033e"+
		"\u033a\3\2\2\2\u033e\u033b\3\2\2\2\u033f+\3\2\2\2\u0340\u0341\7\22\2\2"+
		"\u0341-\3\2\2\2\u0342\u0343\7\23\2\2\u0343/\3\2\2\2~\63:JOVZ`oty\u0081"+
		"\u0089\u008f\u0096\u009f\u00a2\u00ad\u00af\u00b3\u00b8\u00be\u00c6\u00cc"+
		"\u00d3\u00dc\u00df\u00e9\u00eb\u00ef\u00f4\u00fa\u0102\u0108\u010f\u0118"+
		"\u011b\u0123\u0125\u0129\u012e\u0134\u0139\u013e\u0144\u014b\u0152\u0158"+
		"\u015e\u0165\u016b\u0172\u0179\u017f\u0185\u018c\u0192\u019a\u01a1\u01a6"+
		"\u01ac\u01b5\u01bb\u01c4\u01c6\u01cc\u01d2\u01de\u01e4\u01ed\u01ef\u01f2"+
		"\u01f7\u01fe\u0204\u020a\u0210\u0216\u021c\u0222\u0230\u0236\u023a\u0240"+
		"\u0246\u024c\u0253\u0255\u025a\u0260\u0266\u026c\u0276\u0279\u027e\u0286"+
		"\u028c\u0293\u0299\u02a1\u02a7\u02af\u02b5\u02bc\u02c5\u02ca\u02ce\u02d0"+
		"\u02d6\u02dc\u02e4\u02ea\u02f1\u02fa\u02ff\u0303\u0305\u030b\u0311\u0319"+
		"\u0320\u0329\u032e\u0335\u033e";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}