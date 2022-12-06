/* lahat ng nandito pwede nyo pa baguhin or dagdagan kayo na bahala nilagyan ko na
ng mga label para maintindihan

sa goto or yung mga may label ng goto hanapin nyo nalang jan at yung check out kayo na bahala sa logic non */



#include<iostream>
using namespace std;

int main(){
	int module,module1,module2,pen,opt,wattpad,ebooks,toys;
	int notebook,qty,total;
	string name;
	float price,amt;
	char again,yn;
	
	cout<<"Please enter your name: ";
	cin>>name;
	
	list1: // babalik dito si first if pag wrong input
	system("cls");
	cout<<"Welcome to PDABS Bookstore Mr/Ms: "<<name<<endl;
	cout<<"Please choose a Category from the list"<<endl;
	cout<<"======================================"<<endl;
	cout<<"                LIST                 "<<endl;
	cout<<"======================================"<<endl;
	cout<<"Item list                 ||  Type       "<<endl;
	cout<<"[1] Books                 ||  Academic / Kids Book"<<endl;
	cout<<"[2] School Supplies       ||  Kinder - High School"<<endl;
	cout<<"[3] E-Books               ||  Mangga / Story Books"<<endl;
	cout<<"[4] Wattpad               ||  ..........."<<endl;
	cout<<"[5] Toys                  ||  Kids Toys / Adult Toys"<<endl;
	cout<<"Please choose from the list: ";
	cin>>module;
	
	system("cls");
	
	
	if(module == 1){ //dito mag sisimula yung Books
	cout<<"======================================"<<endl;
	cout<<"               BOOKS                 "<<endl;
	cout<<"======================================"<<endl;
	cout<<"[1]  Academic"<<endl;
	cout<<"[2]  Kids book"<<endl;
	cout<<"[3]  Fiction"<<endl;
	cout<<"[4]  Non-Fiction"<<endl;
	cout<<"[5]  Dreama"<<endl;
	cout<<"[6]  Magazines"<<endl;
	cout<<"[7]  Teens"<<endl;
	cout<<"[8]  Cooking"<<endl;
	cout<<"[9]  Folktale"<<endl;
	cout<<"[10] Poetry"<<endl;
	cout<<"[0]  Back"<<endl;
	cout<<"Please choose from the list: ";
	cin>>module1;
	system("cls");
	if(module1== 1){
				cout<<"========================================"<<endl;
				cout<<"               Academics                "<<endl;
				cout<<"========================================"<<endl;
		cout<<"[1] Pre-school"<<endl;
		cout<<"[2] Elementary"<<endl;
		cout<<"[3] Highschool"<<endl;
		cout<<"[4] Senior High School"<<endl;
		cout<<"[5] College"<<endl;	
		cout<<"[6] Board Exam Books "<<endl;
		cout<<"[7] Encyclopedia"<<endl;
		cout<<"[0] Back"<<endl;
		cout<<"Please choose from the list: ";
		cin>>module2;
			if(module2 == 1){
				cout<<"==========================================="<<endl;
				cout<<"               Pre-School Books            "<<endl;
				cout<<"==========================================="<<endl;
				cout<<"[1] Pre-School Book 1"<<endl;
				cout<<"[2] Pre-School Book 2"<<endl;
				cout<<"[3] Pre-School Book 3"<<endl;
				cout<<"[4] Pre-School Book 4"<<endl;
				cout<<"[5] Pre-School Book 5"<<endl;
				cout<<"[6] Pre-School Book 6"<<endl;
				cout<<"Please choose a Pre-School Book: ";
				opt1:
				cin>>opt;
				switch(opt){
			case 1: price = 11;
			cout<<"Enter the quantity: ";
			break;
			case 2: price = 12;
			cout<<"Enter the quantity: ";
			break;
			case 3: price = 13;
			cout<<"Enter the quantity: ";
			break;
			case 4: price = 14;
			cout<<"Enter the quantity: ";
			break;
			case 5: price = 15;
			cout<<"Enter the quantity: ";
			break;
			case 6: price = 16;
			cout<<"Enter the quantity: ";
			break;
			default:
				cout<<"Invalid input"<<endl;
				cout<<"Please choose again: ";
				goto opt1;
			break;
		}
		cin>>qty;
		cout<<"Added your cart"<<endl;
			}
			
		
		
		
		
	}
	else if(module1== 2){
		test1:
		cout<<"1.Math"<<endl;
		cout<<"2.English"<<endl;
		cout<<"3.History"<<endl;
		cout<<"4.Science"<<endl;
		cin>>module1;
		switch(module1){
			case 1: price = 265;
			
			cout<<"Added to your cart";
			
			break;
			
			case 2: price = 100;
			
			cout<<"Added to your cart";
			
			break;
			
			default:
				goto test1;
				break;
			
		}
		
		cout<<"Enter the quantity";
		cin>>qty;
	}
	else if(module1== 3){
		//gawa kayo switch dito sa ibang subject <3
	}
	else if(module1== 4){
		//gawa kayo switch dito sa ibang subject <3
	}
	else if(module1== 5){
		//gawa kayo switch dito sa ibang subject <3
	}
	else if(module1 == 0){
	    goto list1;
	}
	} //end of books
	else if(module == 2){
	cout<<"======================================"<<endl;
	cout<<"            SCHOOL SUPPLIES                 "<<endl;
	cout<<"======================================"<<endl;
	cout<<"1.Pencil"<<endl;
	cout<<"2.Notebook"<<endl;
	cout<<"0.Check Out"<<endl;
	//add na lang kayo dito ng options
	cout<<"Please select from the list:";
	cin>>module2;
	
	if(module2 == 1){
		
			cout<<"1.Moggol 1           - 10php"<<endl;
			cout<<"2.Moggol 2           - 10php"<<endl;
			cout<<"3.Moggol 3           - 10php"<<endl;
			cout<<"4.Fiber Castle       - 12php"<<endl;
			cout<<"5.Cartoon Pencils    - 9php"<<endl;
			cout<<"6.Mechanical Pencils - 26php"<<endl;
			cout<<"7.sketch Pencils     - 14php"<<endl;
			cout<<"Please select from the list:";
			cin>>pen;
			switch(pen){
			case 1: price = 100;
			
			cout<<"Added to your cart";
			
			break;
			
			case 2: price = 100;
			
			cout<<"Added to your cart";
			
			break;
			
		}
		
		cout<<"Enter the quantity";
		cin>>qty;
			
			
    }
		
		else if(module2 == 2){
		
			cout<<"Notebook";
			cout<<"1.Moggol 1           - 10php"<<endl;
			cout<<"2.Moggol 2           - 10php"<<endl;
			cout<<"3.Moggol 3           - 10php"<<endl;
			cout<<"4.Fiber Castle       - 12php"<<endl;
			cout<<"5.Cartoon Pencils    - 9php"<<endl;
			cout<<"6.Mechanical Pencils - 26php"<<endl;
			cout<<"7.sketch Pencils     - 14php"<<endl;
			cout<<"Please select from the list:";
			cin>>notebook;
			switch(notebook){
			case 1: price = 100;
			
			cout<<"Added to your cart";
			
			break;
			
			case 2: price = 100;
			
			cout<<"Added to your cart";
			
			break;
			
		}
		
		cout<<"Enter the quantity";
		cin>>qty;
		
			//continue nyo nalang kung mag if else kayo or swtich dito
	}
		
		else{ 
			
	}
		
			
			
		
	}
	
	else if(module == 3){
	cout<<"======================================"<<endl;
	cout<<"              E-BOOKS                 "<<endl;
	cout<<"======================================"<<endl;
	cout<<"1.Fiction            - 10php"<<endl;
    cout<<"2.Non-Fiction        - 10php"<<endl;
	cout<<"3.Test               - 10php"<<endl;
	cout<<"4.Test               - 12php"<<endl;
	cout<<"5.Test               - 9php"<<endl;
	cout<<"6.Test               - 26php"<<endl;
	cout<<"7.Test               - 14php"<<endl;
	cout<<"Please select from the list:";
	cin>>ebooks;
	
	if(ebooks == 1){
	cout<<"1.General Fiction    - 54.11php"<<endl;
    cout<<"2.Crime Fiction      - 49.50php"<<endl;
	cout<<"3.Fantasy            - 45.99php"<<endl;
	cout<<"4.Science            - 50php"<<endl;
	cout<<"5.Romance            - 72.68php"<<endl;
	cout<<"6.Thrillers          - 54.50php"<<endl;
	cout<<"7.Childrens & Adult  - 35.75php"<<endl;
	cin>>ebooks;
	
	switch(ebooks){
		case 1: price = 54.11;
		break;
		
		case 2: price = 49.50;
		break;
		
		case 3: price = 45.99;
		break;
		
		case 4: price = 50;
		break;
		
		case 5: price = 72.68;
		break;
		
		case 6: price = 54.50;
		break;
		
		case 7: price = 35.75;
		break;
	}
	cout<<"Enter quantity:";
	cin>>qty;
	}
	//continue nyo nalang kung mag if else kayo or swtich dito
	}
	else if(module == 4){
	cout<<"======================================"<<endl;
	cout<<"               WATTPAD                 "<<endl;
	cout<<"======================================"<<endl;
	cout<<"1.Test               - 10php"<<endl;
    cout<<"2.Test               - 10php"<<endl;
	cout<<"3.Test               - 10php"<<endl;
	cout<<"4.Test               - 12php"<<endl;
	cout<<"5.Test               - 9php"<<endl;
	cout<<"6.Test               - 26php"<<endl;
	cout<<"7.Test               - 14php"<<endl;
	cout<<"Please select from the list:";
	cin>>wattpad;
	switch(wattpad){
		case 1: price = 54.11;
		break;
		
		case 2: price = 49.50;
		break;
		
		case 3: price = 45.99;
		break;
	}
	cout<<"Enter quantity:";
	cin>>qty;
	//continue nyo nalang kung mag if else kayo or swtich dito
	}
	else if(module == 5){
		list:
	cout<<"======================================"<<endl;
	cout<<"                TOYS                 "<<endl;
	cout<<"======================================"<<endl;
	cout<<"1.Rubics Cube        - 7.87"<<endl;
	cout<<"2.Doll               - 8"<<endl;
	cout<<"3.Puzzle             - 8.50"<<endl;
	cout<<"4.Fiber Castle       - 12php"<<endl;
	cout<<"5.Cartoon Pencils    - 9php"<<endl;
	cout<<"6.Mechanical Pencils - 26php"<<endl;
	cout<<"7.sketch Pencils     - 14php"<<endl;
	cout<<"Please select from the list:";
	cin>>toys;
	
	switch(toys){
		case 1: price = 7.87;
		break;
		
		case 2: price = 8;
		break;
		
		case 3: price = 8.50;
		break;
		
		//continue nyo na lang yung case 
	}
	cout<<"Enter quantity:";
	cin>>qty;
	}
	else{
		
		cout<<"Invalid choice, Please choose from the list________";
		system("pause");
		goto list; //eto si first list
		
		
	}
	checkout:
	cout<<"======================================"<<endl;
	cout<<"              CHECK OUT                 "<<endl;
	cout<<"======================================"<<endl;
	cout<<"Your items"<<endl;
	amt = qty * price;
	cout<<"Total amount:"<<amt<<endl;
	cout<<"Do you want to shit again? y/n"<<endl;
	cin>>again;
	
	if(again = 'y' || 'Y'){
		goto list1;
	}
	else{
		return 0;
	}
	//Kayo na bahala sa check out
	
}
