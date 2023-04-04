#include<iostream>
using namespace std;

class ItemDetails
{
    public:
        int item_no;
        char item_name[50];
        float item_price;
};
class DiscountedItem : public ItemDetails                  //class discounteditems is inherited from function itemdetails()
{
    public:
        int discount_percent;
        int discounted_price;
        void accept_details()                                // defining outline function to accept details from the user
        {
                cout<<"\n Enter Item Name : ";
                cin>>item_name;
                cout<<"\n Enter Item No. : ";
                cin>>item_no;
                cout<<"\n Enter Item Price : ";
                cin>>item_price;
                cout<<"\n Enter Discount Percent : ";
                cin>>discount_percent;
                cout<<"\n ----------------------\n";
                discounted_price = item_price - item_price * discount_percent / 100;
        }
        void display_details()                              //outline function for displaying the details entered by the user and hence the final bill
        {
                cout<<"\n Item Name : "<<item_name;
                cout<<"\n Item No. : "<<item_no;
                cout<<"\n Item Price : "<<item_price;
                cout<<"\n Discount Percent : "<<discount_percent;
                cout<<"\n Discounted Price : "<<discounted_price;
                cout<<"\n ----------------------";
        }
};
int main()
{
        int i, count, discount = 0, price = 0;      
        DiscountedItem dis[100];
        cout<<"\n How many items you want to enter? : ";
        cin>>count;
        for(i=1; i<=count; i++)
        {
                dis[i].accept_details();
        }
        for(i=1;i<=count;i++)
        {
                dis[i].display_details();
        }
        for(i=1;i<=count;i++)
        {
                price = price + dis[i].item_price;
        }
        for(i=1;i<=count;i++)
        {
                discount = discount + dis[i].item_price-dis[i].discounted_price;
        }
        cout<<"\n Total Price : "<<price;
        cout<<"\n Total Discount : "<<discount;
        return 0;
}