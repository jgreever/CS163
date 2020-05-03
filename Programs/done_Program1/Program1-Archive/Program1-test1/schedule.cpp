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
  std::memcpy(temp, &new_node, sizeof(new_node));
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
    cout << "Date to Watch: " << current->a_video.date_to_watch << endl;
    cout << "Video Name: " << current->a_video.video_name << endl;
    cout << "Teacher: " << current->a_video.teacher << endl;
    cout << "Topic: " << current->a_video.topic << endl;
    cout << "Video Length: " << current->a_video.video_length << endl;
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
