grammar ALFA;


translationunit
:
	declarationseq+ EOF
;


/*
 * Parser Rules
 */


declarationseq
    :
    	NEWLINE*
    	NEWLINE
		| namespaceDefinition
		| COMMENT
		| importDefinition
		| attributeDefinition 
		| policysetDefinition
		| policyDefinition
		| conditionDefinition
		| targetDefinition
		| combiningAlgorithm
		| onBlock
		| permitdeny
		| booleenExpression 
	;
	
namespaceDefinition
    :
        NEWLINE* NAMESPACE
        ( NEWLINE* | WORD )
        RIGHTCBRACKET ( NEWLINE* (	
         namespaceDefinition
		| COMMENT
		| importDefinition
		| attributeDefinition 
		| policysetDefinition
		| policyDefinition
		| conditionDefinition
		| targetDefinition
		| combiningAlgorithm
		| onBlock
		| permitdeny
		| booleenExpression )
		NEWLINE*  )*
        LEFTCBRACKET
    ;


policysetDefinition
    :
    	NEWLINE*
        POLICYSET
        (
            // By reference
            WORD NEWLINE*
        |
            // Normal Definition
            (
                // Without giving a name
                NEWLINE*
            |
                // naming the policyset
                WORD NEWLINE*
            |
                // giving it an ID
                WORD ASSIGN STRING NEWLINE*
            )
            
            RIGHTCBRACKET ( policysetDefinition | policyDefinition | ruleDefinition
                        | conditionDefinition | targetDefinition | combiningAlgorithm
                        | onBlock )*
            LEFTCBRACKET
        )
        NEWLINE*
    ;

policyDefinition
    :
    NEWLINE*
        POLICY
        (
            // By reference
            WORD NEWLINE*
        |
            // Normal Definition
            (
                // Without giving a name
                NEWLINE*
            |
                // naming the policy
                WORD NEWLINE*
            |
                // giving it an ID
                WORD ASSIGN STRING NEWLINE*
            )
            
            RIGHTCBRACKET ( policyDefinition | ruleDefinition
                        | conditionDefinition | targetDefinition | combiningAlgorithm
                        | onBlock )*
            LEFTCBRACKET
        )
    NEWLINE*
    ;

ruleDefinition
    :
    NEWLINE*
        RULE
        (
            // By reference
            WORD NEWLINE*
        |
            // Normal Definition
            (
                // Without giving a name
                NEWLINE*
            |
                // naming the rule
                WORD NEWLINE*
            |
                // giving it an ID
                WORD ASSIGN STRING NEWLINE*
            )
            
            RIGHTCBRACKET ( ruleDefinition
                        | conditionDefinition | targetDefinition | permitdeny
                        | onBlock )*
            LEFTCBRACKET
        )
    NEWLINE*
    ;

onBlock :
	NEWLINE*
        (onPermitBlock
    |
        onDenyBlock)
    NEWLINE*
    ;

onPermitBlock :
        NEWLINE* ONPERMIT NEWLINE* RIGHTCBRACKET NEWLINE*
        obligationDefinition* NEWLINE* LEFTCBRACKET NEWLINE*
    ;

onDenyBlock :
        NEWLINE* ONDENY NEWLINE* RIGHTCBRACKET NEWLINE*
        adviceDefinition* NEWLINE* LEFTCBRACKET NEWLINE*
    ;


targetDefinition :
       NEWLINE* TARGET clauseDefinition NEWLINE*
    ;

clauseDefinition :
        CLAUSE booleenExpression+ clauseDefinition*
    ;

booleenExpression :
        NOT* '('* TARGETRESSOURCE COMPARE VALUE ')'* NEWLINE*
        ( 'and' booleenExpression | 'or' booleenExpression )*
    |
        NOT* '('* BAGFUNCTION '(' TARGETRESSOURCE ')' COMPARE VALUE ')'* NEWLINE*
        ( 'and' booleenExpression | 'or' booleenExpression )*
    ;

conditionDefinition :
       NEWLINE* CONDITION condition*  NEWLINE*
    ;

condition :
        NEWLINE* NOT* '('* functionType* '('* FUNCTION '[' functionName ']' ',' VALUE ','
        TARGETRESSOURCE ')'* ( ( AND | OR ) ( booleenExpression | condition ) )* ')'*
        |
        NOT* '('* booleenExpression ( ( AND | OR ) ( booleenExpression | condition )* )* ')'*
        |
        NOT* '('* functionName '(' TARGETRESSOURCE ')' ')'*
    ;

functionType :
        'AllOf'
    |
        'AnyOf'
    |
        'AnyOfAny'
    |
        'AllOfAny'
    |
        'AnyOfAll'
    |
        'AllOfAll'
    ;
        
functionName :
        'stringRegexpMatch'
    |
        'anyURIRegesMatch'
    |
        'NameRegexMatch'
    |
    	'booleanOneAndOnly'
        
    ;

importDefinition :
        NEWLINE* 'import' TARGETRESSOURCE NEWLINE*
    ;


