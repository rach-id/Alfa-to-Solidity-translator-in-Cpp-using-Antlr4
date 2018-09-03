
pragma solidity ^0.4.0; // What compiler to use

contract policies {
	
	struct attribute {
		string id_;
		string type_;
		string category_;
	}









	struct Target {
		string actionId ;
	}


	contract transfer ;

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

contract transfer {
	require (actionId == "transfer" && resourceType == "bank account" );
	function allow () returns (bool) {

		require (amount <= "limit" );
		return true;
	}

	function denyTransfer () returns (bool) {

		return false;
	}


}



 // End of translation