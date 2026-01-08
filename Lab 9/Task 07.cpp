#include<iostream>
using namespace std;
int main()
 {
    int menu, item;
    char again;
    float qty, bill = 0;
    do 
	{
        cout << "\n----- MAIN MENU -----";
        cout << "\n1. Breakfast";
        cout << "\n2. Lunch";
        cout << "\n3. Dinner";
        cout << "\nEnter menu choice: ";
        cin >> menu;
        switch (menu)
		 {
        case 1: 
            cout << "\n1. Anda Paratha (Rs.40)";
            cout << "\n2. Nan Channy (Rs.60)";
            cout << "\n3. Siri Paye (RS.150)";
            cout << "\n3. Tea (Rs.15)";
            cout << "\nSelect item: ";
            cin >> item;
            cout << "Enter quantity: ";
            cin >> qty;
            switch (item) 
			{
                case 1: bill += 40 * qty; break;
                case 2: bill += 60 * qty; break;
                case 3: bill += 15 * qty; break;
                default: cout << "Invalid item";
            }
            break;
            case 2: 
             cout << "\n1. Chicken Karahi (Rs.1050/kg)";
             cout << "\n2. Mutton Karahi (Rs.1800/kg)";
             cout << "\n3. Egg Fried Rice(RS.450/palte)";
             cout << "\n4. BBQ(RA.1050/dozen)";
             cout  << "\nSelect item: ";
             cin  >> item;
			 cout << "Enter quantity: ";
             cin >> qty;
             switch (item) 
			{
                case 1: bill += 1050 * qty; break;
                case 2: bill += 1800 * qty; break;
                default: cout << "Invalid item";
            }
            break;
            case 3: 
            cout << "\n1. Chicken Karahi (Rs.1050/kg)";
            cout << "\n2. Mutton Karahi (Rs.1800/kg)";
            cout << "\n3. Egg Fried Rice(RS.450/palte)";
            cout << "\n4. BBQ (Rs.1050/dozen)";
            cout << "\n5. Saji (Rs.800/kg)";
            cout << "\nSelect item: ";
            cin >> item;
			cout << "Enter quantity: ";
            cin >> qty;
            switch (item)
			 {
                case 1: bill += 1050 * qty; break;
                case 2: bill += 1050 * qty; break;
                case 3: bill += 800 * qty; break;
                default: cout << "Invalid item";
            }
            break;
           default:
            cout << "Invalid menu choice";
        }
        cout << "\nDo you want to order again? (y/n): ";
        cin >> again;
    }
	 while (again == 'y' || again == 'Y');
         cout << "\nTotal Bill = Rs." << bill;
    cout << "\nThank you for your order!";
     return 0;
}

