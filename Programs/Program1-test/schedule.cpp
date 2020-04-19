#include "schedule.h"

/* 
 * Justin Greever
 * 4/8/2020
 * CS163
 * Program #1
 *
 * TODO: Fill out the upper part
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

int schedule::add(const video & new_video, const subnode & new_subnode)
{
  node * temp = new node;
  if(!temp) return 0;
  temp->a_video.add(new_video);
  temp->a_subnode = new_subnode;
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
    current->a_video.display();
    cout << "Textbook Required? " << current->a_subnode.textbook << endl;
    cout << "Computer Required? " << current->a_subnode.computer << endl;
    cout << "Document Camera Required? " << current->a_subnode.document_camera << endl;
    cout << "Drawing Pad Required? " << current->a_subnode.drawing_pad << endl;
    cout << "Microphone Required? " << current->a_subnode.microphone << endl;
    cout << "Camera Required? " << current->a_subnode.camera << endl;
    cout << "PowerPoint Slides Required? " << current->a_subnode.power_point_slides << endl;
    cout << "Lecture Notes Required? " << current->a_subnode.lecture_notes << endl;
    current = current->next;
  }
  return 1;
}
