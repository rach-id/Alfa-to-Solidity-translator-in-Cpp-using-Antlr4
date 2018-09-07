// Generated from ALFA.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link ALFAParser}.
 */
public interface ALFAListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link ALFAParser#translationunit}.
	 * @param ctx the parse tree
	 */
	void enterTranslationunit(ALFAParser.TranslationunitContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#translationunit}.
	 * @param ctx the parse tree
	 */
	void exitTranslationunit(ALFAParser.TranslationunitContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#declarationseq}.
	 * @param ctx the parse tree
	 */
	void enterDeclarationseq(ALFAParser.DeclarationseqContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#declarationseq}.
	 * @param ctx the parse tree
	 */
	void exitDeclarationseq(ALFAParser.DeclarationseqContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#namespaceDefinition}.
	 * @param ctx the parse tree
	 */
	void enterNamespaceDefinition(ALFAParser.NamespaceDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#namespaceDefinition}.
	 * @param ctx the parse tree
	 */
	void exitNamespaceDefinition(ALFAParser.NamespaceDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#policysetDefinition}.
	 * @param ctx the parse tree
	 */
	void enterPolicysetDefinition(ALFAParser.PolicysetDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#policysetDefinition}.
	 * @param ctx the parse tree
	 */
	void exitPolicysetDefinition(ALFAParser.PolicysetDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#policyDefinition}.
	 * @param ctx the parse tree
	 */
	void enterPolicyDefinition(ALFAParser.PolicyDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#policyDefinition}.
	 * @param ctx the parse tree
	 */
	void exitPolicyDefinition(ALFAParser.PolicyDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#ruleDefinition}.
	 * @param ctx the parse tree
	 */
	void enterRuleDefinition(ALFAParser.RuleDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#ruleDefinition}.
	 * @param ctx the parse tree
	 */
	void exitRuleDefinition(ALFAParser.RuleDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#onBlock}.
	 * @param ctx the parse tree
	 */
	void enterOnBlock(ALFAParser.OnBlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#onBlock}.
	 * @param ctx the parse tree
	 */
	void exitOnBlock(ALFAParser.OnBlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#onPermitBlock}.
	 * @param ctx the parse tree
	 */
	void enterOnPermitBlock(ALFAParser.OnPermitBlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#onPermitBlock}.
	 * @param ctx the parse tree
	 */
	void exitOnPermitBlock(ALFAParser.OnPermitBlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#onDenyBlock}.
	 * @param ctx the parse tree
	 */
	void enterOnDenyBlock(ALFAParser.OnDenyBlockContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#onDenyBlock}.
	 * @param ctx the parse tree
	 */
	void exitOnDenyBlock(ALFAParser.OnDenyBlockContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#targetDefinition}.
	 * @param ctx the parse tree
	 */
	void enterTargetDefinition(ALFAParser.TargetDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#targetDefinition}.
	 * @param ctx the parse tree
	 */
	void exitTargetDefinition(ALFAParser.TargetDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#clauseDefinition}.
	 * @param ctx the parse tree
	 */
	void enterClauseDefinition(ALFAParser.ClauseDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#clauseDefinition}.
	 * @param ctx the parse tree
	 */
	void exitClauseDefinition(ALFAParser.ClauseDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#booleenExpression}.
	 * @param ctx the parse tree
	 */
	void enterBooleenExpression(ALFAParser.BooleenExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#booleenExpression}.
	 * @param ctx the parse tree
	 */
	void exitBooleenExpression(ALFAParser.BooleenExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#conditionDefinition}.
	 * @param ctx the parse tree
	 */
	void enterConditionDefinition(ALFAParser.ConditionDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#conditionDefinition}.
	 * @param ctx the parse tree
	 */
	void exitConditionDefinition(ALFAParser.ConditionDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#condition}.
	 * @param ctx the parse tree
	 */
	void enterCondition(ALFAParser.ConditionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#condition}.
	 * @param ctx the parse tree
	 */
	void exitCondition(ALFAParser.ConditionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#importDefinition}.
	 * @param ctx the parse tree
	 */
	void enterImportDefinition(ALFAParser.ImportDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#importDefinition}.
	 * @param ctx the parse tree
	 */
	void exitImportDefinition(ALFAParser.ImportDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#permitdeny}.
	 * @param ctx the parse tree
	 */
	void enterPermitdeny(ALFAParser.PermitdenyContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#permitdeny}.
	 * @param ctx the parse tree
	 */
	void exitPermitdeny(ALFAParser.PermitdenyContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#combiningAlgorithm}.
	 * @param ctx the parse tree
	 */
	void enterCombiningAlgorithm(ALFAParser.CombiningAlgorithmContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#combiningAlgorithm}.
	 * @param ctx the parse tree
	 */
	void exitCombiningAlgorithm(ALFAParser.CombiningAlgorithmContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#adviceDefinition}.
	 * @param ctx the parse tree
	 */
	void enterAdviceDefinition(ALFAParser.AdviceDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#adviceDefinition}.
	 * @param ctx the parse tree
	 */
	void exitAdviceDefinition(ALFAParser.AdviceDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#obligationDefinition}.
	 * @param ctx the parse tree
	 */
	void enterObligationDefinition(ALFAParser.ObligationDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#obligationDefinition}.
	 * @param ctx the parse tree
	 */
	void exitObligationDefinition(ALFAParser.ObligationDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#attributeDefinition}.
	 * @param ctx the parse tree
	 */
	void enterAttributeDefinition(ALFAParser.AttributeDefinitionContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#attributeDefinition}.
	 * @param ctx the parse tree
	 */
	void exitAttributeDefinition(ALFAParser.AttributeDefinitionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#value}.
	 * @param ctx the parse tree
	 */
	void enterValue(ALFAParser.ValueContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#value}.
	 * @param ctx the parse tree
	 */
	void exitValue(ALFAParser.ValueContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#lAND}.
	 * @param ctx the parse tree
	 */
	void enterLAND(ALFAParser.LANDContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#lAND}.
	 * @param ctx the parse tree
	 */
	void exitLAND(ALFAParser.LANDContext ctx);
	/**
	 * Enter a parse tree produced by {@link ALFAParser#lOR}.
	 * @param ctx the parse tree
	 */
	void enterLOR(ALFAParser.LORContext ctx);
	/**
	 * Exit a parse tree produced by {@link ALFAParser#lOR}.
	 * @param ctx the parse tree
	 */
	void exitLOR(ALFAParser.LORContext ctx);
}