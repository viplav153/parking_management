
#include <bits/stdc++.h>
#include<string>
using namespace std;

string currentDateTime()//this function return date and time in string format using this I had extracted hours,min,sec
 {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d %X", &tstruct);

    return buf;
}
int intos(string r)//change string to int ,I had used this because time i was getting in string and to perform time diiference I need to change that into Int
{
    int p=1,ans=0;
    for(int i=1;i>=0;i--)
    {
        int a=r[i]-'0';
        ans=a*p+ans;
        p=p*10;

    }
    return ans;
}

void vacc_vacc()//prints pattern for combination  vaccant and vaccant
{
    
    for(int i=0;i<5;i++)
    {
        if(i!=2)
        {
            for(int j=0;j<12;j++)
            {
                cout<<"*";
            }
            for(int j=12;j<18;j++)
            {
                cout<<" ";
            }
            for(int j=18;j<30;j++)
            {
                cout<<"*";
            }
            cout<<endl;

        }
        else
        {
            for(int j=0;j<3;j++)
            {
                cout<<"*";
            }
            cout<<"VACCANT";
            for(int j=10;j<12;j++)
            {
                cout<<"*";
            }
            for(int j=12;j<18;j++)
            {
                cout<<" ";
            }
            for(int j=18;j<21;j++)
            {
                cout<<"*";
            }
             cout<<"VACCANT";
             for(int j=28;j<30;j++)
            {
                cout<<"*";
            }
            cout<<endl;


        }
        

    }
    


}

void occ_occ()//prints pattern for combination  occupied and occupied
{
    
    for(int i=0;i<5;i++)
    {
        if(i!=2)
        {
            for(int j=0;j<12;j++)
            {
                cout<<"#";
            }
            for(int j=12;j<18;j++)
            {
                cout<<" ";
            }
            for(int j=18;j<30;j++)
            {
                cout<<"#";
            }
            cout<<endl;

        }
        else
        {
            for(int j=0;j<2;j++)
            {
                cout<<"#";
            }
            cout<<"OCCUPIED";
            for(int j=10;j<12;j++)
            {
                cout<<"#";
            }
            for(int j=12;j<18;j++)
            {
                cout<<" ";
            }
            for(int j=18;j<20;j++)
            {
                cout<<"#";
            }
             cout<<"OCCUPIED";
             for(int j=28;j<30;j++)
            {
                cout<<"#";
            }
            cout<<endl;


        }
        

    }
    
}

