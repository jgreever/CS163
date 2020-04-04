/* main.cpp
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

/* main() will be for testing my program functions */
int main()
{
  video my_video;

  /* let's create a temp node to hold info and pass to function */
  node * tempNode = new node;
  /* let's create a head node to start the list */
  if(my_video.initializeList() == true) cout << "List initialized." << endl;
  else cout << "List exists, skipping." << endl;
  
  /* Get input from user about video */
  //char newName[51];
  cout << "Enter video name: ";
  cin.get(tempNode->toWatch.name, 51);
  cin.ignore(100, '\n');
  
  /* TODO: testing to see if node stored data */
  cout << "You entered: " << tempNode->toWatch.name << endl;

  /* pass video name to function */
  //my_video.add(tempNode);
  
  /* deallocate tempNode */
  delete tempNode;
  tempNode = NULL;

  /* deallocate all nodes and free memory */
  my_video.~video();
  cout << "Memory deallocated (freed)" << endl;

  return 0;
}
