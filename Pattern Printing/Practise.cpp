#include<iostream>
using namespace std;

// int main()
// {
    
//     int row,col;
//     for(row=1;row<=5;row=row+1)
//     {
//         for(col=1;col<=5-row;col=col+1)
//         {
//             cout<<" ";

//         }
//         for(col=1;col<=row;col=col+1)
//         {
//             cout<<row;
//         }
//     }
    //Print ABCDE with spaces
    for(row=1;row<=5;row=row+1)
    {
        for(col=1;col<=5-row;col=col+1)
        {
            cout<<" ";
        }
        for(char name='A';name<='A'+row-1;name=name+1)
        {
            cout<<name;
        }
        cout<<endl;
        
    }
 
    
    //Print Couting starting with 1 with spaces
    /*cout<<"Enter Number\n";
    cin>>n;
    for(row=1;row<=n;row=row+1)
    {
        for(col=1;col<=n-row;col=col+1)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col=col+1)
        {
            cout<<col;
        }
        cout<<endl;
    }*\



    //Print Counting numbers with spaces
    /*cout<<"Enter Number\n";
    cin>>n;
    for(row=1;row<=n;row=row+1)
    {
        for(col=1;col<=n-row;col=col+1)
        {
            cout<<" ";

        }
        for(col=1;col<=row;col=col+1)
        {
            cout<<row;
        }
        cout<<endl;
    }*\

    //Print Star with spaces 
    /*cout<<"Enter Number\n";
    cin>>n;
    for(row=1;row<=n;row=row+1)
    {
        for(col=1;col<=n-row;col=col+1)
        {
        cout<<" ";
        }
        for(col=1;col<=row;col=col+1)
        {
            cout<<"*";
        }
        cout<<endl;
    }*\




    //Print Reverse Order
    /*for(row=1;row<=5;row++)
    {
        for(col=row;col>=1;col=col-1)
        {
            cout<<col;
        }
        cout<<endl;
    }*/


    //Print star 1,22,333,4444,55555 Pattern    
    /*for(row=1;row<=5;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<row;
        }
        cout<<endl; 
    }*/


    //Print Ascending order star 
    /*for(row=1;row<=5;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<col;
        }
        cout<<endl;
    }*/


    //Print Star Triangle
    /*for(row=1;row<=5;row=row+1)
    {

        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }*/
    
    //Print Counting Pattern
    /*for(row=1;row<=5;row=row+1)
    {
        for ( col = 1; col<=5; col++)
        {
            cout<<count;
            count=count+1;
        }
        cout<<endl;
    }*/

    //For Printing abcde pattern
    /*for(row=1;row<=5;row=row+1)
        for(char col='a'; col<='e';col=col+1)
        {
            cout<<col;
        }
        cout<<endl;
    }*/

    
    //Pattern of alphabet
    /*for(row=1;row<=5;row=row+1)
    {
       char name='a'+(row-1);
        for(col=1;col<=5;col=col+1)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }*/



    //for Ascending square pattern
    /*for(row=1;row<=5;row=row+1)
    {
        for(col=1;col<=5;col=col+1)
        {
            cout<<col*col;
        }
        cout<<endl;
    }*/


    //for 12345 pattern         
    /*for(row=1;row<=5;row=row+1)
    {
        for(col=5;col>=5;col=col+1)
        {
            cout<<col;
        }
        cout<<endl;
    }*/


    
    //for 11111 pattern        
    /*for(row=1;row<=5;row=row+1)
    {
        for(col=1;col<=5;col=col+1)
        {
            cout<<row;
        }
        cout<<endl;
    }*/

    
    //For Star Pattern Print
    /*for(row=1;row<=5;row=row+1)
    {
        for(col=1;col<=5;col=col+1)
        {
            cout<<"*";
        }
        cout<<endl;
    }*/



    //for descending order pattern
    /*for(row=1;row<=5;row=row+1)
    {
        for(col=5;col>=1;col=col-1)
        {
            cout<<col;
        }
        cout<<endl;
    }*/



}