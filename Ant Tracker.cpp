#include<iostream>
#include <fstream>
using namespace std;
#include<string>
#include <ctime>

const int nrows=20, ncols=20;
void display(char array[][20]);
int main()
{
  srand(time(NULL));
  char garden[nrows][ncols];

int steps =0;

    for (int i = 0; i<nrows; i++)  //create the array of garden
    {
      for(int j=0; j<ncols; j++)
	{
	  garden[i][j] = '.';
	}
    }

    garden[3][10] = 'F';
    garden[17][10] = 'A';

    display(garden);
    cout << endl;

    int ant_x=10, ant_y=17;          //initial ant location
    while(!(ant_x == 10 && ant_y==3))  //continue loop until ant gets to food
      {
	int direction;
	direction= rand()%4;
	switch (direction)
	  {
	  case 0: //north
	    ant_y--;
	    break;
	  case 1: //east
	    ant_x++;
	    break;
	  case 2: //south
	    ant_y++;
	    break;
	  case 3: //west
	    ant_x--;
	    break;
	  }
	if (ant_x > 19) //put ant in garden if fall off
	  ant_x = 19;
	if (ant_x < 0)
	  ant_x = 0;
	if (ant_y > 19)
	  ant_y = 19;
	if (ant_y < 0)
	  ant_y = 0;

	steps ++; // count ant's steps

	garden[ant_y][ant_x]='a';
	garden[3][10] = 'F';
	garden[17][10] = 'A';
     
        system("clear");
	display(garden);
      }


 cout << endl<< endl <<"Om nom nom. It took " <<steps << " steps to get here (FOOD FOUND)." << endl;

    return 0;
}

void display(char array[][20])
{

  for(int i=0; i<20; i++)
    {
      for(int j =0; j<20; j++)
	{
	  cout<< array[i][j];}
      cout<<endl;
    }

   cout<<endl;   cout<<endl;
}
