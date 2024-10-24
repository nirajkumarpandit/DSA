# include<iostream>
using namespace std;
int main(){

    int months;
    cout<<"Enter the month :";
    cin>>months;
    switch(months){
        case 1:
        cout<<"JANUARY";
        break;
         case 2:
        cout<<"FEBRUARY";
        break;
         case 3:
        cout<<"MARCH";
        break;
         case 4:
        cout<<"APRIL";
        break;
         case 5:
        cout<<"MAY";
        break;
         case 6:
        cout<<"JUNE";
        break;
         case 7:
        cout<<"JULY";
        break;
         case 8:
        cout<<"AUGUST";
        break; 
        case 9:
        cout<<"SEPTEMBER";
        break;
         case 10:
        cout<<"OCTOBER";
        break;
        case 11:
        cout<<"NOVEMBER";
        break;
        case 12:
        cout<<"DECEMBER";
        break;
        default :
            cout<<"invalid number";
        
    }
}