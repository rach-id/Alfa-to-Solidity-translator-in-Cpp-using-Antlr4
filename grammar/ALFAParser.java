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
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		T__24=25, T__25=26, BlockComment=27, LineComment=28, VALUE=29, TYPES=30, 
		COMPARE=31, NEWLINE=32, WHITESPACE=33, BOOL=34, NAMESPACE=35, POLICYSET=36, 
		POLICY=37, RULE=38, PERMIT=39, DENY=40, TARGET=41, CLAUSE=42, ADVICE=43, 
		OBLIGATION=44, ONPERMIT=45, ONDENY=46, CONDITION=47, FUNCTION=48, BAGFUNCTION=49, 
		COMMENT=50, ATTRIBUTE=51, IDENTIFIERS=52, ID=53, TYPE=54, CATEGORY=55, 
		PLUS=56, MINUS=57, DIV=58, MULTIPLY=59, RIGHTCBRACKET=60, LEFTCBRACKET=61, 
		RIGHTPAREN=62, LEFTPAREN=63, ASSIGN=64, MOD=65, AND=66, OR=67, NOT=68, 
		LESS=69, GREATER=70, CARET=71, EQUAL=72, NOTEQUAL=73, LESSEQUAL=74, GREATEREQUAL=75, 
		ANDAND=76, OROR=77, TARGETRESSOURCE=78, WORD=79, STRING=80;
	public static final int
		RULE_translationunit = 0, RULE_declarationseq = 1, RULE_namespaceDefinition = 2, 
		RULE_policysetDefinition = 3, RULE_policyDefinition = 4, RULE_ruleDefinition = 5, 
		RULE_onBlock = 6, RULE_onPermitBlock = 7, RULE_onDenyBlock = 8, RULE_targetDefinition = 9, 
		RULE_clauseDefinition = 10, RULE_booleenExpression = 11, RULE_conditionDefinition = 12, 
		RULE_condition = 13, RULE_functionType = 14, RULE_functionName = 15, RULE_importDefinition = 16, 
		RULE_permitdeny = 17, RULE_combiningAlgorithm = 18, RULE_adviceDefinition = 19, 
		RULE_obligationDefinition = 20, RULE_attributeDefinition = 21;
	public static final String[] ruleNames = {
		"translationunit", "declarationseq", "namespaceDefinition", "policysetDefinition", 
		"policyDefinition", "ruleDefinition", "onBlock", "onPermitBlock", "onDenyBlock", 
		"targetDefinition", "clauseDefinition", "booleenExpression", "conditionDefinition", 
		"condition", "functionType", "functionName", "importDefinition", "permitdeny", 
		"combiningAlgorithm", "adviceDefinition", "obligationDefinition", "attributeDefinition"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'and'", "'or'", "'['", "']'", "','", "'AllOf'", "'AnyOf'", "'AnyOfAny'", 
		"'AllOfAny'", "'AnyOfAll'", "'AllOfAll'", "'stringRegexpMatch'", "'anyURIRegesMatch'", 
		"'NameRegexMatch'", "'booleanOneAndOnly'", "'import'", "'apply'", "'denyOverrides'", 
		"'permitOverrides'", "'firstApplicable'", "'onlyOneApplicable'", "'orderedDenyOverrides'", 
		"'orderedPermitOverrides'", "'denyUnlessPermit'", "'permitUnlessDeny'", 
		"'onPermitApplySecond'", null, null, null, null, null, null, null, null, 
		"'namespace'", "'policyset'", "'policy'", "'rule'", "'permit'", "'deny'", 
		"'target'", "'clause'", "'advice'", "'obligation'", "'on permit'", "'on deny'", 
		"'condition'", "'function'", null, null, "'attribute'", null, "'id'", 
		"'type'", "'category'", "'+'", "'-'", "'/'", "'*'", "'{'", "'}'", "'('", 
		"')'", "'='", "'%'", "'&'", "'|'", "'not'", "'<'", "'>'", "'^'", "'=='", 
		"'!='", "'<='", "'>='", "'&&'", "'||'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, "BlockComment", "LineComment", "VALUE", "TYPES", "COMPARE", 
		"NEWLINE", "WHITESPACE", "BOOL", "NAMESPACE", "POLICYSET", "POLICY", "RULE", 
		"PERMIT", "DENY", "TARGET", "CLAUSE", "ADVICE", "OBLIGATION", "ONPERMIT", 
		"ONDENY", "CONDITION", "FUNCTION", "BAGFUNCTION", "COMMENT", "ATTRIBUTE", 
		"IDENTIFIERS", "ID", "TYPE", "CATEGORY", "PLUS", "MINUS", "DIV", "MULTIPLY", 
		"RIGHTCBRACKET", "LEFTCBRACKET", "RIGHTPAREN", "LEFTPAREN", "ASSIGN", 
		"MOD", "AND", "OR", "NOT", "LESS", "GREATER", "CARET", "EQUAL", "NOTEQUAL", 
		"LESSEQUAL", "GREATEREQUAL", "ANDAND", "OROR", "TARGETRESSOURCE", "WORD", 
		"STRING"
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
			setState(45); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(44);
				declarationseq();
				}
				}
				setState(47); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( ((((_la - 16)) & ~0x3f) == 0 && ((1L << (_la - 16)) & ((1L << (T__15 - 16)) | (1L << (T__16 - 16)) | (1L << (NEWLINE - 16)) | (1L << (NAMESPACE - 16)) | (1L << (POLICYSET - 16)) | (1L << (POLICY - 16)) | (1L << (PERMIT - 16)) | (1L << (DENY - 16)) | (1L << (TARGET - 16)) | (1L << (ONPERMIT - 16)) | (1L << (ONDENY - 16)) | (1L << (CONDITION - 16)) | (1L << (BAGFUNCTION - 16)) | (1L << (COMMENT - 16)) | (1L << (ATTRIBUTE - 16)) | (1L << (RIGHTPAREN - 16)) | (1L << (NOT - 16)) | (1L << (TARGETRESSOURCE - 16)))) != 0) );
			setState(49);
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
			setState(70);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(54);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(51);
						match(NEWLINE);
						}
						} 
					}
					setState(56);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
				}
				setState(57);
				match(NEWLINE);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(58);
				namespaceDefinition();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(59);
				match(COMMENT);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(60);
				importDefinition();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(61);
				attributeDefinition();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(62);
				policysetDefinition();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(63);
				policyDefinition();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(64);
				conditionDefinition();
				}
				break;
			case 9:
				enterOuterAlt(_localctx, 9);
				{
				setState(65);
				targetDefinition();
				}
				break;
			case 10:
				enterOuterAlt(_localctx, 10);
				{
				setState(66);
				combiningAlgorithm();
				}
				break;
			case 11:
				enterOuterAlt(_localctx, 11);
				{
				setState(67);
				onBlock();
				}
				break;
			case 12:
				enterOuterAlt(_localctx, 12);
				{
				setState(68);
				permitdeny();
				}
				break;
			case 13:
				enterOuterAlt(_localctx, 13);
				{
				setState(69);
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
			setState(75);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(72);
				match(NEWLINE);
				}
				}
				setState(77);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(78);
			match(NAMESPACE);
			setState(86);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case NEWLINE:
			case RIGHTCBRACKET:
				{
				setState(82);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==NEWLINE) {
					{
					{
					setState(79);
					match(NEWLINE);
					}
					}
					setState(84);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				break;
			case WORD:
				{
				setState(85);
				match(WORD);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(88);
			match(RIGHTCBRACKET);
			setState(117);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 16)) & ~0x3f) == 0 && ((1L << (_la - 16)) & ((1L << (T__15 - 16)) | (1L << (T__16 - 16)) | (1L << (NEWLINE - 16)) | (1L << (NAMESPACE - 16)) | (1L << (POLICYSET - 16)) | (1L << (POLICY - 16)) | (1L << (PERMIT - 16)) | (1L << (DENY - 16)) | (1L << (TARGET - 16)) | (1L << (ONPERMIT - 16)) | (1L << (ONDENY - 16)) | (1L << (CONDITION - 16)) | (1L << (BAGFUNCTION - 16)) | (1L << (COMMENT - 16)) | (1L << (ATTRIBUTE - 16)) | (1L << (RIGHTPAREN - 16)) | (1L << (NOT - 16)) | (1L << (TARGETRESSOURCE - 16)))) != 0)) {
				{
				{
				setState(92);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(89);
						match(NEWLINE);
						}
						} 
					}
					setState(94);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
				}
				setState(107);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
				case 1:
					{
					setState(95);
					namespaceDefinition();
					}
					break;
				case 2:
					{
					setState(96);
					match(COMMENT);
					}
					break;
				case 3:
					{
					setState(97);
					importDefinition();
					}
					break;
				case 4:
					{
					setState(98);
					attributeDefinition();
					}
					break;
				case 5:
					{
					setState(99);
					policysetDefinition();
					}
					break;
				case 6:
					{
					setState(100);
					policyDefinition();
					}
					break;
				case 7:
					{
					setState(101);
					conditionDefinition();
					}
					break;
				case 8:
					{
					setState(102);
					targetDefinition();
					}
					break;
				case 9:
					{
					setState(103);
					combiningAlgorithm();
					}
					break;
				case 10:
					{
					setState(104);
					onBlock();
					}
					break;
				case 11:
					{
					setState(105);
					permitdeny();
					}
					break;
				case 12:
					{
					setState(106);
					booleenExpression();
					}
					break;
				}
				setState(112);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(109);
						match(NEWLINE);
						}
						} 
					}
					setState(114);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,8,_ctx);
				}
				}
				}
				setState(119);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(120);
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
			setState(125);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(122);
				match(NEWLINE);
				}
				}
				setState(127);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(128);
			match(POLICYSET);
			setState(175);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				{
				setState(129);
				match(WORD);
				setState(133);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(130);
						match(NEWLINE);
						}
						} 
					}
					setState(135);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
				}
				}
				break;
			case 2:
				{
				setState(158);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
				case 1:
					{
					setState(139);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(136);
						match(NEWLINE);
						}
						}
						setState(141);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				case 2:
					{
					setState(142);
					match(WORD);
					setState(146);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(143);
						match(NEWLINE);
						}
						}
						setState(148);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				case 3:
					{
					setState(149);
					match(WORD);
					setState(150);
					match(ASSIGN);
					setState(151);
					match(STRING);
					setState(155);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(152);
						match(NEWLINE);
						}
						}
						setState(157);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				}
				setState(160);
				match(RIGHTCBRACKET);
				setState(171);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__16) | (1L << NEWLINE) | (1L << NAMESPACE) | (1L << POLICYSET) | (1L << POLICY) | (1L << RULE) | (1L << TARGET) | (1L << ONPERMIT) | (1L << ONDENY) | (1L << CONDITION))) != 0)) {
					{
					setState(169);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
					case 1:
						{
						setState(161);
						namespaceDefinition();
						}
						break;
					case 2:
						{
						setState(162);
						policysetDefinition();
						}
						break;
					case 3:
						{
						setState(163);
						policyDefinition();
						}
						break;
					case 4:
						{
						setState(164);
						ruleDefinition();
						}
						break;
					case 5:
						{
						setState(165);
						conditionDefinition();
						}
						break;
					case 6:
						{
						setState(166);
						targetDefinition();
						}
						break;
					case 7:
						{
						setState(167);
						combiningAlgorithm();
						}
						break;
					case 8:
						{
						setState(168);
						onBlock();
						}
						break;
					}
					}
					setState(173);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(174);
				match(LEFTCBRACKET);
				}
				break;
			}
			setState(180);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,19,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(177);
					match(NEWLINE);
					}
					} 
				}
				setState(182);
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
			setState(186);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(183);
				match(NEWLINE);
				}
				}
				setState(188);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(189);
			match(POLICY);
			setState(235);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
			case 1:
				{
				setState(190);
				match(WORD);
				setState(194);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(191);
						match(NEWLINE);
						}
						} 
					}
					setState(196);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,21,_ctx);
				}
				}
				break;
			case 2:
				{
				setState(219);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
				case 1:
					{
					setState(200);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(197);
						match(NEWLINE);
						}
						}
						setState(202);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				case 2:
					{
					setState(203);
					match(WORD);
					setState(207);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(204);
						match(NEWLINE);
						}
						}
						setState(209);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				case 3:
					{
					setState(210);
					match(WORD);
					setState(211);
					match(ASSIGN);
					setState(212);
					match(STRING);
					setState(216);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(213);
						match(NEWLINE);
						}
						}
						setState(218);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				}
				setState(221);
				match(RIGHTCBRACKET);
				setState(231);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__16) | (1L << NEWLINE) | (1L << NAMESPACE) | (1L << POLICY) | (1L << RULE) | (1L << TARGET) | (1L << ONPERMIT) | (1L << ONDENY) | (1L << CONDITION))) != 0)) {
					{
					setState(229);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,26,_ctx) ) {
					case 1:
						{
						setState(222);
						namespaceDefinition();
						}
						break;
					case 2:
						{
						setState(223);
						policyDefinition();
						}
						break;
					case 3:
						{
						setState(224);
						ruleDefinition();
						}
						break;
					case 4:
						{
						setState(225);
						conditionDefinition();
						}
						break;
					case 5:
						{
						setState(226);
						targetDefinition();
						}
						break;
					case 6:
						{
						setState(227);
						combiningAlgorithm();
						}
						break;
					case 7:
						{
						setState(228);
						onBlock();
						}
						break;
					}
					}
					setState(233);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(234);
				match(LEFTCBRACKET);
				}
				break;
			}
			setState(240);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,29,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(237);
					match(NEWLINE);
					}
					} 
				}
				setState(242);
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
			setState(246);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(243);
				match(NEWLINE);
				}
				}
				setState(248);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(249);
			match(RULE);
			setState(293);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,38,_ctx) ) {
			case 1:
				{
				setState(250);
				match(WORD);
				setState(254);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,31,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(251);
						match(NEWLINE);
						}
						} 
					}
					setState(256);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,31,_ctx);
				}
				}
				break;
			case 2:
				{
				setState(279);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,35,_ctx) ) {
				case 1:
					{
					setState(260);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(257);
						match(NEWLINE);
						}
						}
						setState(262);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				case 2:
					{
					setState(263);
					match(WORD);
					setState(267);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(264);
						match(NEWLINE);
						}
						}
						setState(269);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				case 3:
					{
					setState(270);
					match(WORD);
					setState(271);
					match(ASSIGN);
					setState(272);
					match(STRING);
					setState(276);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(273);
						match(NEWLINE);
						}
						}
						setState(278);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					}
					break;
				}
				setState(281);
				match(RIGHTCBRACKET);
				setState(289);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << NEWLINE) | (1L << RULE) | (1L << PERMIT) | (1L << DENY) | (1L << TARGET) | (1L << ONPERMIT) | (1L << ONDENY) | (1L << CONDITION))) != 0)) {
					{
					setState(287);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,36,_ctx) ) {
					case 1:
						{
						setState(282);
						ruleDefinition();
						}
						break;
					case 2:
						{
						setState(283);
						conditionDefinition();
						}
						break;
					case 3:
						{
						setState(284);
						targetDefinition();
						}
						break;
					case 4:
						{
						setState(285);
						permitdeny();
						}
						break;
					case 5:
						{
						setState(286);
						onBlock();
						}
						break;
					}
					}
					setState(291);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(292);
				match(LEFTCBRACKET);
				}
				break;
			}
			setState(298);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,39,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(295);
					match(NEWLINE);
					}
					} 
				}
				setState(300);
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
			setState(304);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,40,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(301);
					match(NEWLINE);
					}
					} 
				}
				setState(306);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,40,_ctx);
			}
			setState(309);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,41,_ctx) ) {
			case 1:
				{
				setState(307);
				onPermitBlock();
				}
				break;
			case 2:
				{
				setState(308);
				onDenyBlock();
				}
				break;
			}
			setState(314);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,42,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(311);
					match(NEWLINE);
					}
					} 
				}
				setState(316);
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
			setState(320);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(317);
				match(NEWLINE);
				}
				}
				setState(322);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(323);
			match(ONPERMIT);
			setState(327);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(324);
				match(NEWLINE);
				}
				}
				setState(329);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(330);
			match(RIGHTCBRACKET);
			setState(334);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,45,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(331);
					match(NEWLINE);
					}
					} 
				}
				setState(336);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,45,_ctx);
			}
			setState(340);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,46,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(337);
					obligationDefinition();
					}
					} 
				}
				setState(342);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,46,_ctx);
			}
			setState(346);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(343);
				match(NEWLINE);
				}
				}
				setState(348);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(349);
			match(LEFTCBRACKET);
			setState(353);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,48,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(350);
					match(NEWLINE);
					}
					} 
				}
				setState(355);
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
			setState(359);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(356);
				match(NEWLINE);
				}
				}
				setState(361);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(362);
			match(ONDENY);
			setState(366);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(363);
				match(NEWLINE);
				}
				}
				setState(368);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(369);
			match(RIGHTCBRACKET);
			setState(373);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,51,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(370);
					match(NEWLINE);
					}
					} 
				}
				setState(375);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,51,_ctx);
			}
			setState(379);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,52,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(376);
					adviceDefinition();
					}
					} 
				}
				setState(381);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,52,_ctx);
			}
			setState(385);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(382);
				match(NEWLINE);
				}
				}
				setState(387);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(388);
			match(LEFTCBRACKET);
			setState(392);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,54,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(389);
					match(NEWLINE);
					}
					} 
				}
				setState(394);
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
			setState(398);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(395);
				match(NEWLINE);
				}
				}
				setState(400);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(401);
			match(TARGET);
			setState(402);
			clauseDefinition();
			setState(406);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,56,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(403);
					match(NEWLINE);
					}
					} 
				}
				setState(408);
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
		public List<ClauseDefinitionContext> clauseDefinition() {
			return getRuleContexts(ClauseDefinitionContext.class);
		}
		public ClauseDefinitionContext clauseDefinition(int i) {
			return getRuleContext(ClauseDefinitionContext.class,i);
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
			setState(409);
			match(CLAUSE);
			setState(411); 
			_errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					setState(410);
					booleenExpression();
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(413); 
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,57,_ctx);
			} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
			setState(418);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,58,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(415);
					clauseDefinition();
					}
					} 
				}
				setState(420);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,58,_ctx);
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

	public static class BooleenExpressionContext extends ParserRuleContext {
		public TerminalNode TARGETRESSOURCE() { return getToken(ALFAParser.TARGETRESSOURCE, 0); }
		public TerminalNode COMPARE() { return getToken(ALFAParser.COMPARE, 0); }
		public TerminalNode VALUE() { return getToken(ALFAParser.VALUE, 0); }
		public List<TerminalNode> NOT() { return getTokens(ALFAParser.NOT); }
		public TerminalNode NOT(int i) {
			return getToken(ALFAParser.NOT, i);
		}
		public List<TerminalNode> NEWLINE() { return getTokens(ALFAParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(ALFAParser.NEWLINE, i);
		}
		public List<BooleenExpressionContext> booleenExpression() {
			return getRuleContexts(BooleenExpressionContext.class);
		}
		public BooleenExpressionContext booleenExpression(int i) {
			return getRuleContext(BooleenExpressionContext.class,i);
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
			switch ( getInterpreter().adaptivePredict(_input,71,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(424);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==NOT) {
					{
					{
					setState(421);
					match(NOT);
					}
					}
					setState(426);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(430);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==RIGHTPAREN) {
					{
					{
					setState(427);
					match(RIGHTPAREN);
					}
					}
					setState(432);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(433);
				match(TARGETRESSOURCE);
				setState(434);
				match(COMPARE);
				setState(435);
				match(VALUE);
				setState(439);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,61,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(436);
						match(LEFTPAREN);
						}
						} 
					}
					setState(441);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,61,_ctx);
				}
				setState(445);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,62,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(442);
						match(NEWLINE);
						}
						} 
					}
					setState(447);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,62,_ctx);
				}
				setState(454);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,64,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						setState(452);
						_errHandler.sync(this);
						switch (_input.LA(1)) {
						case T__0:
							{
							setState(448);
							match(T__0);
							setState(449);
							booleenExpression();
							}
							break;
						case T__1:
							{
							setState(450);
							match(T__1);
							setState(451);
							booleenExpression();
							}
							break;
						default:
							throw new NoViableAltException(this);
						}
						} 
					}
					setState(456);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,64,_ctx);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(460);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==NOT) {
					{
					{
					setState(457);
					match(NOT);
					}
					}
					setState(462);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(466);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==RIGHTPAREN) {
					{
					{
					setState(463);
					match(RIGHTPAREN);
					}
					}
					setState(468);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(469);
				match(BAGFUNCTION);
				setState(470);
				match(RIGHTPAREN);
				setState(471);
				match(TARGETRESSOURCE);
				setState(472);
				match(LEFTPAREN);
				setState(473);
				match(COMPARE);
				setState(474);
				match(VALUE);
				setState(478);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,67,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(475);
						match(LEFTPAREN);
						}
						} 
					}
					setState(480);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,67,_ctx);
				}
				setState(484);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,68,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(481);
						match(NEWLINE);
						}
						} 
					}
					setState(486);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,68,_ctx);
				}
				setState(493);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,70,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						setState(491);
						_errHandler.sync(this);
						switch (_input.LA(1)) {
						case T__0:
							{
							setState(487);
							match(T__0);
							setState(488);
							booleenExpression();
							}
							break;
						case T__1:
							{
							setState(489);
							match(T__1);
							setState(490);
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
					_alt = getInterpreter().adaptivePredict(_input,70,_ctx);
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
			_alt = getInterpreter().adaptivePredict(_input,73,_ctx);
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
				_alt = getInterpreter().adaptivePredict(_input,73,_ctx);
			}
			setState(514);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,74,_ctx);
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
				_alt = getInterpreter().adaptivePredict(_input,74,_ctx);
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
		public FunctionNameContext functionName() {
			return getRuleContext(FunctionNameContext.class,0);
		}
		public TerminalNode VALUE() { return getToken(ALFAParser.VALUE, 0); }
		public TerminalNode TARGETRESSOURCE() { return getToken(ALFAParser.TARGETRESSOURCE, 0); }
		public List<TerminalNode> NEWLINE() { return getTokens(ALFAParser.NEWLINE); }
		public TerminalNode NEWLINE(int i) {
			return getToken(ALFAParser.NEWLINE, i);
		}
		public List<TerminalNode> NOT() { return getTokens(ALFAParser.NOT); }
		public TerminalNode NOT(int i) {
			return getToken(ALFAParser.NOT, i);
		}
		public List<FunctionTypeContext> functionType() {
			return getRuleContexts(FunctionTypeContext.class);
		}
		public FunctionTypeContext functionType(int i) {
			return getRuleContext(FunctionTypeContext.class,i);
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
			switch ( getInterpreter().adaptivePredict(_input,93,_ctx) ) {
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
				_alt = getInterpreter().adaptivePredict(_input,77,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(529);
						match(RIGHTPAREN);
						}
						} 
					}
					setState(534);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,77,_ctx);
				}
				setState(538);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__8) | (1L << T__9) | (1L << T__10))) != 0)) {
					{
					{
					setState(535);
					functionType();
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
				match(T__2);
				setState(549);
				functionName();
				setState(550);
				match(T__3);
				setState(551);
				match(T__4);
				setState(552);
				match(VALUE);
				setState(553);
				match(T__4);
				setState(554);
				match(TARGETRESSOURCE);
				setState(558);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,80,_ctx);
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
					_alt = getInterpreter().adaptivePredict(_input,80,_ctx);
				}
				setState(568);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,82,_ctx);
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
						switch ( getInterpreter().adaptivePredict(_input,81,_ctx) ) {
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
					_alt = getInterpreter().adaptivePredict(_input,82,_ctx);
				}
				setState(574);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,83,_ctx);
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
					_alt = getInterpreter().adaptivePredict(_input,83,_ctx);
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(580);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,84,_ctx);
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
					_alt = getInterpreter().adaptivePredict(_input,84,_ctx);
				}
				setState(586);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,85,_ctx);
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
					_alt = getInterpreter().adaptivePredict(_input,85,_ctx);
				}
				setState(589);
				booleenExpression();
				setState(600);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,88,_ctx);
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
						_alt = getInterpreter().adaptivePredict(_input,87,_ctx);
						while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
							if ( _alt==1 ) {
								{
								setState(593);
								_errHandler.sync(this);
								switch ( getInterpreter().adaptivePredict(_input,86,_ctx) ) {
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
							_alt = getInterpreter().adaptivePredict(_input,87,_ctx);
						}
						}
						} 
					}
					setState(602);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,88,_ctx);
				}
				setState(606);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,89,_ctx);
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
					_alt = getInterpreter().adaptivePredict(_input,89,_ctx);
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
				functionName();
				setState(622);
				match(RIGHTPAREN);
				setState(623);
				match(TARGETRESSOURCE);
				setState(624);
				match(LEFTPAREN);
				setState(628);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,92,_ctx);
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
					_alt = getInterpreter().adaptivePredict(_input,92,_ctx);
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

	public static class FunctionTypeContext extends ParserRuleContext {
		public FunctionTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionType; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterFunctionType(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitFunctionType(this);
		}
	}

	public final FunctionTypeContext functionType() throws RecognitionException {
		FunctionTypeContext _localctx = new FunctionTypeContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_functionType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(633);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__8) | (1L << T__9) | (1L << T__10))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
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

	public static class FunctionNameContext extends ParserRuleContext {
		public FunctionNameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_functionName; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).enterFunctionName(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ALFAListener ) ((ALFAListener)listener).exitFunctionName(this);
		}
	}

	public final FunctionNameContext functionName() throws RecognitionException {
		FunctionNameContext _localctx = new FunctionNameContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_functionName);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(635);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << T__12) | (1L << T__13) | (1L << T__14))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
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
		enterRule(_localctx, 32, RULE_importDefinition);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(640);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(637);
				match(NEWLINE);
				}
				}
				setState(642);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(643);
			match(T__15);
			setState(644);
			match(TARGETRESSOURCE);
			setState(648);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,95,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(645);
					match(NEWLINE);
					}
					} 
				}
				setState(650);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,95,_ctx);
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
		enterRule(_localctx, 34, RULE_permitdeny);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(654);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(651);
				match(NEWLINE);
				}
				}
				setState(656);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(657);
			_la = _input.LA(1);
			if ( !(_la==PERMIT || _la==DENY) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(661);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,97,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(658);
					match(NEWLINE);
					}
					} 
				}
				setState(663);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,97,_ctx);
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
		enterRule(_localctx, 36, RULE_combiningAlgorithm);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(667);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(664);
				match(NEWLINE);
				}
				}
				setState(669);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(670);
			match(T__16);
			setState(671);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__17) | (1L << T__18) | (1L << T__19) | (1L << T__20) | (1L << T__21) | (1L << T__22) | (1L << T__23) | (1L << T__24) | (1L << T__25))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(675);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,99,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(672);
					match(NEWLINE);
					}
					} 
				}
				setState(677);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,99,_ctx);
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
		enterRule(_localctx, 38, RULE_adviceDefinition);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(681);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(678);
				match(NEWLINE);
				}
				}
				setState(683);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(684);
			match(ADVICE);
			setState(722);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TARGETRESSOURCE) {
				{
				setState(720);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,106,_ctx) ) {
				case 1:
					{
					setState(685);
					match(TARGETRESSOURCE);
					setState(687); 
					_errHandler.sync(this);
					_alt = 1;
					do {
						switch (_alt) {
						case 1:
							{
							{
							setState(686);
							match(NEWLINE);
							}
							}
							break;
						default:
							throw new NoViableAltException(this);
						}
						setState(689); 
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,101,_ctx);
					} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
					}
					break;
				case 2:
					{
					setState(691);
					match(TARGETRESSOURCE);
					setState(695);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(692);
						match(NEWLINE);
						}
						}
						setState(697);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(698);
					match(RIGHTCBRACKET);
					setState(702);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(699);
						match(NEWLINE);
						}
						}
						setState(704);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(716);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==TARGETRESSOURCE) {
						{
						{
						setState(705);
						match(TARGETRESSOURCE);
						setState(706);
						match(ASSIGN);
						setState(707);
						_la = _input.LA(1);
						if ( !(_la==TARGETRESSOURCE || _la==STRING) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(711);
						_errHandler.sync(this);
						_la = _input.LA(1);
						while (_la==NEWLINE) {
							{
							{
							setState(708);
							match(NEWLINE);
							}
							}
							setState(713);
							_errHandler.sync(this);
							_la = _input.LA(1);
						}
						}
						}
						setState(718);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(719);
					match(LEFTCBRACKET);
					}
					break;
				}
				}
				setState(724);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(728);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,108,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(725);
					match(NEWLINE);
					}
					} 
				}
				setState(730);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,108,_ctx);
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
		enterRule(_localctx, 40, RULE_obligationDefinition);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(734);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(731);
				match(NEWLINE);
				}
				}
				setState(736);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(737);
			match(OBLIGATION);
			setState(775);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==TARGETRESSOURCE) {
				{
				setState(773);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,115,_ctx) ) {
				case 1:
					{
					setState(738);
					match(TARGETRESSOURCE);
					setState(740); 
					_errHandler.sync(this);
					_alt = 1;
					do {
						switch (_alt) {
						case 1:
							{
							{
							setState(739);
							match(NEWLINE);
							}
							}
							break;
						default:
							throw new NoViableAltException(this);
						}
						setState(742); 
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,110,_ctx);
					} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
					}
					break;
				case 2:
					{
					setState(744);
					match(TARGETRESSOURCE);
					setState(748);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(745);
						match(NEWLINE);
						}
						}
						setState(750);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(751);
					match(RIGHTCBRACKET);
					setState(755);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==NEWLINE) {
						{
						{
						setState(752);
						match(NEWLINE);
						}
						}
						setState(757);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(769);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while (_la==TARGETRESSOURCE) {
						{
						{
						setState(758);
						match(TARGETRESSOURCE);
						setState(759);
						match(ASSIGN);
						setState(760);
						_la = _input.LA(1);
						if ( !(_la==TARGETRESSOURCE || _la==STRING) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(764);
						_errHandler.sync(this);
						_la = _input.LA(1);
						while (_la==NEWLINE) {
							{
							{
							setState(761);
							match(NEWLINE);
							}
							}
							setState(766);
							_errHandler.sync(this);
							_la = _input.LA(1);
						}
						}
						}
						setState(771);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(772);
					match(LEFTCBRACKET);
					}
					break;
				}
				}
				setState(777);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(781);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,117,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(778);
					match(NEWLINE);
					}
					} 
				}
				setState(783);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,117,_ctx);
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
		public List<TerminalNode> VALUE() { return getTokens(ALFAParser.VALUE); }
		public TerminalNode VALUE(int i) {
			return getToken(ALFAParser.VALUE, i);
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
		enterRule(_localctx, 42, RULE_attributeDefinition);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(787);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(784);
				match(NEWLINE);
				}
				}
				setState(789);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(790);
			match(ATTRIBUTE);
			setState(791);
			match(WORD);
			setState(795);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(792);
				match(NEWLINE);
				}
				}
				setState(797);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(798);
			match(RIGHTCBRACKET);
			setState(802);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==NEWLINE) {
				{
				{
				setState(799);
				match(NEWLINE);
				}
				}
				setState(804);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(816);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==IDENTIFIERS) {
				{
				{
				setState(805);
				match(IDENTIFIERS);
				setState(806);
				match(ASSIGN);
				setState(807);
				match(VALUE);
				setState(811);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==NEWLINE) {
					{
					{
					setState(808);
					match(NEWLINE);
					}
					}
					setState(813);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				}
				setState(818);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(819);
			match(LEFTCBRACKET);
			setState(823);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,123,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(820);
					match(NEWLINE);
					}
					} 
				}
				setState(825);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,123,_ctx);
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

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3R\u033d\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\3\2\6\2\60\n\2\r\2"+
		"\16\2\61\3\2\3\2\3\3\7\3\67\n\3\f\3\16\3:\13\3\3\3\3\3\3\3\3\3\3\3\3\3"+
		"\3\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3I\n\3\3\4\7\4L\n\4\f\4\16\4O\13\4\3\4"+
		"\3\4\7\4S\n\4\f\4\16\4V\13\4\3\4\5\4Y\n\4\3\4\3\4\7\4]\n\4\f\4\16\4`\13"+
		"\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\5\4n\n\4\3\4\7\4q\n"+
		"\4\f\4\16\4t\13\4\7\4v\n\4\f\4\16\4y\13\4\3\4\3\4\3\5\7\5~\n\5\f\5\16"+
		"\5\u0081\13\5\3\5\3\5\3\5\7\5\u0086\n\5\f\5\16\5\u0089\13\5\3\5\7\5\u008c"+
		"\n\5\f\5\16\5\u008f\13\5\3\5\3\5\7\5\u0093\n\5\f\5\16\5\u0096\13\5\3\5"+
		"\3\5\3\5\3\5\7\5\u009c\n\5\f\5\16\5\u009f\13\5\5\5\u00a1\n\5\3\5\3\5\3"+
		"\5\3\5\3\5\3\5\3\5\3\5\3\5\7\5\u00ac\n\5\f\5\16\5\u00af\13\5\3\5\5\5\u00b2"+
		"\n\5\3\5\7\5\u00b5\n\5\f\5\16\5\u00b8\13\5\3\6\7\6\u00bb\n\6\f\6\16\6"+
		"\u00be\13\6\3\6\3\6\3\6\7\6\u00c3\n\6\f\6\16\6\u00c6\13\6\3\6\7\6\u00c9"+
		"\n\6\f\6\16\6\u00cc\13\6\3\6\3\6\7\6\u00d0\n\6\f\6\16\6\u00d3\13\6\3\6"+
		"\3\6\3\6\3\6\7\6\u00d9\n\6\f\6\16\6\u00dc\13\6\5\6\u00de\n\6\3\6\3\6\3"+
		"\6\3\6\3\6\3\6\3\6\3\6\7\6\u00e8\n\6\f\6\16\6\u00eb\13\6\3\6\5\6\u00ee"+
		"\n\6\3\6\7\6\u00f1\n\6\f\6\16\6\u00f4\13\6\3\7\7\7\u00f7\n\7\f\7\16\7"+
		"\u00fa\13\7\3\7\3\7\3\7\7\7\u00ff\n\7\f\7\16\7\u0102\13\7\3\7\7\7\u0105"+
		"\n\7\f\7\16\7\u0108\13\7\3\7\3\7\7\7\u010c\n\7\f\7\16\7\u010f\13\7\3\7"+
		"\3\7\3\7\3\7\7\7\u0115\n\7\f\7\16\7\u0118\13\7\5\7\u011a\n\7\3\7\3\7\3"+
		"\7\3\7\3\7\3\7\7\7\u0122\n\7\f\7\16\7\u0125\13\7\3\7\5\7\u0128\n\7\3\7"+
		"\7\7\u012b\n\7\f\7\16\7\u012e\13\7\3\b\7\b\u0131\n\b\f\b\16\b\u0134\13"+
		"\b\3\b\3\b\5\b\u0138\n\b\3\b\7\b\u013b\n\b\f\b\16\b\u013e\13\b\3\t\7\t"+
		"\u0141\n\t\f\t\16\t\u0144\13\t\3\t\3\t\7\t\u0148\n\t\f\t\16\t\u014b\13"+
		"\t\3\t\3\t\7\t\u014f\n\t\f\t\16\t\u0152\13\t\3\t\7\t\u0155\n\t\f\t\16"+
		"\t\u0158\13\t\3\t\7\t\u015b\n\t\f\t\16\t\u015e\13\t\3\t\3\t\7\t\u0162"+
		"\n\t\f\t\16\t\u0165\13\t\3\n\7\n\u0168\n\n\f\n\16\n\u016b\13\n\3\n\3\n"+
		"\7\n\u016f\n\n\f\n\16\n\u0172\13\n\3\n\3\n\7\n\u0176\n\n\f\n\16\n\u0179"+
		"\13\n\3\n\7\n\u017c\n\n\f\n\16\n\u017f\13\n\3\n\7\n\u0182\n\n\f\n\16\n"+
		"\u0185\13\n\3\n\3\n\7\n\u0189\n\n\f\n\16\n\u018c\13\n\3\13\7\13\u018f"+
		"\n\13\f\13\16\13\u0192\13\13\3\13\3\13\3\13\7\13\u0197\n\13\f\13\16\13"+
		"\u019a\13\13\3\f\3\f\6\f\u019e\n\f\r\f\16\f\u019f\3\f\7\f\u01a3\n\f\f"+
		"\f\16\f\u01a6\13\f\3\r\7\r\u01a9\n\r\f\r\16\r\u01ac\13\r\3\r\7\r\u01af"+
		"\n\r\f\r\16\r\u01b2\13\r\3\r\3\r\3\r\3\r\7\r\u01b8\n\r\f\r\16\r\u01bb"+
		"\13\r\3\r\7\r\u01be\n\r\f\r\16\r\u01c1\13\r\3\r\3\r\3\r\3\r\7\r\u01c7"+
		"\n\r\f\r\16\r\u01ca\13\r\3\r\7\r\u01cd\n\r\f\r\16\r\u01d0\13\r\3\r\7\r"+
		"\u01d3\n\r\f\r\16\r\u01d6\13\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\7\r\u01df\n"+
		"\r\f\r\16\r\u01e2\13\r\3\r\7\r\u01e5\n\r\f\r\16\r\u01e8\13\r\3\r\3\r\3"+
		"\r\3\r\7\r\u01ee\n\r\f\r\16\r\u01f1\13\r\5\r\u01f3\n\r\3\16\7\16\u01f6"+
		"\n\16\f\16\16\16\u01f9\13\16\3\16\3\16\7\16\u01fd\n\16\f\16\16\16\u0200"+
		"\13\16\3\16\7\16\u0203\n\16\f\16\16\16\u0206\13\16\3\17\7\17\u0209\n\17"+
		"\f\17\16\17\u020c\13\17\3\17\7\17\u020f\n\17\f\17\16\17\u0212\13\17\3"+
		"\17\7\17\u0215\n\17\f\17\16\17\u0218\13\17\3\17\7\17\u021b\n\17\f\17\16"+
		"\17\u021e\13\17\3\17\7\17\u0221\n\17\f\17\16\17\u0224\13\17\3\17\3\17"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\7\17\u022f\n\17\f\17\16\17\u0232\13"+
		"\17\3\17\3\17\3\17\5\17\u0237\n\17\7\17\u0239\n\17\f\17\16\17\u023c\13"+
		"\17\3\17\7\17\u023f\n\17\f\17\16\17\u0242\13\17\3\17\7\17\u0245\n\17\f"+
		"\17\16\17\u0248\13\17\3\17\7\17\u024b\n\17\f\17\16\17\u024e\13\17\3\17"+
		"\3\17\3\17\3\17\7\17\u0254\n\17\f\17\16\17\u0257\13\17\7\17\u0259\n\17"+
		"\f\17\16\17\u025c\13\17\3\17\7\17\u025f\n\17\f\17\16\17\u0262\13\17\3"+
		"\17\7\17\u0265\n\17\f\17\16\17\u0268\13\17\3\17\7\17\u026b\n\17\f\17\16"+
		"\17\u026e\13\17\3\17\3\17\3\17\3\17\3\17\7\17\u0275\n\17\f\17\16\17\u0278"+
		"\13\17\5\17\u027a\n\17\3\20\3\20\3\21\3\21\3\22\7\22\u0281\n\22\f\22\16"+
		"\22\u0284\13\22\3\22\3\22\3\22\7\22\u0289\n\22\f\22\16\22\u028c\13\22"+
		"\3\23\7\23\u028f\n\23\f\23\16\23\u0292\13\23\3\23\3\23\7\23\u0296\n\23"+
		"\f\23\16\23\u0299\13\23\3\24\7\24\u029c\n\24\f\24\16\24\u029f\13\24\3"+
		"\24\3\24\3\24\7\24\u02a4\n\24\f\24\16\24\u02a7\13\24\3\25\7\25\u02aa\n"+
		"\25\f\25\16\25\u02ad\13\25\3\25\3\25\3\25\6\25\u02b2\n\25\r\25\16\25\u02b3"+
		"\3\25\3\25\7\25\u02b8\n\25\f\25\16\25\u02bb\13\25\3\25\3\25\7\25\u02bf"+
		"\n\25\f\25\16\25\u02c2\13\25\3\25\3\25\3\25\3\25\7\25\u02c8\n\25\f\25"+
		"\16\25\u02cb\13\25\7\25\u02cd\n\25\f\25\16\25\u02d0\13\25\3\25\7\25\u02d3"+
		"\n\25\f\25\16\25\u02d6\13\25\3\25\7\25\u02d9\n\25\f\25\16\25\u02dc\13"+
		"\25\3\26\7\26\u02df\n\26\f\26\16\26\u02e2\13\26\3\26\3\26\3\26\6\26\u02e7"+
		"\n\26\r\26\16\26\u02e8\3\26\3\26\7\26\u02ed\n\26\f\26\16\26\u02f0\13\26"+
		"\3\26\3\26\7\26\u02f4\n\26\f\26\16\26\u02f7\13\26\3\26\3\26\3\26\3\26"+
		"\7\26\u02fd\n\26\f\26\16\26\u0300\13\26\7\26\u0302\n\26\f\26\16\26\u0305"+
		"\13\26\3\26\7\26\u0308\n\26\f\26\16\26\u030b\13\26\3\26\7\26\u030e\n\26"+
		"\f\26\16\26\u0311\13\26\3\27\7\27\u0314\n\27\f\27\16\27\u0317\13\27\3"+
		"\27\3\27\3\27\7\27\u031c\n\27\f\27\16\27\u031f\13\27\3\27\3\27\7\27\u0323"+
		"\n\27\f\27\16\27\u0326\13\27\3\27\3\27\3\27\3\27\7\27\u032c\n\27\f\27"+
		"\16\27\u032f\13\27\7\27\u0331\n\27\f\27\16\27\u0334\13\27\3\27\3\27\7"+
		"\27\u0338\n\27\f\27\16\27\u033b\13\27\3\27\2\2\30\2\4\6\b\n\f\16\20\22"+
		"\24\26\30\32\34\36 \"$&(*,\2\b\3\2DE\3\2\b\r\3\2\16\21\3\2)*\3\2\24\34"+
		"\4\2PPRR\2\u03c9\2/\3\2\2\2\4H\3\2\2\2\6M\3\2\2\2\b\177\3\2\2\2\n\u00bc"+
		"\3\2\2\2\f\u00f8\3\2\2\2\16\u0132\3\2\2\2\20\u0142\3\2\2\2\22\u0169\3"+
		"\2\2\2\24\u0190\3\2\2\2\26\u019b\3\2\2\2\30\u01f2\3\2\2\2\32\u01f7\3\2"+
		"\2\2\34\u0279\3\2\2\2\36\u027b\3\2\2\2 \u027d\3\2\2\2\"\u0282\3\2\2\2"+
		"$\u0290\3\2\2\2&\u029d\3\2\2\2(\u02ab\3\2\2\2*\u02e0\3\2\2\2,\u0315\3"+
		"\2\2\2.\60\5\4\3\2/.\3\2\2\2\60\61\3\2\2\2\61/\3\2\2\2\61\62\3\2\2\2\62"+
		"\63\3\2\2\2\63\64\7\2\2\3\64\3\3\2\2\2\65\67\7\"\2\2\66\65\3\2\2\2\67"+
		":\3\2\2\28\66\3\2\2\289\3\2\2\29;\3\2\2\2:8\3\2\2\2;I\7\"\2\2<I\5\6\4"+
		"\2=I\7\64\2\2>I\5\"\22\2?I\5,\27\2@I\5\b\5\2AI\5\n\6\2BI\5\32\16\2CI\5"+
		"\24\13\2DI\5&\24\2EI\5\16\b\2FI\5$\23\2GI\5\30\r\2H8\3\2\2\2H<\3\2\2\2"+
		"H=\3\2\2\2H>\3\2\2\2H?\3\2\2\2H@\3\2\2\2HA\3\2\2\2HB\3\2\2\2HC\3\2\2\2"+
		"HD\3\2\2\2HE\3\2\2\2HF\3\2\2\2HG\3\2\2\2I\5\3\2\2\2JL\7\"\2\2KJ\3\2\2"+
		"\2LO\3\2\2\2MK\3\2\2\2MN\3\2\2\2NP\3\2\2\2OM\3\2\2\2PX\7%\2\2QS\7\"\2"+
		"\2RQ\3\2\2\2SV\3\2\2\2TR\3\2\2\2TU\3\2\2\2UY\3\2\2\2VT\3\2\2\2WY\7Q\2"+
		"\2XT\3\2\2\2XW\3\2\2\2YZ\3\2\2\2Zw\7>\2\2[]\7\"\2\2\\[\3\2\2\2]`\3\2\2"+
		"\2^\\\3\2\2\2^_\3\2\2\2_m\3\2\2\2`^\3\2\2\2an\5\6\4\2bn\7\64\2\2cn\5\""+
		"\22\2dn\5,\27\2en\5\b\5\2fn\5\n\6\2gn\5\32\16\2hn\5\24\13\2in\5&\24\2"+
		"jn\5\16\b\2kn\5$\23\2ln\5\30\r\2ma\3\2\2\2mb\3\2\2\2mc\3\2\2\2md\3\2\2"+
		"\2me\3\2\2\2mf\3\2\2\2mg\3\2\2\2mh\3\2\2\2mi\3\2\2\2mj\3\2\2\2mk\3\2\2"+
		"\2ml\3\2\2\2nr\3\2\2\2oq\7\"\2\2po\3\2\2\2qt\3\2\2\2rp\3\2\2\2rs\3\2\2"+
		"\2sv\3\2\2\2tr\3\2\2\2u^\3\2\2\2vy\3\2\2\2wu\3\2\2\2wx\3\2\2\2xz\3\2\2"+
		"\2yw\3\2\2\2z{\7?\2\2{\7\3\2\2\2|~\7\"\2\2}|\3\2\2\2~\u0081\3\2\2\2\177"+
		"}\3\2\2\2\177\u0080\3\2\2\2\u0080\u0082\3\2\2\2\u0081\177\3\2\2\2\u0082"+
		"\u00b1\7&\2\2\u0083\u0087\7Q\2\2\u0084\u0086\7\"\2\2\u0085\u0084\3\2\2"+
		"\2\u0086\u0089\3\2\2\2\u0087\u0085\3\2\2\2\u0087\u0088\3\2\2\2\u0088\u00b2"+
		"\3\2\2\2\u0089\u0087\3\2\2\2\u008a\u008c\7\"\2\2\u008b\u008a\3\2\2\2\u008c"+
		"\u008f\3\2\2\2\u008d\u008b\3\2\2\2\u008d\u008e\3\2\2\2\u008e\u00a1\3\2"+
		"\2\2\u008f\u008d\3\2\2\2\u0090\u0094\7Q\2\2\u0091\u0093\7\"\2\2\u0092"+
		"\u0091\3\2\2\2\u0093\u0096\3\2\2\2\u0094\u0092\3\2\2\2\u0094\u0095\3\2"+
		"\2\2\u0095\u00a1\3\2\2\2\u0096\u0094\3\2\2\2\u0097\u0098\7Q\2\2\u0098"+
		"\u0099\7B\2\2\u0099\u009d\7R\2\2\u009a\u009c\7\"\2\2\u009b\u009a\3\2\2"+
		"\2\u009c\u009f\3\2\2\2\u009d\u009b\3\2\2\2\u009d\u009e\3\2\2\2\u009e\u00a1"+
		"\3\2\2\2\u009f\u009d\3\2\2\2\u00a0\u008d\3\2\2\2\u00a0\u0090\3\2\2\2\u00a0"+
		"\u0097\3\2\2\2\u00a1\u00a2\3\2\2\2\u00a2\u00ad\7>\2\2\u00a3\u00ac\5\6"+
		"\4\2\u00a4\u00ac\5\b\5\2\u00a5\u00ac\5\n\6\2\u00a6\u00ac\5\f\7\2\u00a7"+
		"\u00ac\5\32\16\2\u00a8\u00ac\5\24\13\2\u00a9\u00ac\5&\24\2\u00aa\u00ac"+
		"\5\16\b\2\u00ab\u00a3\3\2\2\2\u00ab\u00a4\3\2\2\2\u00ab\u00a5\3\2\2\2"+
		"\u00ab\u00a6\3\2\2\2\u00ab\u00a7\3\2\2\2\u00ab\u00a8\3\2\2\2\u00ab\u00a9"+
		"\3\2\2\2\u00ab\u00aa\3\2\2\2\u00ac\u00af\3\2\2\2\u00ad\u00ab\3\2\2\2\u00ad"+
		"\u00ae\3\2\2\2\u00ae\u00b0\3\2\2\2\u00af\u00ad\3\2\2\2\u00b0\u00b2\7?"+
		"\2\2\u00b1\u0083\3\2\2\2\u00b1\u00a0\3\2\2\2\u00b2\u00b6\3\2\2\2\u00b3"+
		"\u00b5\7\"\2\2\u00b4\u00b3\3\2\2\2\u00b5\u00b8\3\2\2\2\u00b6\u00b4\3\2"+
		"\2\2\u00b6\u00b7\3\2\2\2\u00b7\t\3\2\2\2\u00b8\u00b6\3\2\2\2\u00b9\u00bb"+
		"\7\"\2\2\u00ba\u00b9\3\2\2\2\u00bb\u00be\3\2\2\2\u00bc\u00ba\3\2\2\2\u00bc"+
		"\u00bd\3\2\2\2\u00bd\u00bf\3\2\2\2\u00be\u00bc\3\2\2\2\u00bf\u00ed\7\'"+
		"\2\2\u00c0\u00c4\7Q\2\2\u00c1\u00c3\7\"\2\2\u00c2\u00c1\3\2\2\2\u00c3"+
		"\u00c6\3\2\2\2\u00c4\u00c2\3\2\2\2\u00c4\u00c5\3\2\2\2\u00c5\u00ee\3\2"+
		"\2\2\u00c6\u00c4\3\2\2\2\u00c7\u00c9\7\"\2\2\u00c8\u00c7\3\2\2\2\u00c9"+
		"\u00cc\3\2\2\2\u00ca\u00c8\3\2\2\2\u00ca\u00cb\3\2\2\2\u00cb\u00de\3\2"+
		"\2\2\u00cc\u00ca\3\2\2\2\u00cd\u00d1\7Q\2\2\u00ce\u00d0\7\"\2\2\u00cf"+
		"\u00ce\3\2\2\2\u00d0\u00d3\3\2\2\2\u00d1\u00cf\3\2\2\2\u00d1\u00d2\3\2"+
		"\2\2\u00d2\u00de\3\2\2\2\u00d3\u00d1\3\2\2\2\u00d4\u00d5\7Q\2\2\u00d5"+
		"\u00d6\7B\2\2\u00d6\u00da\7R\2\2\u00d7\u00d9\7\"\2\2\u00d8\u00d7\3\2\2"+
		"\2\u00d9\u00dc\3\2\2\2\u00da\u00d8\3\2\2\2\u00da\u00db\3\2\2\2\u00db\u00de"+
		"\3\2\2\2\u00dc\u00da\3\2\2\2\u00dd\u00ca\3\2\2\2\u00dd\u00cd\3\2\2\2\u00dd"+
		"\u00d4\3\2\2\2\u00de\u00df\3\2\2\2\u00df\u00e9\7>\2\2\u00e0\u00e8\5\6"+
		"\4\2\u00e1\u00e8\5\n\6\2\u00e2\u00e8\5\f\7\2\u00e3\u00e8\5\32\16\2\u00e4"+
		"\u00e8\5\24\13\2\u00e5\u00e8\5&\24\2\u00e6\u00e8\5\16\b\2\u00e7\u00e0"+
		"\3\2\2\2\u00e7\u00e1\3\2\2\2\u00e7\u00e2\3\2\2\2\u00e7\u00e3\3\2\2\2\u00e7"+
		"\u00e4\3\2\2\2\u00e7\u00e5\3\2\2\2\u00e7\u00e6\3\2\2\2\u00e8\u00eb\3\2"+
		"\2\2\u00e9\u00e7\3\2\2\2\u00e9\u00ea\3\2\2\2\u00ea\u00ec\3\2\2\2\u00eb"+
		"\u00e9\3\2\2\2\u00ec\u00ee\7?\2\2\u00ed\u00c0\3\2\2\2\u00ed\u00dd\3\2"+
		"\2\2\u00ee\u00f2\3\2\2\2\u00ef\u00f1\7\"\2\2\u00f0\u00ef\3\2\2\2\u00f1"+
		"\u00f4\3\2\2\2\u00f2\u00f0\3\2\2\2\u00f2\u00f3\3\2\2\2\u00f3\13\3\2\2"+
		"\2\u00f4\u00f2\3\2\2\2\u00f5\u00f7\7\"\2\2\u00f6\u00f5\3\2\2\2\u00f7\u00fa"+
		"\3\2\2\2\u00f8\u00f6\3\2\2\2\u00f8\u00f9\3\2\2\2\u00f9\u00fb\3\2\2\2\u00fa"+
		"\u00f8\3\2\2\2\u00fb\u0127\7(\2\2\u00fc\u0100\7Q\2\2\u00fd\u00ff\7\"\2"+
		"\2\u00fe\u00fd\3\2\2\2\u00ff\u0102\3\2\2\2\u0100\u00fe\3\2\2\2\u0100\u0101"+
		"\3\2\2\2\u0101\u0128\3\2\2\2\u0102\u0100\3\2\2\2\u0103\u0105\7\"\2\2\u0104"+
		"\u0103\3\2\2\2\u0105\u0108\3\2\2\2\u0106\u0104\3\2\2\2\u0106\u0107\3\2"+
		"\2\2\u0107\u011a\3\2\2\2\u0108\u0106\3\2\2\2\u0109\u010d\7Q\2\2\u010a"+
		"\u010c\7\"\2\2\u010b\u010a\3\2\2\2\u010c\u010f\3\2\2\2\u010d\u010b\3\2"+
		"\2\2\u010d\u010e\3\2\2\2\u010e\u011a\3\2\2\2\u010f\u010d\3\2\2\2\u0110"+
		"\u0111\7Q\2\2\u0111\u0112\7B\2\2\u0112\u0116\7R\2\2\u0113\u0115\7\"\2"+
		"\2\u0114\u0113\3\2\2\2\u0115\u0118\3\2\2\2\u0116\u0114\3\2\2\2\u0116\u0117"+
		"\3\2\2\2\u0117\u011a\3\2\2\2\u0118\u0116\3\2\2\2\u0119\u0106\3\2\2\2\u0119"+
		"\u0109\3\2\2\2\u0119\u0110\3\2\2\2\u011a\u011b\3\2\2\2\u011b\u0123\7>"+
		"\2\2\u011c\u0122\5\f\7\2\u011d\u0122\5\32\16\2\u011e\u0122\5\24\13\2\u011f"+
		"\u0122\5$\23\2\u0120\u0122\5\16\b\2\u0121\u011c\3\2\2\2\u0121\u011d\3"+
		"\2\2\2\u0121\u011e\3\2\2\2\u0121\u011f\3\2\2\2\u0121\u0120\3\2\2\2\u0122"+
		"\u0125\3\2\2\2\u0123\u0121\3\2\2\2\u0123\u0124\3\2\2\2\u0124\u0126\3\2"+
		"\2\2\u0125\u0123\3\2\2\2\u0126\u0128\7?\2\2\u0127\u00fc\3\2\2\2\u0127"+
		"\u0119\3\2\2\2\u0128\u012c\3\2\2\2\u0129\u012b\7\"\2\2\u012a\u0129\3\2"+
		"\2\2\u012b\u012e\3\2\2\2\u012c\u012a\3\2\2\2\u012c\u012d\3\2\2\2\u012d"+
		"\r\3\2\2\2\u012e\u012c\3\2\2\2\u012f\u0131\7\"\2\2\u0130\u012f\3\2\2\2"+
		"\u0131\u0134\3\2\2\2\u0132\u0130\3\2\2\2\u0132\u0133\3\2\2\2\u0133\u0137"+
		"\3\2\2\2\u0134\u0132\3\2\2\2\u0135\u0138\5\20\t\2\u0136\u0138\5\22\n\2"+
		"\u0137\u0135\3\2\2\2\u0137\u0136\3\2\2\2\u0138\u013c\3\2\2\2\u0139\u013b"+
		"\7\"\2\2\u013a\u0139\3\2\2\2\u013b\u013e\3\2\2\2\u013c\u013a\3\2\2\2\u013c"+
		"\u013d\3\2\2\2\u013d\17\3\2\2\2\u013e\u013c\3\2\2\2\u013f\u0141\7\"\2"+
		"\2\u0140\u013f\3\2\2\2\u0141\u0144\3\2\2\2\u0142\u0140\3\2\2\2\u0142\u0143"+
		"\3\2\2\2\u0143\u0145\3\2\2\2\u0144\u0142\3\2\2\2\u0145\u0149\7/\2\2\u0146"+
		"\u0148\7\"\2\2\u0147\u0146\3\2\2\2\u0148\u014b\3\2\2\2\u0149\u0147\3\2"+
		"\2\2\u0149\u014a\3\2\2\2\u014a\u014c\3\2\2\2\u014b\u0149\3\2\2\2\u014c"+
		"\u0150\7>\2\2\u014d\u014f\7\"\2\2\u014e\u014d\3\2\2\2\u014f\u0152\3\2"+
		"\2\2\u0150\u014e\3\2\2\2\u0150\u0151\3\2\2\2\u0151\u0156\3\2\2\2\u0152"+
		"\u0150\3\2\2\2\u0153\u0155\5*\26\2\u0154\u0153\3\2\2\2\u0155\u0158\3\2"+
		"\2\2\u0156\u0154\3\2\2\2\u0156\u0157\3\2\2\2\u0157\u015c\3\2\2\2\u0158"+
		"\u0156\3\2\2\2\u0159\u015b\7\"\2\2\u015a\u0159\3\2\2\2\u015b\u015e\3\2"+
		"\2\2\u015c\u015a\3\2\2\2\u015c\u015d\3\2\2\2\u015d\u015f\3\2\2\2\u015e"+
		"\u015c\3\2\2\2\u015f\u0163\7?\2\2\u0160\u0162\7\"\2\2\u0161\u0160\3\2"+
		"\2\2\u0162\u0165\3\2\2\2\u0163\u0161\3\2\2\2\u0163\u0164\3\2\2\2\u0164"+
		"\21\3\2\2\2\u0165\u0163\3\2\2\2\u0166\u0168\7\"\2\2\u0167\u0166\3\2\2"+
		"\2\u0168\u016b\3\2\2\2\u0169\u0167\3\2\2\2\u0169\u016a\3\2\2\2\u016a\u016c"+
		"\3\2\2\2\u016b\u0169\3\2\2\2\u016c\u0170\7\60\2\2\u016d\u016f\7\"\2\2"+
		"\u016e\u016d\3\2\2\2\u016f\u0172\3\2\2\2\u0170\u016e\3\2\2\2\u0170\u0171"+
		"\3\2\2\2\u0171\u0173\3\2\2\2\u0172\u0170\3\2\2\2\u0173\u0177\7>\2\2\u0174"+
		"\u0176\7\"\2\2\u0175\u0174\3\2\2\2\u0176\u0179\3\2\2\2\u0177\u0175\3\2"+
		"\2\2\u0177\u0178\3\2\2\2\u0178\u017d\3\2\2\2\u0179\u0177\3\2\2\2\u017a"+
		"\u017c\5(\25\2\u017b\u017a\3\2\2\2\u017c\u017f\3\2\2\2\u017d\u017b\3\2"+
		"\2\2\u017d\u017e\3\2\2\2\u017e\u0183\3\2\2\2\u017f\u017d\3\2\2\2\u0180"+
		"\u0182\7\"\2\2\u0181\u0180\3\2\2\2\u0182\u0185\3\2\2\2\u0183\u0181\3\2"+
		"\2\2\u0183\u0184\3\2\2\2\u0184\u0186\3\2\2\2\u0185\u0183\3\2\2\2\u0186"+
		"\u018a\7?\2\2\u0187\u0189\7\"\2\2\u0188\u0187\3\2\2\2\u0189\u018c\3\2"+
		"\2\2\u018a\u0188\3\2\2\2\u018a\u018b\3\2\2\2\u018b\23\3\2\2\2\u018c\u018a"+
		"\3\2\2\2\u018d\u018f\7\"\2\2\u018e\u018d\3\2\2\2\u018f\u0192\3\2\2\2\u0190"+
		"\u018e\3\2\2\2\u0190\u0191\3\2\2\2\u0191\u0193\3\2\2\2\u0192\u0190\3\2"+
		"\2\2\u0193\u0194\7+\2\2\u0194\u0198\5\26\f\2\u0195\u0197\7\"\2\2\u0196"+
		"\u0195\3\2\2\2\u0197\u019a\3\2\2\2\u0198\u0196\3\2\2\2\u0198\u0199\3\2"+
		"\2\2\u0199\25\3\2\2\2\u019a\u0198\3\2\2\2\u019b\u019d\7,\2\2\u019c\u019e"+
		"\5\30\r\2\u019d\u019c\3\2\2\2\u019e\u019f\3\2\2\2\u019f\u019d\3\2\2\2"+
		"\u019f\u01a0\3\2\2\2\u01a0\u01a4\3\2\2\2\u01a1\u01a3\5\26\f\2\u01a2\u01a1"+
		"\3\2\2\2\u01a3\u01a6\3\2\2\2\u01a4\u01a2\3\2\2\2\u01a4\u01a5\3\2\2\2\u01a5"+
		"\27\3\2\2\2\u01a6\u01a4\3\2\2\2\u01a7\u01a9\7F\2\2\u01a8\u01a7\3\2\2\2"+
		"\u01a9\u01ac\3\2\2\2\u01aa\u01a8\3\2\2\2\u01aa\u01ab\3\2\2\2\u01ab\u01b0"+
		"\3\2\2\2\u01ac\u01aa\3\2\2\2\u01ad\u01af\7@\2\2\u01ae\u01ad\3\2\2\2\u01af"+
		"\u01b2\3\2\2\2\u01b0\u01ae\3\2\2\2\u01b0\u01b1\3\2\2\2\u01b1\u01b3\3\2"+
		"\2\2\u01b2\u01b0\3\2\2\2\u01b3\u01b4\7P\2\2\u01b4\u01b5\7!\2\2\u01b5\u01b9"+
		"\7\37\2\2\u01b6\u01b8\7A\2\2\u01b7\u01b6\3\2\2\2\u01b8\u01bb\3\2\2\2\u01b9"+
		"\u01b7\3\2\2\2\u01b9\u01ba\3\2\2\2\u01ba\u01bf\3\2\2\2\u01bb\u01b9\3\2"+
		"\2\2\u01bc\u01be\7\"\2\2\u01bd\u01bc\3\2\2\2\u01be\u01c1\3\2\2\2\u01bf"+
		"\u01bd\3\2\2\2\u01bf\u01c0\3\2\2\2\u01c0\u01c8\3\2\2\2\u01c1\u01bf\3\2"+
		"\2\2\u01c2\u01c3\7\3\2\2\u01c3\u01c7\5\30\r\2\u01c4\u01c5\7\4\2\2\u01c5"+
		"\u01c7\5\30\r\2\u01c6\u01c2\3\2\2\2\u01c6\u01c4\3\2\2\2\u01c7\u01ca\3"+
		"\2\2\2\u01c8\u01c6\3\2\2\2\u01c8\u01c9\3\2\2\2\u01c9\u01f3\3\2\2\2\u01ca"+
		"\u01c8\3\2\2\2\u01cb\u01cd\7F\2\2\u01cc\u01cb\3\2\2\2\u01cd\u01d0\3\2"+
		"\2\2\u01ce\u01cc\3\2\2\2\u01ce\u01cf\3\2\2\2\u01cf\u01d4\3\2\2\2\u01d0"+
		"\u01ce\3\2\2\2\u01d1\u01d3\7@\2\2\u01d2\u01d1\3\2\2\2\u01d3\u01d6\3\2"+
		"\2\2\u01d4\u01d2\3\2\2\2\u01d4\u01d5\3\2\2\2\u01d5\u01d7\3\2\2\2\u01d6"+
		"\u01d4\3\2\2\2\u01d7\u01d8\7\63\2\2\u01d8\u01d9\7@\2\2\u01d9\u01da\7P"+
		"\2\2\u01da\u01db\7A\2\2\u01db\u01dc\7!\2\2\u01dc\u01e0\7\37\2\2\u01dd"+
		"\u01df\7A\2\2\u01de\u01dd\3\2\2\2\u01df\u01e2\3\2\2\2\u01e0\u01de\3\2"+
		"\2\2\u01e0\u01e1\3\2\2\2\u01e1\u01e6\3\2\2\2\u01e2\u01e0\3\2\2\2\u01e3"+
		"\u01e5\7\"\2\2\u01e4\u01e3\3\2\2\2\u01e5\u01e8\3\2\2\2\u01e6\u01e4\3\2"+
		"\2\2\u01e6\u01e7\3\2\2\2\u01e7\u01ef\3\2\2\2\u01e8\u01e6\3\2\2\2\u01e9"+
		"\u01ea\7\3\2\2\u01ea\u01ee\5\30\r\2\u01eb\u01ec\7\4\2\2\u01ec\u01ee\5"+
		"\30\r\2\u01ed\u01e9\3\2\2\2\u01ed\u01eb\3\2\2\2\u01ee\u01f1\3\2\2\2\u01ef"+
		"\u01ed\3\2\2\2\u01ef\u01f0\3\2\2\2\u01f0\u01f3\3\2\2\2\u01f1\u01ef\3\2"+
		"\2\2\u01f2\u01aa\3\2\2\2\u01f2\u01ce\3\2\2\2\u01f3\31\3\2\2\2\u01f4\u01f6"+
		"\7\"\2\2\u01f5\u01f4\3\2\2\2\u01f6\u01f9\3\2\2\2\u01f7\u01f5\3\2\2\2\u01f7"+
		"\u01f8\3\2\2\2\u01f8\u01fa\3\2\2\2\u01f9\u01f7\3\2\2\2\u01fa\u01fe\7\61"+
		"\2\2\u01fb\u01fd\5\34\17\2\u01fc\u01fb\3\2\2\2\u01fd\u0200\3\2\2\2\u01fe"+
		"\u01fc\3\2\2\2\u01fe\u01ff\3\2\2\2\u01ff\u0204\3\2\2\2\u0200\u01fe\3\2"+
		"\2\2\u0201\u0203\7\"\2\2\u0202\u0201\3\2\2\2\u0203\u0206\3\2\2\2\u0204"+
		"\u0202\3\2\2\2\u0204\u0205\3\2\2\2\u0205\33\3\2\2\2\u0206\u0204\3\2\2"+
		"\2\u0207\u0209\7\"\2\2\u0208\u0207\3\2\2\2\u0209\u020c\3\2\2\2\u020a\u0208"+
		"\3\2\2\2\u020a\u020b\3\2\2\2\u020b\u0210\3\2\2\2\u020c\u020a\3\2\2\2\u020d"+
		"\u020f\7F\2\2\u020e\u020d\3\2\2\2\u020f\u0212\3\2\2\2\u0210\u020e\3\2"+
		"\2\2\u0210\u0211\3\2\2\2\u0211\u0216\3\2\2\2\u0212\u0210\3\2\2\2\u0213"+
		"\u0215\7@\2\2\u0214\u0213\3\2\2\2\u0215\u0218\3\2\2\2\u0216\u0214\3\2"+
		"\2\2\u0216\u0217\3\2\2\2\u0217\u021c\3\2\2\2\u0218\u0216\3\2\2\2\u0219"+
		"\u021b\5\36\20\2\u021a\u0219\3\2\2\2\u021b\u021e\3\2\2\2\u021c\u021a\3"+
		"\2\2\2\u021c\u021d\3\2\2\2\u021d\u0222\3\2\2\2\u021e\u021c\3\2\2\2\u021f"+
		"\u0221\7@\2\2\u0220\u021f\3\2\2\2\u0221\u0224\3\2\2\2\u0222\u0220\3\2"+
		"\2\2\u0222\u0223\3\2\2\2\u0223\u0225\3\2\2\2\u0224\u0222\3\2\2\2\u0225"+
		"\u0226\7\62\2\2\u0226\u0227\7\5\2\2\u0227\u0228\5 \21\2\u0228\u0229\7"+
		"\6\2\2\u0229\u022a\7\7\2\2\u022a\u022b\7\37\2\2\u022b\u022c\7\7\2\2\u022c"+
		"\u0230\7P\2\2\u022d\u022f\7A\2\2\u022e\u022d\3\2\2\2\u022f\u0232\3\2\2"+
		"\2\u0230\u022e\3\2\2\2\u0230\u0231\3\2\2\2\u0231\u023a\3\2\2\2\u0232\u0230"+
		"\3\2\2\2\u0233\u0236\t\2\2\2\u0234\u0237\5\30\r\2\u0235\u0237\5\34\17"+
		"\2\u0236\u0234\3\2\2\2\u0236\u0235\3\2\2\2\u0237\u0239\3\2\2\2\u0238\u0233"+
		"\3\2\2\2\u0239\u023c\3\2\2\2\u023a\u0238\3\2\2\2\u023a\u023b\3\2\2\2\u023b"+
		"\u0240\3\2\2\2\u023c\u023a\3\2\2\2\u023d\u023f\7A\2\2\u023e\u023d\3\2"+
		"\2\2\u023f\u0242\3\2\2\2\u0240\u023e\3\2\2\2\u0240\u0241\3\2\2\2\u0241"+
		"\u027a\3\2\2\2\u0242\u0240\3\2\2\2\u0243\u0245\7F\2\2\u0244\u0243\3\2"+
		"\2\2\u0245\u0248\3\2\2\2\u0246\u0244\3\2\2\2\u0246\u0247\3\2\2\2\u0247"+
		"\u024c\3\2\2\2\u0248\u0246\3\2\2\2\u0249\u024b\7@\2\2\u024a\u0249\3\2"+
		"\2\2\u024b\u024e\3\2\2\2\u024c\u024a\3\2\2\2\u024c\u024d\3\2\2\2\u024d"+
		"\u024f\3\2\2\2\u024e\u024c\3\2\2\2\u024f\u025a\5\30\r\2\u0250\u0255\t"+
		"\2\2\2\u0251\u0254\5\30\r\2\u0252\u0254\5\34\17\2\u0253\u0251\3\2\2\2"+
		"\u0253\u0252\3\2\2\2\u0254\u0257\3\2\2\2\u0255\u0253\3\2\2\2\u0255\u0256"+
		"\3\2\2\2\u0256\u0259\3\2\2\2\u0257\u0255\3\2\2\2\u0258\u0250\3\2\2\2\u0259"+
		"\u025c\3\2\2\2\u025a\u0258\3\2\2\2\u025a\u025b\3\2\2\2\u025b\u0260\3\2"+
		"\2\2\u025c\u025a\3\2\2\2\u025d\u025f\7A\2\2\u025e\u025d\3\2\2\2\u025f"+
		"\u0262\3\2\2\2\u0260\u025e\3\2\2\2\u0260\u0261\3\2\2\2\u0261\u027a\3\2"+
		"\2\2\u0262\u0260\3\2\2\2\u0263\u0265\7F\2\2\u0264\u0263\3\2\2\2\u0265"+
		"\u0268\3\2\2\2\u0266\u0264\3\2\2\2\u0266\u0267\3\2\2\2\u0267\u026c\3\2"+
		"\2\2\u0268\u0266\3\2\2\2\u0269\u026b\7@\2\2\u026a\u0269\3\2\2\2\u026b"+
		"\u026e\3\2\2\2\u026c\u026a\3\2\2\2\u026c\u026d\3\2\2\2\u026d\u026f\3\2"+
		"\2\2\u026e\u026c\3\2\2\2\u026f\u0270\5 \21\2\u0270\u0271\7@\2\2\u0271"+
		"\u0272\7P\2\2\u0272\u0276\7A\2\2\u0273\u0275\7A\2\2\u0274\u0273\3\2\2"+
		"\2\u0275\u0278\3\2\2\2\u0276\u0274\3\2\2\2\u0276\u0277\3\2\2\2\u0277\u027a"+
		"\3\2\2\2\u0278\u0276\3\2\2\2\u0279\u020a\3\2\2\2\u0279\u0246\3\2\2\2\u0279"+
		"\u0266\3\2\2\2\u027a\35\3\2\2\2\u027b\u027c\t\3\2\2\u027c\37\3\2\2\2\u027d"+
		"\u027e\t\4\2\2\u027e!\3\2\2\2\u027f\u0281\7\"\2\2\u0280\u027f\3\2\2\2"+
		"\u0281\u0284\3\2\2\2\u0282\u0280\3\2\2\2\u0282\u0283\3\2\2\2\u0283\u0285"+
		"\3\2\2\2\u0284\u0282\3\2\2\2\u0285\u0286\7\22\2\2\u0286\u028a\7P\2\2\u0287"+
		"\u0289\7\"\2\2\u0288\u0287\3\2\2\2\u0289\u028c\3\2\2\2\u028a\u0288\3\2"+
		"\2\2\u028a\u028b\3\2\2\2\u028b#\3\2\2\2\u028c\u028a\3\2\2\2\u028d\u028f"+
		"\7\"\2\2\u028e\u028d\3\2\2\2\u028f\u0292\3\2\2\2\u0290\u028e\3\2\2\2\u0290"+
		"\u0291\3\2\2\2\u0291\u0293\3\2\2\2\u0292\u0290\3\2\2\2\u0293\u0297\t\5"+
		"\2\2\u0294\u0296\7\"\2\2\u0295\u0294\3\2\2\2\u0296\u0299\3\2\2\2\u0297"+
		"\u0295\3\2\2\2\u0297\u0298\3\2\2\2\u0298%\3\2\2\2\u0299\u0297\3\2\2\2"+
		"\u029a\u029c\7\"\2\2\u029b\u029a\3\2\2\2\u029c\u029f\3\2\2\2\u029d\u029b"+
		"\3\2\2\2\u029d\u029e\3\2\2\2\u029e\u02a0\3\2\2\2\u029f\u029d\3\2\2\2\u02a0"+
		"\u02a1\7\23\2\2\u02a1\u02a5\t\6\2\2\u02a2\u02a4\7\"\2\2\u02a3\u02a2\3"+
		"\2\2\2\u02a4\u02a7\3\2\2\2\u02a5\u02a3\3\2\2\2\u02a5\u02a6\3\2\2\2\u02a6"+
		"\'\3\2\2\2\u02a7\u02a5\3\2\2\2\u02a8\u02aa\7\"\2\2\u02a9\u02a8\3\2\2\2"+
		"\u02aa\u02ad\3\2\2\2\u02ab\u02a9\3\2\2\2\u02ab\u02ac\3\2\2\2\u02ac\u02ae"+
		"\3\2\2\2\u02ad\u02ab\3\2\2\2\u02ae\u02d4\7-\2\2\u02af\u02b1\7P\2\2\u02b0"+
		"\u02b2\7\"\2\2\u02b1\u02b0\3\2\2\2\u02b2\u02b3\3\2\2\2\u02b3\u02b1\3\2"+
		"\2\2\u02b3\u02b4\3\2\2\2\u02b4\u02d3\3\2\2\2\u02b5\u02b9\7P\2\2\u02b6"+
		"\u02b8\7\"\2\2\u02b7\u02b6\3\2\2\2\u02b8\u02bb\3\2\2\2\u02b9\u02b7\3\2"+
		"\2\2\u02b9\u02ba\3\2\2\2\u02ba\u02bc\3\2\2\2\u02bb\u02b9\3\2\2\2\u02bc"+
		"\u02c0\7>\2\2\u02bd\u02bf\7\"\2\2\u02be\u02bd\3\2\2\2\u02bf\u02c2\3\2"+
		"\2\2\u02c0\u02be\3\2\2\2\u02c0\u02c1\3\2\2\2\u02c1\u02ce\3\2\2\2\u02c2"+
		"\u02c0\3\2\2\2\u02c3\u02c4\7P\2\2\u02c4\u02c5\7B\2\2\u02c5\u02c9\t\7\2"+
		"\2\u02c6\u02c8\7\"\2\2\u02c7\u02c6\3\2\2\2\u02c8\u02cb\3\2\2\2\u02c9\u02c7"+
		"\3\2\2\2\u02c9\u02ca\3\2\2\2\u02ca\u02cd\3\2\2\2\u02cb\u02c9\3\2\2\2\u02cc"+
		"\u02c3\3\2\2\2\u02cd\u02d0\3\2\2\2\u02ce\u02cc\3\2\2\2\u02ce\u02cf\3\2"+
		"\2\2\u02cf\u02d1\3\2\2\2\u02d0\u02ce\3\2\2\2\u02d1\u02d3\7?\2\2\u02d2"+
		"\u02af\3\2\2\2\u02d2\u02b5\3\2\2\2\u02d3\u02d6\3\2\2\2\u02d4\u02d2\3\2"+
		"\2\2\u02d4\u02d5\3\2\2\2\u02d5\u02da\3\2\2\2\u02d6\u02d4\3\2\2\2\u02d7"+
		"\u02d9\7\"\2\2\u02d8\u02d7\3\2\2\2\u02d9\u02dc\3\2\2\2\u02da\u02d8\3\2"+
		"\2\2\u02da\u02db\3\2\2\2\u02db)\3\2\2\2\u02dc\u02da\3\2\2\2\u02dd\u02df"+
		"\7\"\2\2\u02de\u02dd\3\2\2\2\u02df\u02e2\3\2\2\2\u02e0\u02de\3\2\2\2\u02e0"+
		"\u02e1\3\2\2\2\u02e1\u02e3\3\2\2\2\u02e2\u02e0\3\2\2\2\u02e3\u0309\7."+
		"\2\2\u02e4\u02e6\7P\2\2\u02e5\u02e7\7\"\2\2\u02e6\u02e5\3\2\2\2\u02e7"+
		"\u02e8\3\2\2\2\u02e8\u02e6\3\2\2\2\u02e8\u02e9\3\2\2\2\u02e9\u0308\3\2"+
		"\2\2\u02ea\u02ee\7P\2\2\u02eb\u02ed\7\"\2\2\u02ec\u02eb\3\2\2\2\u02ed"+
		"\u02f0\3\2\2\2\u02ee\u02ec\3\2\2\2\u02ee\u02ef\3\2\2\2\u02ef\u02f1\3\2"+
		"\2\2\u02f0\u02ee\3\2\2\2\u02f1\u02f5\7>\2\2\u02f2\u02f4\7\"\2\2\u02f3"+
		"\u02f2\3\2\2\2\u02f4\u02f7\3\2\2\2\u02f5\u02f3\3\2\2\2\u02f5\u02f6\3\2"+
		"\2\2\u02f6\u0303\3\2\2\2\u02f7\u02f5\3\2\2\2\u02f8\u02f9\7P\2\2\u02f9"+
		"\u02fa\7B\2\2\u02fa\u02fe\t\7\2\2\u02fb\u02fd\7\"\2\2\u02fc\u02fb\3\2"+
		"\2\2\u02fd\u0300\3\2\2\2\u02fe\u02fc\3\2\2\2\u02fe\u02ff\3\2\2\2\u02ff"+
		"\u0302\3\2\2\2\u0300\u02fe\3\2\2\2\u0301\u02f8\3\2\2\2\u0302\u0305\3\2"+
		"\2\2\u0303\u0301\3\2\2\2\u0303\u0304\3\2\2\2\u0304\u0306\3\2\2\2\u0305"+
		"\u0303\3\2\2\2\u0306\u0308\7?\2\2\u0307\u02e4\3\2\2\2\u0307\u02ea\3\2"+
		"\2\2\u0308\u030b\3\2\2\2\u0309\u0307\3\2\2\2\u0309\u030a\3\2\2\2\u030a"+
		"\u030f\3\2\2\2\u030b\u0309\3\2\2\2\u030c\u030e\7\"\2\2\u030d\u030c\3\2"+
		"\2\2\u030e\u0311\3\2\2\2\u030f\u030d\3\2\2\2\u030f\u0310\3\2\2\2\u0310"+
		"+\3\2\2\2\u0311\u030f\3\2\2\2\u0312\u0314\7\"\2\2\u0313\u0312\3\2\2\2"+
		"\u0314\u0317\3\2\2\2\u0315\u0313\3\2\2\2\u0315\u0316\3\2\2\2\u0316\u0318"+
		"\3\2\2\2\u0317\u0315\3\2\2\2\u0318\u0319\7\65\2\2\u0319\u031d\7Q\2\2\u031a"+
		"\u031c\7\"\2\2\u031b\u031a\3\2\2\2\u031c\u031f\3\2\2\2\u031d\u031b\3\2"+
		"\2\2\u031d\u031e\3\2\2\2\u031e\u0320\3\2\2\2\u031f\u031d\3\2\2\2\u0320"+
		"\u0324\7>\2\2\u0321\u0323\7\"\2\2\u0322\u0321\3\2\2\2\u0323\u0326\3\2"+
		"\2\2\u0324\u0322\3\2\2\2\u0324\u0325\3\2\2\2\u0325\u0332\3\2\2\2\u0326"+
		"\u0324\3\2\2\2\u0327\u0328\7\66\2\2\u0328\u0329\7B\2\2\u0329\u032d\7\37"+
		"\2\2\u032a\u032c\7\"\2\2\u032b\u032a\3\2\2\2\u032c\u032f\3\2\2\2\u032d"+
		"\u032b\3\2\2\2\u032d\u032e\3\2\2\2\u032e\u0331\3\2\2\2\u032f\u032d\3\2"+
		"\2\2\u0330\u0327\3\2\2\2\u0331\u0334\3\2\2\2\u0332\u0330\3\2\2\2\u0332"+
		"\u0333\3\2\2\2\u0333\u0335\3\2\2\2\u0334\u0332\3\2\2\2\u0335\u0339\7?"+
		"\2\2\u0336\u0338\7\"\2\2\u0337\u0336\3\2\2\2\u0338\u033b\3\2\2\2\u0339"+
		"\u0337\3\2\2\2\u0339\u033a\3\2\2\2\u033a-\3\2\2\2\u033b\u0339\3\2\2\2"+
		"~\618HMTX^mrw\177\u0087\u008d\u0094\u009d\u00a0\u00ab\u00ad\u00b1\u00b6"+
		"\u00bc\u00c4\u00ca\u00d1\u00da\u00dd\u00e7\u00e9\u00ed\u00f2\u00f8\u0100"+
		"\u0106\u010d\u0116\u0119\u0121\u0123\u0127\u012c\u0132\u0137\u013c\u0142"+
		"\u0149\u0150\u0156\u015c\u0163\u0169\u0170\u0177\u017d\u0183\u018a\u0190"+
		"\u0198\u019f\u01a4\u01aa\u01b0\u01b9\u01bf\u01c6\u01c8\u01ce\u01d4\u01e0"+
		"\u01e6\u01ed\u01ef\u01f2\u01f7\u01fe\u0204\u020a\u0210\u0216\u021c\u0222"+
		"\u0230\u0236\u023a\u0240\u0246\u024c\u0253\u0255\u025a\u0260\u0266\u026c"+
		"\u0276\u0279\u0282\u028a\u0290\u0297\u029d\u02a5\u02ab\u02b3\u02b9\u02c0"+
		"\u02c9\u02ce\u02d2\u02d4\u02da\u02e0\u02e8\u02ee\u02f5\u02fe\u0303\u0307"+
		"\u0309\u030f\u0315\u031d\u0324\u032d\u0332\u0339";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}