//pseudocode
/* Display Code Banner:
 -"Fund Raising For The Community Garden"
 -"GardenMoneyRaise.cpp"
 -"Sadad Yusuf"
 -"07/06/2024"
 Get Participant's Name: Declare full name as a string.
 Declare and Initialize Variables:
     - Declare moneyGenerated=0, totalGenerated=0, generaTed=2.75 * 2, totalHours=0 as double
     - Declare day1_hrs, day2_hrs, ..., day14_hrs as double.
 Get Hours Worked Each Day and Calculate Money Generated.
 Display Hours Worked and Money Generated.
 in the end Calculate and Display Totals and Average.
End Program.
*/
//
//
//  GardenMoneyRaise.cpp
//  Created by Sadad Yusuf on 7/6/24.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
   //Code Banner.
    string full_Name;
    cout<<setw(60)<<"Fund Raising For The Community Garden\n"
    <<setw(43)<<"GardenMoneyRaise.cpp\n"
    <<setw(34)<<"Sadad Yusuf\n"
    <<setw(33)<<"07/06/2024\n"


//Get Participant's Name.
    <<setw(10)<<"\nWhat is you're Full Name?."<<endl;
    getline(cin, full_Name);
    cout<<"Hello, "<<full_Name<<" \n";
   //Declaring a double data Type.
    double moneyGenerated=0, totalGenerated=0, generaTed=2.75*2, totalHours=0;
    double day1_hrs,day2_hrs,day3_hrs,day4_hrs,day5_hrs,day6_hrs,day7_hrs,day8_hrs,day9_hrs,day10_hrs, day11_hrs,day12_hrs,day13_hrs,day14_hrs;
   

//Get all the hours on each day.
    cout<<setprecision(2)<<showpoint<<fixed<<endl;
    cout<<"day 1: how many hours did you work?. "<<endl;
    cin>>day1_hrs;
    moneyGenerated=day1_hrs*generaTed;
    totalGenerated=moneyGenerated;
    cout<<"\nday 2: how many hours did you work?. "<<endl;
     cin>>day2_hrs;
    moneyGenerated=day2_hrs*generaTed;
    totalGenerated+=moneyGenerated;

    cout<<"\nday 3: how many hours did you work?. "<<endl;
    cin>>day3_hrs;
    moneyGenerated=day3_hrs*generaTed;
    totalGenerated+=moneyGenerated;

    cout<<"\nday 4: how many hours did you work?. "<<endl;
    cin>>day4_hrs;
    moneyGenerated=day4_hrs*generaTed;
    totalGenerated+=moneyGenerated;

    cout<<"\nday 5: how many hours did you work?. "<<endl;
    cin>>day5_hrs;
    moneyGenerated=moneyGenerated;
    totalGenerated+=moneyGenerated;

    cout<<"\nday 6: how many hours did you work?. "<<endl;
    cin>>day6_hrs;
    moneyGenerated=day6_hrs*generaTed;
    totalGenerated+=moneyGenerated;

    cout<<"\nday 7: how many hours did you work?. "<<endl;
    cin>>day7_hrs;
    moneyGenerated=day7_hrs*generaTed;
    totalGenerated+=moneyGenerated;

    cout<<"\nday 8: how many hours did you work?. "<<endl;
    cin>>day8_hrs;
    moneyGenerated=day8_hrs*generaTed;
    totalGenerated+=moneyGenerated;

    cout<<"\nday 9: how many hours did you work?. "<<endl;
    cin>>day9_hrs;
    moneyGenerated=day9_hrs*generaTed;
    totalGenerated+=moneyGenerated;

    cout<<"\nday 10: how many hours did you work?. "<<endl;
    cin>>day10_hrs;
    moneyGenerated=day10_hrs*generaTed;
    totalGenerated+=moneyGenerated;

    cout<<"\nday 11: how many hours did you work?. "<<endl;
    cin>>day11_hrs;
    moneyGenerated=day11_hrs*generaTed;
    totalGenerated+=moneyGenerated;

    cout<<"\nday 12: how many hours did you work?. "<<endl;
    cin>>day12_hrs;
    moneyGenerated=day12_hrs*generaTed;
    totalGenerated+=moneyGenerated;

    cout<<"\nday 13: how many hours did you work?. "<<endl;
    cin>>day13_hrs;
    moneyGenerated=day13_hrs*generaTed;
    totalGenerated+=moneyGenerated;

    cout<<"\nday 14: how many hours did you work?. "<<endl;
    cin>>day14_hrs;
    moneyGenerated=day14_hrs*generaTed;
    totalGenerated+=moneyGenerated;
//display each value and totals of hour and money generated in a table
    cout<<"\n\nHOURS WORKED EACH DAY"<<setw(30)<<"MONEY GENERATED"<<endl;
    
    cout<<"\nDay1: "<<day1_hrs<<setw(30)<<"$"<<moneyGenerated<<endl;
    cout<<"\nDay2: "<<day2_hrs<<setw(30)<<"$"<<moneyGenerated<<endl;
    cout<<"\nDay3: "<<day3_hrs<<setw(30)<<"$"<<moneyGenerated<<endl;
    cout<<"\nDay4: "<<day4_hrs<<setw(30)<<"$"<<moneyGenerated<<endl;
    cout<<"\nDay5: "<<day5_hrs<<setw(30)<<"$"<<moneyGenerated<<endl;
    cout<<"\nDay6: "<<day6_hrs<<setw(30)<<"$"<<moneyGenerated<<endl;
    cout<<"\nDay7: "<<day7_hrs<<setw(30)<<"$"<<moneyGenerated<<endl;
    cout<<"\nDay8: "<<day8_hrs<<setw(30)<<"$"<<moneyGenerated<<endl;
    cout<<"\nDay9: "<<day9_hrs<<setw(30)<<"$"<<moneyGenerated<<endl;
    cout<<"\nDay10: "<<day10_hrs<<setw(29)<<"$"<<moneyGenerated<<endl;
    cout<<"\nDay11: "<<day11_hrs<<setw(29)<<"$"<<moneyGenerated<<endl;
    cout<<"\nDay12: "<<day12_hrs<<setw(29)<<"$"<<moneyGenerated<<endl;
    cout<<"\nDay13: "<<day13_hrs<<setw(29)<<"$"<<moneyGenerated<<endl;
    cout<<"\nDay14: "<<day14_hrs<<setw(29)<<"$"<<moneyGenerated<<endl;
    
    totalHours=day1_hrs+day2_hrs+day3_hrs+day4_hrs+day5_hrs+day6_hrs+day7_hrs+day8_hrs+day9_hrs+day10_hrs+ day11_hrs+day12_hrs+day13_hrs+day14_hrs;
    cout<<"-----------------------------------------------\n";
    cout<<"\nTOTALS: "<<totalHours<<setw(27)<<"$"<<totalGenerated<<endl;
    cout<<"-----------------------------------------------\n";
    cout<<"Average Money Raised"<< "= "<<"$"<<totalGenerated/14<< endl;   //get the average money raised.
    cout<<"-----------------------------------------------\n";

    



    
    return 0;
}
