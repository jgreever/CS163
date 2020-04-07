/* schedule.cpp
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

#include "schedule.h"

schedule::schedule()
{
  head = NULL;
  tail = NULL;
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

int schedule::add(const video & new_video, const details & new_detail)
{
  node * temp = new node;
  if(!temp) return 0;
  temp->a_video.add(new_video);
  temp->a_detail.add(new_detail);
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

int schedule::add(const video & new_video)
{
  video vids; 
  return vids.add(new_video);
}

int schedule::add(const details & new_detail)
{
  details deets;
  return deets.add(new_detail);
}

int schedule::display()
{
  if(!head) return 0;
  node * current = head;
  while(current)
  {
    current->a_video.display();
    current->a_detail.display();
    current = current->next;
  }
  return 1;
}
