#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int cardnum, aces=0, sum;
  char answer;

do
  {
    char c1(0), c2(0), c3(0), c4(0), c5(0);
    cout<<"Enter the number of cards you have" << endl;
    cin>>cardnum;
    if(cardnum<2 || cardnum > 5)
      {
	cout<<"Please enter a valid number (2-5), your previous value was invalid." << endl;
	cin>>cardnum;
      }
    cout << "Enter the values of your cards, separated by a return." << endl;
    switch(cardnum)
      {
      case 5: 
	cin >> c5;
      case 4:
	cin >> c4;
      case 3:
	cin >> c3;
      case 2:
	cin >> c2;
	cin >> c1;
      }
    switch (c1)
      {
      case '2':
	sum+=2;
	break;
      case '3':
	sum+=3;
	break;
      case '4':
	sum+=4;
	break;
      case '5':
	sum+=5;
	break;
      case '6':
	sum+=6;
	break;
      case '7': 
	sum +=7;
	break;
      case '8':
	sum +=8;
	break;
      case '9':
	sum+=9;
	break;
      case 't':
      case 'T':
	sum+=10;
      break;
      case'j':
      case'J':
	sum+=10;
      break;
      case'q':
      case'Q':
	sum+=10;
      break;
      case'k':
      case'K':
	sum+=10;
      break;
      case'a':
      case'A':
	aces+=1;
	sum+=11;
	break;
      }

switch (c2)
      {
      case '2':
	sum+=2;
	break;
      case '3':
	sum+=3;
	break;
      case '4':
	sum+=4;
	break;
      case '5':
	sum+=5;
	break;
      case '6':
	sum+=6;
	break;
      case '7': 
	sum +=7;
	break;
      case '8':
	sum +=8;
	break;
      case '9':
	sum+=9;
	break;
      case 't':
      case 'T':
	sum+=10;
      break;
      case'j':
      case'J':
	sum+=10;
      break;
      case'q':
      case'Q':
	sum+=10;
      break;
      case'k':
      case'K':
	sum+=10;
      break;
      case'a':
      case'A':
	aces+=1;
	sum+=11;
	break;
      }
switch (c3)
      {
      case '2':
	sum+=2;
	break;
      case '3':
	sum+=3;
	break;
      case '4':
	sum+=4;
	break;
      case '5':
	sum+=5;
	break;
      case '6':
	sum+=6;
	break;
      case '7': 
	sum +=7;
	break;
      case '8':
	sum +=8;
	break;
      case '9':
	sum+=9;
	break;
      case 't':
      case 'T':
	sum+=10;
      break;
      case'j':
      case'J':
	sum+=10;
      break;
      case'q':
      case'Q':
	sum+=10;
      break;
      case'k':
      case'K':
	sum+=10;
      break;
      case'a':
      case'A':
	aces+=1;
	sum+=11;
	break;
      }
switch (c4)
      {
      case '2':
	sum+=2;
	break;
      case '3':
	sum+=3;
	break;
      case '4':
	sum+=4;
	break;
      case '5':
	sum+=5;
	break;
      case '6':
	sum+=6;
	break;
      case '7': 
	sum +=7;
	break;
      case '8':
	sum +=8;
	break;
      case '9':
	sum+=9;
	break;
      case 't':
      case 'T':
	sum+=10;
      break;
      case'j':
      case'J':
	sum+=10;
      break;
      case'q':
      case'Q':
	sum+=10;
      break;
      case'k':
      case'K':
	sum+=10;
      break;
      case'a':
      case'A':
	aces+=1;
	sum+=11;
	break;
      }
switch (c5)
      {
      case '2':
	sum+=2;
	break;
      case '3':
	sum+=3;
	break;
      case '4':
	sum+=4;
	break;
      case '5':
	sum+=5;
	break;
      case '6':
	sum+=6;
	break;
      case '7': 
	sum +=7;
	break;
      case '8':
	sum +=8;
	break;
      case '9':
	sum+=9;
	break;
      case 't':
      case 'T':
	sum+=10;
      break;
      case'j':
      case'J':
	sum+=10;
      break;
      case'q':
      case'Q':
	sum+=10;
      break;
      case'k':
      case'K':
	sum+=10;
      break;
      case'a':
      case'A':
	aces+=1;
	sum+=11;
	break;
      }

 while(aces > 0 && sum > 21)
   {sum-=10;
     aces-=1;}
   

 if(sum>21)
   {cout << "BUSTED" << " Your score is " << sum <<  endl;}
    else
      {cout << "Your score is " << sum << endl;}


    cout<<"Do the calculation again? (y or n)"<<endl;
    cin>>answer;
  
  }  while (answer=='y' || answer=='Y');


   return 0;
}
