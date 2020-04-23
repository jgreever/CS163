#include "schedule.h"

/* 
 * Justin Greever
 * CS163
 * 4/8/2020
 * Program #1
 *
 * This program keeps track of required videos that the user
 * is supposed to watch. You can add/delete/search/edit/display
 * via this program. There is one LLL for the video information
 * and a second LLL within the first one for the required items.
 */

int main()
{
  //char temp_video_name[SIZE];
  //char temp_teacher[SIZE];
  //char temp_topic[SIZE];
  //char temp_video_length[SIZE];
  
  node * temp = NULL;

  cout << "Enter the video name: ";
  cin.get(temp->video_name, SIZE, '\n');
  cin.ignore(100, '\n');
  cout << "Enter the teacher name: ";
  cin.get(temp->teacher, SIZE, '\n');
  cin.ignore(100, '\n');
  cout << "Enter the topic: ";
  cin.get(temp->topic, SIZE, '\n');
  cin.ignore(100, '\n');
  cin.get(temp->video_length, SIZE, '\n');
  cin.ignore(100, '\n');

  schedule schd;
  schd.add(*temp);
  schd.display();
  
  return 0;
}
