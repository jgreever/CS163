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
  head = NULL;
}

schedule::~schedule()
{
  node *tmp = NULL;
  while(head)
  {
    tmp = head->next;
    delete head;
    head = tmp;
  }
  head = NULL;
}

int schedule::add(const node & new_node)
{
  node *tmp = new node;
  tmp->video_name = new char[strlen(new_node.video_name) + 1];
  strcpy(tmp->video_name, new_node.video_name);
  tmp->teacher = new char[strlen(new_node.teacher) + 1];
  strcpy(tmp->teacher, new_node.teacher);
  tmp->topic = new char[strlen(new_node.topic) + 1];
  strcpy(tmp->topic, new_node.topic);
  tmp->video_length = new char[strlen(new_node.video_length) + 1];
  strcpy(tmp->video_length, new_node.video_length);
  tmp->needed = new_node.needed;
  tmp->next = NULL;
 
  if(NULL == head)
  {
    head = tmp;
  }
  else
  {
    node *temp = head;
    while(temp->next != NULL)
      temp = temp->next;
    temp->next = tmp;
  }
  return 1;
}

void schedule::display()
{
  if(!head) return;

  node *current = head;
  while(current)
  {
    cout << endl;
    cout << "**************************************************" <<endl;
    cout << "Video Information: " << endl;
    cout << "Video Name: " << current->video_name << endl;
    cout << "Teacher Name: " << current->teacher << endl;
    cout << "Topic: " << current->topic << endl;
    cout << "Video Length: " << current->video_length << endl;
    cout << endl;
    cout << "Required Items: " << endl;
    cout << "Textbook: " << current->needed.textbook << endl;
    cout << "Computer: " << current->needed.computer << endl;
    cout << "Document Camera: " << current->needed.document_camera << endl;
    cout << "Drawing Pad: " << current->needed.drawing_pad << endl;
    cout << "Microphone: " << current->needed.microphone << endl;
    cout << "Camera: " << current->needed.camera << endl;
    cout << "PowerPoint Slides: " << current->needed.power_point_slides << endl;
    cout << "Lecture Nodes: " << current->needed.lecture_notes << endl;
    cout << "**************************************************" << endl;
    cout << endl;
    current = current->next;
  }
}
