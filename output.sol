
pragma solidity ^0.4.0; // What compiler to use

contract test {
	struct attribute {
		string id;
		string type;
		string category;
	}

	attribute actionType ;
	actionType.id = "urn:oasis:names:tc:xacml:1.0:action:action-type" ;
	actionType.type = "string" ;
	actionType.category = "actionCat" ;

	
	attribute owner ;
	owner.id = "urn:resouce:resource:owner" ;
	owner.type = "string" ;
	owner.category = "resourceCat" ;

	contract contract2 ;
	function teacherAccess () returns (bool) {

		require (resourceId.owne == "nested Contract" || hehe == "hh" );
		return false;
	}

	
}
contract contract2 {
	function studentAccess () returns (bool) {

		struct Target {
			string actionType = "read" ;
		}


		require (actionType == "read" );
		require ((((((( !resourceId.owne == "requestorId" && actionType == "read" )  || hh == "hh" )  )  )  );
		return true;
	}

	function teacherAccess () returns (bool) {

		require (resourceId.owne == "requestorId" || hehe.ho == "hh" );
		return false;
	}


	}



 // End of translation