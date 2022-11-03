#include<iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    //Quantity
    int Qrooms=0, Qparatha=0, Qdrinks=0 , Qveg=0, Qnonveg=0;
    //food items sold
    int srooms=0, sparatha=0 , sdrinks=0 , sveg=0 , snonveg=0;
    //total price of items
    int total_rooms=0 , total_paratha=0 , total_drinks=0 , total_veg=0, total_nonveg=0;

    cout<<"\n----------------Quantity of items we have----------------";
    cout<<"\n Rooms available:";
    cin>>Qrooms;
    cout<<"\n quantity of paratha:";
    cin>>Qparatha;
    cout<<"\n quantity of drinks:";
    cin>>Qdrinks;
    cout<<"\n quantity of Veg item :";
    cin>>Qveg;
    cout<<"\n quantity of Nonveg item:";
    cin>>Qnonveg;

    m:

    cout<<"\n\t\t\t Please select from the menu option";

    cout<<"\n\n1) Rooms";
    cout<<"\n\n2) Paratha";
    cout<<"\n\n3) Drinks";
    cout<<"\n\n4) veg";
    cout<<"\n\n5) Non veg";
    cout<<"\n\n6) Info regarding sales";
    cout<<"\n\n7) Exit";

    cout<<"\n\nPlease enter the choice:";
    cin>>choice;


    switch(choice)
    {
        case 1:
            cout<<"\n\nEnter the number of rooms you want:";
            cin>>quant;

            if(Qrooms-srooms>=quant)
            {
                srooms+=quant;
                total_rooms=(total_rooms+quant*8000);
                cout<<"\n\n\t\t"<< quant <<" rooms which have been alloted to you!";

            }
            else
                cout<<"\n\n\t"<<"Only"<<Qrooms-srooms<<" Rooms remaining in the hotel";
                break;
            

                case 2:
            cout<<"\n\nEnter the number of paratha you want to order:";
            cin>>quant;

            if(Qparatha-sparatha>=quant)
            {
                sparatha+=quant;
                total_paratha=(total_paratha+quant*90);
                cout<<"\n\n\t\t"<<quant<<"Paratha is the order";

            }
            else
                cout<<"\n\n\t"<<"Only"<<Qparatha-sparatha<<"paratha remaining in the hotel";
                break;
            

                case 3:
            cout<<"\n\nEnter the quantity of drinks you want to order:";
            cin>>quant;

            if(Qdrinks-sdrinks>=quant)
            {
                sdrinks+=quant;
                total_drinks=(total_drinks+quant*150);
                cout<<"\n\n\t\t"<<quant<<"Drinks is the order";

            }
            else
                cout<<"\n\n\t"<<"Only"<<Qdrinks-sdrinks<<"Drinks remaining in the hotel";
                break;
            

                case 4:
            cout<<"\n\nEnter the quantity of veg item you want to order:";
            cin>>quant;

            if(Qveg-sveg>=quant)
            {
                sveg+=quant;
                total_veg=(total_veg+quant*600);
                cout<<"\n\n\t\t"<<quant<<"Veg item is the order";

            }
            else
                cout<<"\n\n\t"<<"Only"<<Qveg-sveg<<"Veg items remaining in the hotel";
                break;
            

                case 5:
            cout<<"\n\nEnter the quantity of Non veg items you want to order:";
            cin>>quant;

            if(Qnonveg-snonveg>=quant)
            {
                snonveg+=quant;
                total_nonveg=(total_nonveg+quant*750);
                cout<<"\n\n\t\t"<<quant<<"Non veg item is the order";

            }
            else
                cout<<"\n\n\t"<<"Only"<<Qdrinks-sdrinks<<"Non veg remaining in the hotel";
                break;
            

            case 6:

            cout<<"\n\n\t Details of sales and collection of hotel";
            cout<<"\n\n Total Number of rooms of hotel :"<< Qrooms;
            cout<<"\n\n Number of rooms we gave for rent :"<<srooms;
            cout<<"\n\n Number of rooms left :"<<Qrooms-srooms;
            cout<<"\n\n Total rooms collection for a day :"<<total_rooms;

            cout<<"\n\n Total paratha made in hotel :"<< Qparatha;
            cout<<"\n\n Number of paratha sold :"<<sparatha;
            cout<<"\n\n Number of paratha left :"<<Qparatha-sparatha;
            cout<<"\n\n Total paratha collection for a day :"<<total_paratha;

            cout<<"\n\n Total fresh drinks made in hotel :"<< Qdrinks;
            cout<<"\n\n Number of drinks sold :"<<sdrinks;
            cout<<"\n\n Number of drinks left :"<<Qdrinks-sdrinks;
            cout<<"\n\n Total drinks collection for a day :"<<total_drinks;

            cout<<"\n\n Total Veg items made in hotel :"<< Qveg;
            cout<<"\n\n Number of veg items sold :"<<sveg;
            cout<<"\n\n Number of veg items left :"<<Qnonveg-sveg;
            cout<<"\n\n Total veg item collection for a day :"<<total_veg;

            cout<<"\n\n Total Non veg items made in hotel :"<< Qnonveg;
            cout<<"\n\n Number of non veg items sold :"<<snonveg;
            cout<<"\n\n Number of non veg items left :"<<Qnonveg-snonveg;
            cout<<"\n\n Total non veg item collection for a day :"<<total_nonveg;

            cout<<"\n\n\n Total collection of the day : "<<total_rooms+total_paratha+total_drinks+total_veg+total_nonveg;
            break;

            case 7:
                exit(0);

                default:
                    cout<<"Please select number according to the menu";
    }
    goto m;
}