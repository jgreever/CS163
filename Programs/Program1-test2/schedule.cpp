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

int schedule::add(const node & new_node)
{
  node * temp = new node;
  
  if(!temp) return 0;
  temp->next = NULL;
  
  int len = strlen(new_node->a_video.video_name) + 1;
  char * temp_name[len];
  strcpy(temp_name, new_node->a_video.video_name);
  strcpy(temp->a_video.video_name, temp_name);

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
    cout << "Textbook Required? " << current->a_detail.textbook << endl;
    cout << "Computer Required? " << current->a_detail.computer << endl;
    cout << "Document Camera Required? " << current->a_detail.document_camera << endl;
    cout << "Drawing Pad Required? " << current->a_detail.drawing_pad << endl;
    cout << "Microphone Required? " << current->a_detail.microphone << endl;
    cout << "Camera Required? " << current->a_detail.camera << endl;
    cout << "PowerPoint Slides Required? " << current->a_detail.power_point_slides << endl;
    cout << "Lecture Notes Required? " << current->a_detail.lecture_notes << endl;
    current = current->next;
  }
  return 1;
}