void vacc_occ()//prints pattern for combination  vaccant and occupied
{


    for(int i=0;i<5;i++)
    {
        if(i!=2)
        {
            for(int j=0;j<12;j++)
            {
                cout<<"*";
            }
            for(int j=12;j<18;j++)
            {
                cout<<" ";
            }
            for(int j=18;j<30;j++)
            {
                cout<<"#";
            }
            cout<<endl;

        }
        else
        {
            for(int j=0;j<3;j++)
            {
                cout<<"*";
            }
            cout<<"VACCANT";
            for(int j=10;j<12;j++)
            {
                cout<<"*";
            }
            for(int j=12;j<18;j++)
            {
                cout<<" ";
            }
            for(int j=18;j<20;j++)
            {
                cout<<"#";
            }
             cout<<"OCCUPIED";
             for(int j=28;j<30;j++)
            {
                cout<<"#";
            }
            cout<<endl;


        }
        

    }
    


}
void occ_vacc()//prints pattern for combination occupied and vaccant
{

     for(int i=0;i<5;i++)
    {
        if(i!=2)
        {
            for(int j=0;j<12;j++)
            {
                cout<<"#";
            }
            for(int j=12;j<18;j++)
            {
                cout<<" ";
            }
            for(int j=18;j<30;j++)
            {
                cout<<"*";
            }
            cout<<endl;

        }
        else
        {
            for(int j=0;j<2;j++)
            {
                cout<<"#";
            }
            cout<<"OCCUPIED";
            for(int j=10;j<12;j++)
            {
                cout<<"#";
            }
            for(int j=12;j<18;j++)
            {
                cout<<" ";
            }
            for(int j=18;j<21;j++)
            {
                cout<<"*";
            }
             cout<<"VACCANT";
             for(int j=28;j<30;j++)
            {
                cout<<"*";
            }
            cout<<endl;


        }
        

    }

      

}
void view(int arr[])//for viewing car parking layout
{
    
    cout<<"      1                 2\n";
    if(arr[0]==1 && arr[1]==1)
    {
        occ_occ();//these functions are different combination of like if parking lot no 1 and 2 is coocupied it will call following pattern
    }
    else if(arr[0]==1 && arr[1]==0)
    {
        occ_vacc();//these functions are different combination of like if parking lot no 1 and 2 is vaccant it will call following pattern
    }
    else if(arr[0]==0 && arr[1]==0)
    {
        vacc_vacc();
    }
    else{
        vacc_occ();
    }
     
     cout<<"\n";
     cout<<"      3                 4\n";
    if(arr[2]==1 && arr[3]==1)
    {
        occ_occ();
    }
    else if(arr[2]==1 && arr[3]==0)
    {
        occ_vacc();
    }
    else if(arr[2]==0 && arr[3]==0)
    {
        vacc_vacc();
    }
    else{
        vacc_occ();
    }

     cout<<"\n";
      cout<<"      5                 6\n";
     if(arr[4]==1 && arr[5]==1)
    {
        occ_occ();
    }
    else if(arr[4]==1 && arr[5]==0)
    {
        occ_vacc();
    }
    else if(arr[4]==0 && arr[5]==0)
    {
        vacc_vacc();
    }
    else{
        vacc_occ();
    }
    cout<<"\n";
     cout<<"      7                 8\n";
     if(arr[6]==1 && arr[7]==1)
    {
        occ_occ();
    }
    else if(arr[6]==1 && arr[7]==0)
    {
        occ_vacc();
    }
    else if(arr[6]==0 && arr[7]==0)
    {
        vacc_vacc();
    }
    else{
        vacc_occ();
    }

}
bool isNumber(string s)//for checking a string is digit or not, this is to ensure that person do not press other value than numeric key
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;
 
    return true;
}
int  diff(int hr1,int min1,int sec1,int hr2, int min2 ,int sec2 )//calculate time diff in min of duration the car is parked
 {
  
    if(sec2 > sec1)
    {
        --min1;
        sec1 += 60;
    }

    int seconds = sec1 - sec2;
    if(min1 > min2)
    {
        --hr1;
        min1 += 60;
    }
    int minutes = min1-min2;
    int hours = hr1-hr2;
    hours=hours*60;
    minutes=minutes+hours;
    return minutes;


 }

