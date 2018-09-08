
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