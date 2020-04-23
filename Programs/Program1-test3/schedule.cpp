#include "schedule.h"

/*
 * Justin Greever
 * CS163
 * 4/8/2020
 * Program #1
 *
 * This program keeps track of required videos that the user
 * is supposed to watch. You can add/delete/search/edit/display
 * via this program. There is one LLL for the video informationtion
 * and a second LLL within the first one for the required items.
 */

schedule::schedule()
{
  head = tail = NULL;
}

schedule::~schedule()
{
  node * temp = NULL;
  while(head)
  {
    temp = head->next;
    delete head;
    head = temp;
  }
  tail = NULL;
}

int schedule::add(const node & new_node)
{
  node * temp = new node(new_node);

  if(!temp) return 0;
  temp->next = NULL;

  if(!head)
  {
    head = tail = temp;
  }
  else
  {
    tail->next = temp;
    tail = tail->next;
  }
  return 1;
}

int schedule::display()
{
  if(!head) return 0;

  node * current = head;
  while(current)
  {
    cout << endl;
    cout << endl;
    cout << current->video_name << endl;
    cout << current->teacher << endl;
    cout << current->topic << endl;
    cout << current->video_length << endl;
    cout << current->needed.textbook << endl;
    cout << current->needed.computer << endl;
    cout << current->needed.document_camera << endl;
    cout << current->needed.drawing_pad << endl;
    cout << current->needed.microphone << endl;
    cout << current->needed.camera << endl;
    cout << current->needed.power_point_slides << endl;
    cout << current->needed.lecture_notes << endl;
    cout << endl;
    cout << endl;
  }
  return 1;
}