permitdeny :
	NEWLINE*
       ( PERMIT
    |
        DENY )
    NEWLINE*
    ;

combiningAlgorithm :
    NEWLINE* 'apply' (
        'denyOverrides'
    |
        'permitOverrides'
    |
        'firstApplicable'
    |
        'onlyOneApplicable'
    |
        'orderedDenyOverrides'
    |
        'orderedPermitOverrides'
    |
        'denyUnlessPermit'
    |
        'permitUnlessDeny'
    |
        'onPermitApplySecond'
       ) NEWLINE*
    ;

adviceDefinition :
        NEWLINE* ADVICE (
        // By reference
            TARGETRESSOURCE NEWLINE+
        |
        // defining the actual advice
            TARGETRESSOURCE NEWLINE* RIGHTCBRACKET NEWLINE* ( TARGETRESSOURCE ASSIGN ( STRING | TARGETRESSOURCE ) NEWLINE* )* LEFTCBRACKET )* NEWLINE*
        ;

    
obligationDefinition :
        NEWLINE* OBLIGATION (
        // By reference
            TARGETRESSOURCE NEWLINE+
        |
        // defining the actual obligation
            TARGETRESSOURCE NEWLINE* RIGHTCBRACKET NEWLINE* ( TARGETRESSOURCE ASSIGN ( STRING | TARGETRESSOURCE ) NEWLINE* )*  LEFTCBRACKET )* NEWLINE*
        ;


attributeDefinition :
	NEWLINE* ATTRIBUTE WORD
	NEWLINE*
	RIGHTCBRACKET NEWLINE* (IDENTIFIERS ASSIGN VALUE  NEWLINE* )* LEFTCBRACKET NEWLINE*
	;





/*
 * Lexer Rules
 */


BlockComment
:
	NEWLINE* '/*' .*? '*/' -> skip
;

LineComment
:
	NEWLINE* '//' ~( '\r' | '\n' )* -> skip
;

/* General definitions */

VALUE :
      TYPES
      ;

TYPES :
      NUMBER
      |
      STRING
      |
      BOOL
      |
      STRING ':' WORD  // ipAddress : "127.0.0.1":ipAddress
      // category = " ... "
      // type = " ... "
      ;

COMPARE :
        
        EQUAL
    |
        NOTEQUAL
    |
        LESS
    |
        GREATER
    |
        LESSEQUAL
    |
        GREATEREQUAL
    ;



NEWLINE:
	('\n' | '\r')+ 
	;
	
WHITESPACE:
	(' ' | '\t')+ ->skip
	;
	
fragment LOWERCASE :
	 [a-z]
	 ;
	 
fragment UPPERCASE :
	 [A-Z]
	 ;
	 
fragment DIGIT :
	 [0-9]
	 ;
	 
fragment NUMBER :
	 DIGIT+ ([.,] DIGIT+)?
	 ;
	 
	
BOOL :
     'true'
     |
     'false'
     ;


/* Bigger Blocks */

NAMESPACE :
        'namespace'
    ;

POLICYSET :
        'policyset'
    ;

POLICY :
        'policy'
    ;


RULE : 
        'rule'
    ;

PERMIT :
        'permit'
    ;

DENY :
        'deny'
    ;

TARGET :
        'target'
    ;

CLAUSE :
        'clause'
    ;


ADVICE :
        'advice'
    ;
        
OBLIGATION :
        'obligation'
    ;

        
ONPERMIT :
        'on permit'
        ;
    
ONDENY :
        'on deny'
        ;

CONDITION :
        'condition'
    ;

FUNCTION :
        'function'
    ;
BAGFUNCTION :
        'integerOneAndOnly'
    |
        'integerBagSize'
    |
        'integerIsIn'
    |
        'doubleOneAndOnly'
    ;
        // And mooooore

COMMENT:
        BlockComment
    |
        LineComment
    ;

/* Attribute block */

ATTRIBUTE :
	  'attribute'
	  ;
	
IDENTIFIERS:
	ID
	|
	TYPE
	|
	CATEGORY
	;
  
ID :
   'id'
   ;
   
TYPE :
     'type'
     ;
     
CATEGORY :
	 'category'
	 ;
	 



/* Some Operators */
PLUS : '+';
MINUS : '-';
DIV : '/';
MULTIPLY : '*';
RIGHTCBRACKET : '{';
LEFTCBRACKET : '}';
RIGHTPAREN : '(';
LEFTPAREN : ')';
ASSIGN : '=' ;
MOD : '%' ;
AND : '&';
OR : '|' ;
NOT : 'not' ;
LESS : '<' ;
GREATER : '>';
CARET : '^' ;
EQUAL : '==';
NOTEQUAL : '!=';
LESSEQUAL : '<=';
GREATEREQUAL : '>=';
ANDAND : '&&';
OROR : '||' ;




TARGETRESSOURCE :
        WORD '.' ( WORD | '*' )
     |
     	WORD '.' TARGETRESSOURCE*
     ;
WORD :
     [A-Za-z][A-Za-z0-9]+
     ;


STRING :
      '"' .*? '"'
      ;



