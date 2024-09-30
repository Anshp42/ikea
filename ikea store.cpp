//Ansh Patel And Shrihan Agarwal 
//C++ ikea store 
//Software design 
//extra = asking for length and used getline feature instead of cin 
#include <iostream>
#include <string>
using namespace std;
 int total;
int main()
{
    //variables
    bool shopping = true;
    string select;
    string type;
    string size;
    string color;
    total = 0; 
    string ans; 
    //Start of functions or sumting 
    cout << "WELCOME TO IKEA!"<<endl;
    while(shopping == true){
    cout << "what would you like to buy"<<endl;
    getline(cin, select);
    if(select == "table tops")
    {
        //If table tops bought 
     cout<<"Table tops"<<endl;
     cout<<"These tables tops cost from $50 to $70"<<endl;
     cout<<"Please select a type"<<endl;
     getline(cin, type);
     //If wood chosen 
     if(type == "wood"){
     cout<<"the wood costs $70 dollars and is good quality"<<endl;
     total+=70;
     }
     //If granite is chosen 
     else if (type =="granite"){
     cout<<"Good choice it is only $60"<<endl;
     total+=60;
     }
     else if(type == "marble"){
      cout<<"Marble is a good choice and good price of $50"<<endl;
      total+=50;
     }
     
     
    }
    //If blackout curtains picked 
    else if(select == "blackout curtains"){
        int length; 
        cout << "Blackout curtins"<<endl;
        cout << "Minimum length of the curtins is 45 inches which costs $50 and the maximum is 54 inches."<<endl; 
        cout << "Each inch added is $1"<<endl; 
        cout << "What length of blackout curtains would you like?"<<endl; 
        cin>>length; 
        if(length<45){
            cout<<"We dont sell that"<<endl;
        }
        else if (length>54){
            cout<<"We dont sell that"<<endl;
        }
        else{
            int check = length - 45;
            int final = 50 + check;
            cout<<"That will be $" + final<<endl;
            total = total + final; 
        }
    }
    else if(select == "standing desks"){
        cout<<"STANDING DESKS"<<endl;
        cout<<"Choose a desk size: Small($80), Medium($100), Large($120)"<<endl; 
        getline(cin, size);
        
        if(size == "Small"){
            cout<<"Small desk has been added to your total"<<endl; 
            total = total + 80;
        }
        else if(size == "Medium"){
            cout<<"Medium desk has been added to your total"<<endl; 
            total = total + 100;
        }
        else if(size == "Large"){
            cout<<"Large desk has been added to your total"<<endl; 
            total = total + 120;
        }
    }
    else if(select=="table legs"){
        cout<<"Table legs"<<endl;
        cout<<"Choose a color: Black($50), brown($70), blue($60)"<<endl;
        getline(cin,color);
        
        if(color=="Black"){
            cout<<"Black table legs added to your total"<<endl;
            total=total+ 50;
            }
            else if(color=="brown"){
                cout<<"Brown table legs have been added to your order"<<endl;
                total=total+70;
            }
            else if(color=="blue"){
                cout<<"blue table legs have been added to your order"<<endl;
                total=total+60;
            }
    }
    
    //keep shopping? 
    cout<<"Would you like to keep shopping?"<< endl;
     getline(cin, ans);
    if(ans != "yes")
     {
         shopping = false; 
     }
     else{
         continue; 
     }
    }
    float tax = total * 0.06;
    cout<<"You ordered items"<<endl;
    cout<<"Your  sub total is $"<<total<<endl;
    cout<<"Sales tax is: $"<<tax<<endl;
    cout<<"Thank you for shopping at IKEA"<<endl;
    
    
    
    return 0;
}