int main()
{
    
    int arr[8]={0},hr[8],mi[8],se[8];

    

    while(1)
    {
        cout<<"**************************************************"<<endl;
        cout<<"*                                                *"<<endl;
        cout<<"*        WELCOME TO VIPLAV's CAR PARKING         *"<<endl;
        cout<<"*                                                *"<<endl;
        cout<<"**************************************************"<<endl;
        cout<<"\n!!Parking cost is Rs 5 for 30 min!!\n";
        cout<<"Press 1 View Parking Layout & available spaces\n";
        cout<<"Press 2 Park the car \n";
        cout<<"Press 3 Car exit and calculate bill\n";
        cout<<"Press 4 Exit\n";
        
        
        string choice;
        cin>>choice;

        if(isNumber(choice))//checks you have entered integer or not
        {
                stringstream geek(choice);//changing choice to int
                int x = 0;
                 geek >> x;
                 int count=0;
                 int i;
                switch (x)
                {
                case 1: cout<<endl;
                       view(arr);//view all oocupied and vaccant spaces
                       cout<<endl;

                      
                       for( i=0;i<8;i++)//checks for vaccant spaces
                       {
                           if(arr[i]==1)
                           {
                               count++;
                           }
                       }
                       if(count==8)
                       {
                           cout<<"Regret no vaccant spaces ";
                       }
                       else
                       {
                            cout<<"AVAILABLE SPACES ARE: ";//gives list of vaccant parking lot number
                            for(i=0;i<8;i++)
                            {
                                if(arr[i]==0)
                                {
                                    cout<<i+1<<" ";
                                }
                            }

                       }

                       
                       cout<<endl;
                       break;
                case 2:
                        cout<<"Choose parking lot number from available list\n";
                        cout<<"\nAVAILABLE LIST ";
                            for(i=0;i<8;i++)//gives list of vaccant parking lot number
                            {
                                if(arr[i]==0)
                                {
                                    cout<<i+1<<" ";
                                }
                            }
                            cout<<"\n";
                        
                       for(i=0;i<8;i++)
                       {
                           if(arr[i]==1)
                           {
                               count++;
                           }
                       }
                       if(count==8) //means all sapces are full
                       {
                           cout<<"Regret no vaccant spaces \n";
                       }
                       else
                       {
                           string choose;
                           cin>>choose;
                           if(isNumber(choose))
                           {
                               stringstream gee(choose);
                                int y = 0;
                                gee >> y;

                                if(arr[y-1]==1 || y>8 ||y<1)//check for parking space is occupied or  input is beyond boundaries Not between 1 to 8
                                {
                                   cout<<"Choose parking lot number from available list\n"; 
                                }
                                else
                                {
                                    arr[y-1]=1;//marked the position as occupied
                                    cout<<"Your car is parking lot number is "<<y<<endl;
                                    string tim;
                                    tim=currentDateTime();//get the whole date and time 
                                    string hr_s = tim.substr(11, 2);//extract hours from tim
                                    string mi_s = tim.substr(14, 2);//extract min from tim
                                    string se_s = tim.substr(17, 2);// //extract sec from tim
                                    hr[y-1]=intos(hr_s);// storing hrs at same position 
                                    mi[y-1]=intos(mi_s);
                                    se[y-1]=intos(se_s);

                                }

                           }
                           else
                           {
                               cout<<"INVALID INPUT\n";
                           }
                       }

                  
                        break;
                case 3: for(i=0;i<8;i++)
                       {
                           if(arr[i]==0)
                           {
                               count++;
                           }
                       }
                       if(count==8)//checks if all sapces are empty because there should be minimum 1 car for making exit operation
                       {
                           cout<<"INVALID CHOICE NO CAR IS PARKED NOW \n";
                       }
                       else{
                           cout<<"Please enter your parking lot number\n";
                           string park;
                           cin>>park;
                           if(isNumber(park))
                           {
                               stringstream ge(park);
                                int z = 0;
                                ge >> z;
                                if(arr[z-1]==0 || z>8 ||z<1)//check for parking space is already empty or  input is beyond boundaries Not between 1 to 8
                                {
                                    cout<<"Please enter correct parking lot number\n";
                                }
                                else
                                {
                                    arr[z-1]=0;
                                    cout<<"\nParking lot Number: "<<z<<" vccanted successfully!!\n";
                                    string tim;
                                    tim=currentDateTime();
                                    string hr_s = tim.substr(11, 2);
                                    string mi_s = tim.substr(14, 2);
                                    string se_s = tim.substr(17, 2);
                                    int hr2=intos(hr_s);
                                    int min2=intos(mi_s);
                                    int sec2=intos(se_s);

                                    int total=diff(hr2,min2,sec2,hr[z-1],mi[z-1],se[z-1]);
                                    cout<<" ______________________________________________________"<<endl;
                                    cout<<"|  Your car was parked from "<<hr[z-1]<<":"<<mi[z-1]<<":"<<se[z-1]<<" to "<<hr2<<":"<<min2<<":"<<sec2<<"         |"<<endl;
                                    cout<<"|  Your total time duration was :"<<total<<"min                  |"<<endl;
                                    float a=float(total)/30.00;
                                    cout<<"|   Kindly pay Rs "<<ceil(a)*10<<"                                    |"<<endl;

                                    cout<<"|______________________________________________________|"<<endl;




                                }
                           }
                           else
                           {
                               cout<<"INVALID INPUT\n";
                           }
                       }
                       break;
                
                case 4: exit(0);
                       break;
                
                default: cout<<"Please enter correct choice\n";
                        break;
                }
        }
        else
        {
            cout<<"Please enter correct choice\n";
        }
        cout<<endl;
    }
    
    
    
    
    
    return 0;
}