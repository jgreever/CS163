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

#include "schedule.h"

/* main() will be for testing my program functions */
int main()
{
  char videoName[21];
  char teacher[21];
  char subject[21];
  char videoLength[21];
  video object;

  /* menu loop */
  int response = 1;
  while(response == 1)
  {
    /* using std:: instead of 'using namespace std' and polluting the stack */
    std::cout << "Please enter the name of the video to add: ";
    std::cin.get(videoName, 21, '\n');
    std::cin.ignore(100, '\n');
    std::cout << "Please enter the teacher(s) name(s): ";
    std::cin.get(teacher, 21, '\n');
    std::cin.ignore(100, '\n');
    std::cout << "Please enter the subject: ";
    std::cin.get(subject, 21, '\n');
    std::cin.ignore(100, '\n');
    std::cout << "Please enter the video length: ";
    std::cin.get(videoLength, 21, '\n');
    std::cin.ignore(100, '\n');
    object.add(videoName, teacher, subject, videoLength);

    int textbook = 0;
    int computer = 0;
    int documentCamera = 0;
    int drawingPad = 0;
    int microphone = 0;
    int camera = 0;
    int powerpointSlides = 0;
    int lectureNotes = 0;
    details newdetail;

    std::cout << "Please type '1' for yes, '0' for no." << std::endl;
    std::cout << "Textbook? ";
    std::cin >> textbook;
    std::cin.ignore(100, '\n');
    std::cout << "Computer? ";
    std::cin >> computer;
    std::cin.ignore(100, '\n');
    std::cout << "Document Camera? ";
    std::cin >> documentCamera;
    std::cin.ignore(100, '\n');
    std::cout << "Drawing Pad? ";
    std::cin >> drawingPad;
    std::cin.ignore(100, '\n');
    std::cout << "Microphone? ";
    std::cin >> microphone;
    std::cin.ignore(100, '\n');
    std::cout << "Camera? ";
    std::cin >> camera;
    std::cin.ignore(100, '\n');
    std::cout << "Power Point Slides? ";
    std::cin >> powerpointSlides;
    std::cin.ignore(100, '\n');
    std::cout << "Lecture Nodes? ";
    std::cin >> lectureNotes;
    std::cin.ignore(100, '\n');
    newdetail.add(textbook, computer, documentCamera, drawingPad, microphone, camera, powerpointSlides, lectureNotes);

    schedule newtime;
    newtime.add(object, newdetail);

    std::cout << "Enter another?" << std::endl;
    std::cout << "Enter '1' for Yes, and '0' for No: ";
    std::cin >> response;
    std::cin.ignore(100, '\n');
  }

  schedule sch;
  sch.display();

  return 0;
}

