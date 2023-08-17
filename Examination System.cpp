#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// declaring required variables and data types
	int select = 1;
	int option;
	float result = 0;
	float total = 4;
	string try_again;
	char ans_1;
	string ans;
	
	
	
	//Project 23 [ online exam system ]
	
	cout<<"======== Welcome To Your Online Exam ===========\n";
	
	type_ques:
	   cout<<" \n \n Choose an option : "
		    "\n  1.OBJ"
		    "\n  2.Theory\n     :";
		    cin>>option;
		    

		 
		    switch(option){
		    	case 1:
		    			while(select > 0){
		    				
		    				cout<<"What is the value pi ?"
							"\n a. 22/7"
							"\n b. 3.43112"
							"\n c. 7/22 \n     ans : "
							;cin>>ans_1;
							if(ans_1 == 'a' || ans_1 == 'A'){
								result++;
								cout<<"correct ["<<result<<"/ "<<total<<" ]";
							}else{
									cout<<"wrong ["<<result<<"/"<<total<<" ]";
							}
						//another question
							cout<<"\n \n The female reproductive part of a flower is...."
							"\n a. vacule"
							"\n b. stigma"
							"\n c. ovul \n     ans : "
							;cin>>ans_1;
							if(ans_1 == 'c' || ans_1 == 'C'){
								result++;
							cout<<"correct ["<<result<<"/ "<<total<<" ]";
							}else{
									cout<<"wrong ["<<result<<"/"<<total<<" ]";
							}
						//another question	
								cout<<"Select the odd one."
							"\n a. mouse"
							"\n b. bee"
							"\n c. cat \n     ans : "
							;cin>>ans_1;
							if(ans_1 == 'b' || ans_1 == 'B'){
								result++;
								cout<<"correct ["<<result<<"/ "<<total<<" ]";
							}else{
									cout<<"wrong ["<<result<<"/"<<total<<" ]";
							}
						//another question		
								cout<<"What is the full meaning of RAM ?"
							"\n a. Random Accurate Memory"
							"\n b. Read Access Memory"
							"\n c. Random Access Memory \n     ans : "
							;cin>>ans_1;
							if(ans_1 == 'c' || ans_1 == 'C'){
								result++;
							cout<<"correct ["<<result<<"/ "<<total<<" ]";
							}else{
									cout<<"wrong ["<<result<<"/"<<total<<" ]";
							}
		    				
		    				cout<<"\n Total correct was : "<<result<<endl;
		    				float avg = result/total;
		    				cout<<"\n Average score = "<<avg;
		    				
		    					select--;
						}
					break;
		    	case 2:
					while(select > 0){
		    				
		    				
		    					cout<<" ((2+3)/5)*2 = .... ";
							cin>>ans;
							if(ans == "2"){
								result++;
								cout<<"correct ["<<result<<"/ "<<total<<" ]";
							}else{
									cout<<"wrong ["<<result<<"/"<<total<<" ]";
							}
						//another question
							cout<<"\n \n ...... is know a universal solvent. \n";
							cin>>ans;
						 
							if(ans == "water"){
								result++;
								cout<<"correct ["<<result<<"/ "<<total<<" ]";
							}else{
									cout<<"wrong ["<<result<<"/"<<total<<" ]";
							}

						//another question
							cout<<"\n \n Who created Eve? \n";
							cin>>ans;
							if(ans == "god"){
								result++;
							cout<<"correct ["<<result<<"/ "<<total<<" ]";
							}else{
									cout<<"wrong ["<<result<<"/"<<total<<" ]";
							}
							
							
						//another question
							cout<<"\n \n The writer of these codes is called....\n";
							cin>>ans;
						 
							if(ans == "alex"){
								result++;
							cout<<"correct ["<<result<<"/ "<<total<<" ]";
							}else{
									cout<<"wrong ["<<result<<"/"<<total<<" ]";
							}  				
		    				
		    					cout<<"\n Total correct was : "<<result<<endl;
		    				float avg = (result/total);
		    				cout<<"\n Average score = "<<avg;
		    					select--;
						}
						break;
						
				default : cout<<"Wrong selection";
					goto type_ques;
		    	
		    	
		    	
			}
		    cout<<"\n\n Do you want to try again? [y/n] ";
		    go_on:
		    cin>>try_again;
		     if(try_again == "n" || try_again == "N"){
		     	cout<<"Thanks for taking part!";
		     	return 0; //to exit the program 
		     	
			 }else if(try_again == "y" || try_again == "Y"){
			 		cout<<"Its fun to try more questions!";
			 		select = 1;
			 		total+=4;
			 		
		     	goto type_ques; //take the user to the start of the program 
			 }else{
			 	cout<<"Wrong input! [y/n] : ";
			 	goto go_on;
			 }
		    
		    
	
	
	return 0;
}
