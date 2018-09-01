pragma solidity ^0.4.0; // What compiler to use

struct attribute {
	string id;
	string type;
	string category;
}

attribute actionId ;
actionId.category = "actionCat" ;
actionId.id = "actionId" ;
actionId.type = "string" ;


attribute resourceType ;
resourceType.category = "resourceCat" ;
resourceType.id = "resourceType" ;
resourceType.type = "string" ;


attribute amount ;
amount.category = "resourceCat" ;
amount.id = "amount" ;
amount.type = "double" ;


attribute limit ;
limit.category = "subjectCat" ;
limit.id = "limit" ;
limit.type = "double" ;

contract transfer {

	struct Target {
		string actionId = "transfer
	}


	function allow() returns (bool) {

		return true;
	}
	function denyTransfer() returns (bool) {

		return false;
	}

}



 // End of translation