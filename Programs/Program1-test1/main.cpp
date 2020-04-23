#include "schedule.h"

/* 
 * Justin Greever
 * 4/8/2020
 * CS163
 * Program #1
 *
 * TODO: Fill out the upper part
 */

//Want an amazing compilation secret that's only known
//by few people in the c++ industry?
//
//Prepend all lines in your code with // and compilation
//time drops to nearly 0! xD
//
//If I don't express humor, this code will kill me in my
//sleep!

int main()
{
  int size = 51;
  char date_to_watch[size];
  char video_name[size];
  char teacher[size];
  char topic[size];
  int video_length;
  int menu_entry = 0;
  int invalid_entry = 0;
  node * new_node = NULL;

  //This is the main menu
  cout << "*******************************************" << endl;
  cout << "Enter '1' for New Entry" << endl;
  cout << "Enter '2' to Search for Entry" << endl;
  cout << "Enter '3' to Delete an Entry" << endl;
  cout << "Enter '4' to Edit an Entry" << endl;
  cout << "*******************************************" << endl;
  cin >> menu_entry;
  cin.ignore(100, '\n');

  //while/if/else loop for the main menu
  while(invalid_entry == 0)
  {
    if(menu_entry == '1')
    {
      cout << "New Entry Test Entry" << endl;
      //TODO: new/add function
      invalid_entry = 1;
      return 0;
    }
    else if(menu_entry == '2')
    {
      cout << "Search Entry Test Entry" << endl;
      //TODO: search function
      invalid_entry = 1;
      return 0;
    }
    else if(menu_entry == '3')
    {
      cout << "Delete Entry Test Entry" << endl;
      //TODO: delete function
      invalid_entry = 1;
      return 0;
    }
    else if(menu_entry == '4')
    {
      cout << "Edit Entry Test Entry" << endl;
      //TODO: edit function
      invalid_entry = 1;
      return 0;
    }
    else
    {
      cout << "I'm sorry, but your response was not understood." << endl;
      cout << "Please try again." << endl;
      invalid_entry = 1;
    }
  }

  cout << "Please enter the date to watch the video as follows (MMDDYY, 012720 = Jan 27th 2020): ";
  cin.get(date_to_watch, 7, '\n');
  cin.ignore(100, '\n');
  
  cout << "Please enter the video name: ";
  cin.get(video_name, 51, '\n');
  cin.ignore(100, '\n');
  
  cout << "Please enter the Teachers name: ";
  cin.get(teacher, 31, '\n');
  cin.ignore(100, '\n');
  
  cout << "Please enter the topic: ";
  cin.get(topic, 51, '\n');
  cin.ignore(100, '\n');
  
  cout << "Please enter the video length as follows (HHMM, 0130 = 1 hour 30 minutess): ";
  cin >> video_length;
  
  std::strcpy(new_node->a_video.date_to_watch, date_to_watch);

  schedule new_schedule;
  new_schedule.add(*new_node);
  new_schedule.display();

  return 0;
}

