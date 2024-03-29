Users/luser/git/CS163/Programs/Program1/._details.h                                                 000644  000765  000024  00000000260 13644764257 022445  0                                                                                                    ustar 00luser                           staff                           000000  000000                                                                                                                                                                             Mac OS X            	   2   ~      �                                      ATTR       �   �                     �     com.apple.lastuseddate#PS    �^    	�X4                                                                                                                                                                                                                                                                                                                                                    Users/luser/git/CS163/Programs/Program1/PaxHeader/details.h                                         000644  000765  000024  00000000036 13644764257 024202  x                                                                                                    ustar 00luser                           staff                           000000  000000                                                                                                                                                                         30 mtime=1586751663.009584508
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  Users/luser/git/CS163/Programs/Program1/details.h                                                   000644  000765  000024  00000003144 13644764257 022234  0                                                                                                    ustar 00luser                           staff                           000000  000000                                                                                                                                                                         /* details.h 
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

#include "video.h"

class details
{
  public:
    details();
    ~details();
    int add(int textbook, int computer, int documentCamera, int drawingPad, int microphone, int camera, int powerpointSlides, int lectureNotes);
    int add(const details & new_detail);
    int display(); 

  private:
    int textbook;
    int computer;
    int documentCamera;
    int drawingPad;
    int microphone;
    int camera;
    int powerpointSlides;
    int lectureNotes;
};
                                                                                                                                                                                                                                                                                                                                                                                                                            Users/luser/git/CS163/Programs/Program1/main.cpp                                                    000644  000765  000024  00000006671 13650413724 022061  0                                                                                                    ustar 00luser                           staff                           000000  000000                                                                                                                                                                         /* main.cpp
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

                                                                       Users/luser/git/CS163/Programs/Program1/memleak-check.log                                           000644  000765  000024  00000001120 13643007141 023574  0                                                                                                    ustar 00luser                           staff                           000000  000000                                                                                                                                                                         ==756092== Memcheck, a memory error detector
==756092== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==756092== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==756092== Command: ./a.out
==756092== Parent PID: 752069
==756092== 
==756092== 
==756092== HEAP SUMMARY:
==756092==     in use at exit: 0 bytes in 0 blocks
==756092==   total heap usage: 12 allocs, 12 frees, 74,902 bytes allocated
==756092== 
==756092== All heap blocks were freed -- no leaks are possible
==756092== 
==756092== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
                                                                                                                                                                                                                                                                                                                                                                                                                                                Users/luser/git/CS163/Programs/Program1/schedule.cpp                                                000644  000765  000024  00000004116 13650415343 022720  0                                                                                                    ustar 00luser                           staff                           000000  000000                                                                                                                                                                         /* schedule.cpp
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
                                                                                                                                                                                                                                                                                                                                                                                                                                                  Users/luser/git/CS163/Programs/Program1/._schedule.h                                                000644  000765  000024  00000000260 13644764257 022614  0                                                                                                    ustar 00luser                           staff                           000000  000000                                                                                                                                                                             Mac OS X            	   2   ~      �                                      ATTR       �   �                     �     com.apple.lastuseddate#PS    �^    2�V4                                                                                                                                                                                                                                                                                                                                                    Users/luser/git/CS163/Programs/Program1/PaxHeader/schedule.h                                        000644  000765  000024  00000000036 13644764257 024351  x                                                                                                    ustar 00luser                           staff                           000000  000000                                                                                                                                                                         30 mtime=1586751663.010451445
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  Users/luser/git/CS163/Programs/Program1/schedule.h                                                  000644  000765  000024  00000003005 13644764257 022377  0                                                                                                    ustar 00luser                           staff                           000000  000000                                                                                                                                                                         /* schedule.h 
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

struct node
{
  video a_video;
  details a_detail;
  node * next;
};

class schedule
{
  public:
    schedule();
    ~schedule();
    int add(const video & new_video, const details & new_detail);
    int add(const details & new_detail);
    int add(const video & new_video);
    int display();

  private:
    node * head;
    node * tail;
};

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           Users/luser/git/CS163/Programs/Program1/video.cpp                                                   000644  000765  000024  00000004777 13644764257 022265  0                                                                                                    ustar 00luser                           staff                           000000  000000                                                                                                                                                                         /* video.cpp
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

#include "video.h"

video::video()
{
  videoName = NULL;
  teacher = NULL;
  subject = NULL;
  videoLength = NULL;
}

video::~video()
{
  if(videoName)
    delete [] videoName;
  if(teacher)
    delete [] teacher;
  if(subject)
    delete [] subject;
  if(videoLength)
    delete [] videoLength;
  videoName = teacher = subject = videoLength = NULL;
}

int video::add(char videoName_toAdd[], char teacher_toAdd[], char subject_toAdd[], char videoLength_toAdd[])
{
  if(!videoName_toAdd || !teacher_toAdd || !subject_toAdd || !videoLength_toAdd) return 0;

  videoName = new char[strlen(videoName_toAdd) + 1];
  strcpy(videoName, videoName_toAdd);
  teacher = new char[strlen(teacher_toAdd) + 1];
  strcpy(teacher, teacher_toAdd);
  subject = new char[strlen(subject_toAdd) + 1];
  strcpy(subject, subject_toAdd);
  videoLength = new char[strlen(videoLength_toAdd) + 1];
  strcpy(videoLength, videoLength_toAdd);
  return 1;
}

int video::add(const video & new_video)
{
  return add(new_video.videoName, new_video.teacher, new_video.subject, new_video.videoLength);
}

int video::display()
{
  std::cout << "Video Name: " << '\t' << videoName << std::endl; 
  std::cout << "Teacher: " << '\t' << teacher << std::endl;
  std::cout << "Subject: " << '\t' << subject << std::endl;
  std::cout << "Video Length: " << '\t' << videoLength << std::endl;
  std::cout << std::endl;
  return 1;
}
 Users/luser/git/CS163/Programs/Program1/._video.h                                                   000644  000765  000024  00000000260 13644764257 022126  0                                                                                                    ustar 00luser                           staff                           000000  000000                                                                                                                                                                             Mac OS X            	   2   ~      �                                      ATTR       �   �                     �     com.apple.lastuseddate#PS    �^    �Z4                                                                                                                                                                                                                                                                                                                                                    Users/luser/git/CS163/Programs/Program1/PaxHeader/video.h                                           000644  000765  000024  00000000036 13644764257 023663  x                                                                                                    ustar 00luser                           staff                           000000  000000                                                                                                                                                                         30 mtime=1586751663.011396643
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  Users/luser/git/CS163/Programs/Program1/video.h                                                     000644  000765  000024  00000002764 13644764257 021724  0                                                                                                    ustar 00luser                           staff                           000000  000000                                                                                                                                                                         /* video.h 
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

#include <iostream>
#include <cctype>
#include <cstring>

class video
{
  public:
    video();
    ~video();
    int add(char videoName[], char teacher[], char subject[], char videoLength[]);
    int add(const video & new_video);
    int display();  

  private:
    char * videoName;
    char * teacher;
    char * subject;
    char * videoLength;
};
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            