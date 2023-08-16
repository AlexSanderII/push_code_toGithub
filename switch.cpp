#include <iostream>
using namespace std;
 int main() {
 	int opption;
 	cin >> opption;
 	switch(opption) {
 		case 1 :
 			cout << "Toi chon banh bao !" << endl;
 			break;
 		case 2: 
		 cout << "Toi chon banh mi !" <<  endl;
		 	break;
			 	
	 	case 3:
	 		cout << "Toi chon banh pizza !" << endl;
	 		break;
	 	default:
	 		cout << "Khong co trong menu!" << endl;
	 }
 }

