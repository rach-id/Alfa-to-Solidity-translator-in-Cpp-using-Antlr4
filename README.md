# Alfa-to-Solidity-translator-in-Cpp-using-Antlr4
This is an Alfa-to-Solidity translator developped using **Cpp** and **ANTLR4** features. It uses the listener methods to walk the parsing tree to provide a translation from the **ALFA** (XACML pseudo-code) to a **smart contract** written in **Solidity** (Ethereum smart contracts language). It is not a full translator. So far, not all **ALFA** code can be parsed, the blocks covered in this project are :
>- Namespace, attributes definitions ;
>- Policyset, policy definitions ;
>- Rules ;
> - Target Clauses ;
> - Conditions ; the use of functions in conditions and all advanced features of conditions are not covered. 
> - Booleen expressions in Target Clauses and Conditions. Writing several expressions  linked using logic operators is permitted. The parenthesis are also covered, but sometimes they add/ommit a parentheses ;
>  - Permit/Deny .

Example of an input :
>
	namespace policies{
	    attribute actionId{
		    category = "actionCat"
		    id = "actionId"
		    type = "string"
		    }

	    attribute resourceType{
		    category = "resourceCat"
		    id = "resourceType"
		    type = "string"
		    }
	
	    attribute amount{
	        category = "resourceCat"
	        id = "amount"
	        type = "double"
	    }
	    /**
	     * The limit could be a subject attribute in the case it's user-specific
	     */
	    attribute limit{
	        category = "subjectCat"
	        id = "limit"
	        type = "double"
	    }
	
	     policy transfer{
	        target clause actionId. == "transfer" and resourceType. =="bank account"
	        apply firstApplicable
	        rule allow{
	            condition amount. <= 100 and permission. == "true"
	            permit
	        }
	        rule denyTransfer{
	            deny
	        }
	     }
	     
	}

the output :
> 
	
	pragma solidity ^0.4.21; // What compiler to use

	contract policies {
		
		struct attribute {
			string id_;
			string type_;
			string category_;
		}
		Transfer transfer ;

		constructor () public { 
			attribute actionId ;
			actionId.category_ = "actionCat" ;
			actionId.id_ = "actionId" ;
			actionId.type_ = "string" ;

			attribute resourceType ;
			resourceType.category_ = "resourceCat" ;
			resourceType.id_ = "resourceType" ;
			resourceType.type_ = "string" ;

			attribute amount ;
			amount.category_ = "resourceCat" ;
			amount.id_ = "amount" ;
			amount.type_ = "double" ;

			attribute limit ;
			limit.category_ = "subjectCat" ;
			limit.id_ = "limit" ;
			limit.type_ = "double" ;
		}
	}

	contract Transfer {

		modifier f(string actionId ,string resourceType ) {
			require (sha3(actionId) == sha3("transfer") && sha3(resourceType) == sha3("bank account") );
			_;
		}

		function allow (uint256 amount,string permission) returns (bool) {
			require (amount <= 100 && sha3(permission) == sha3("true") );
			return true;
		}

		function denyTransfer () returns (bool) {
			return false;
		}


	}



	 // End of translation
## How to Compile

This repository contains the majority of the files needed for this to be compiled on a linux os (tested on debian-based distributions).

To use this :
  - You need to have antlr4 preconfigured on your machine and the aliases created for your current session. To do so :
     
          $ cd /usr/local/lib
          $ sudo curl -O https://www.antlr.org/download/antlr-4.7.1-complete.jar
          $ export CLASSPATH=".:/usr/local/lib/antlr-4.7.1-complete.jar:$CLASSPATH"
          $ alias antlr4='java -jar /usr/local/lib/antlr-4.7.1-complete.jar'
          $ alias grun='java org.antlr.v4.gui.TestRig'
      
- Being able to build the C++ target runtime for antlr on your machine.
   On the debian based distros it requires the following package uuid-dev. You can get it via :
            
          $ sudo apt-get install uuid-dev
 
- **The "ExternalAntlr4Cpp" and "CMakeLists" files might contain some absolute pathes to the antlr package or... that need to be changed according to your machine.**


The "grammar" directory contains an already compiled antlr grammar file "ALFA.g4" using both the listener and visitor approach. To recompile it :

          $ antlr4 -Dlanguage=Cpp ALFA.g4 // for the listener 
          $ antlr4 -Dlanguage=Cpp ALFA.g4 -visitor // for the visitor

To see the gui of the parse tree. In the **grammar** directory :
> $ antlr4 ALFA.g4
> $ javac *.java
> $ grun ALFA translationunit -gui input.alfa

To see the tokens : 
> $ antlr4 ALFA.g4
> $ javac *.java
> $ grun ALFA translationunit -token input.alfa


**The "main.cpp" is the one that's been compiled when using cmake.**

To build this project :

      $ mkdir build  // can be skipped since I already put a pre-compiled C++ target on the build directory so the "make" command won't have to download/build the runtime everytime
      // if doenst work, create another build folder, with another name, build2 for exemple, and build the project inside of it
      $ cd build
      $ cmake -G "Unix Makefiles" ..
      $ make -j2 VERBOSE=1
      $ ./AlfaToSol inputFilePath outputFilePath



Ideas of improvements :
>- Using unbuffered Character and Token streams,
>- Maximising parser speed.

Check the antlr4 reference book : "The Definitive ANTLR4 Reference" second edition, page 243 - 246 .

## Have Fun :D
