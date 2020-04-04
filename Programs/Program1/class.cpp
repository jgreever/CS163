/* class.cpp
 * Program 1 - Data Structures
 *
 * Justin Greever
 * CS163
 * 3/30/2020
 *
 * Classes, member functions, arguments, data structures, pointers, and efficient code
 *
 * Making a schedule of videos to watch and when to attend live streaming lectures.
 * Store using a linear linked list of videos/streams to watch. For each video keep track of:
 *   a. Name of the video
 *   b. The teacher
 *   c. Topic/Subject
 *   d. The length
 *
 * Store using a linear linked list. For each video store the following:
 *   a. Textbook
 *   b. Computer
 *   c. Document camera
 *   d. Drawing pad
 *   e. Microphone
 *   f. Camera
 *   g. Power Point slides
 *   h. Lecture notes
 *   i. Etc.
 *
 * Requirements:
 *   1. Construct an object (constructor)
 *   2. Add a new video or live session
 *   3. Remove a video or live session
 *   4. Add a required item to a video (e.g., add a textbook to video on topic #3)
 *   5. Remove an item for a particular video (e.g., remove the textbook for the video on topic #3)
 *   6. Display all items needed for a video
 *   7. Display all videos that need to be watched
 *   8. Release all dynamic memory (destructor)
 *  
 */

#include "class.h"

/* constructor */
video::video()
{
  head = NULL;
  tail = NULL;
}

/* deconstructor */
video::~video()
{
  node * temp = head;
  while(temp != NULL)
  {
    node * next = temp->next;
    delete temp;
    temp = next;
  }
  temp = NULL;
  head = NULL;
  tail = NULL;
}

bool video::add(node * & tempNode)
{
  if(video::add(head, tail, tempNode) == true)
    return true;
  else
    return false;
}

bool video::add(node * & head, node * & tail, node * & tempNode)
{
  node * temp = new node();
  strcpy(temp->toWatch.name, tempNode->toWatch.name);
  temp->next = NULL;
  if(!head)
  {
    head = temp;
    tail = temp;
  }
  else
  {
    tail->next = temp;
    tail = tail->next;
  }
  return true;
}

void video::display()
{
  video::display(head);
}

void video::display(node * & head)
{
  node * temp = head;
  if(temp != NULL)
  {
    cout << "Video Name: " << temp->toWatch.name << endl;
    video::display(temp->next);
  }
}
