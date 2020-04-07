/* details.cpp
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

#include "details.h"

details::details()
{
  textbook = 0;
  computer = 0;
  documentCamera = 0;
  drawingPad = 0;
  microphone = 0;
  camera = 0;
  powerpointSlides = 0;
  lectureNotes = 0;
}

details::~details(){}

int details::add(int txt, int pc, int doccam, int draw, int mic, int cam, int pp, int notes)
{
  textbook = txt;
  computer = pc;
  documentCamera = doccam;
  drawingPad = draw;
  microphone = mic;
  camera = cam;
  powerpointSlides = pp;
  lectureNotes = notes;

  return 1;
}

int details::add(const details & new_detail)
{
  return add(new_detail.textbook, new_detail.computer, new_detail.documentCamera, new_detail.drawingPad, new_detail.microphone, new_detail.camera, new_detail.powerpointSlides, new_detail.lectureNotes);
}

/* using std:: instead of calling polluting the stack
 * with 'using namespace std' */
int details::display()
{
  std::cout << "Textbook: " << '\t' << textbook << std::endl;
  std::cout << "Computer: " << '\t' <<computer << std::endl;
  std::cout << "Doc. Camera: " << '\t' << documentCamera << std::endl;
  std::cout << "Drawing Pad: " << '\t' << drawingPad << std::endl;
  std::cout << "Microphone: " << '\t' << microphone << std::endl;
  std::cout << "Camera: " << '\t' << camera << std::endl;
  std::cout << "P.P. Slides: " << '\t' << powerpointSlides << std::endl;
  std::cout << "Lecture Notes: " << '\t' << lectureNotes << std::endl;
  return 1;
}
