#include "schedule.h"

/* 
 * Justin Greever
 * CS163
 * 4/8/2020
 * Program #1
 *
 * This program keeps track of required videos that the user
 * is supposed to watch. You can add/delete/search/edit/display
 * via this program. There is one LLL for the video information
 * and a second LLL within the first one for the required items.
 */

int main()
{
  char temp_video_name[SIZE];
  char temp_teacher[SIZE];
  char temp_topic[SIZE];
  char temp_video_length[SIZE];
  node temp;
  int choice = 0;

  while(choice == 0)
  {
    cout << "Enter the video name: ";
    cin.get(temp_video_name, SIZE, '\n');
    cin.ignore(100, '\n');
    cout << "Enter the teacher name: ";
    cin.get(temp_teacher, SIZE, '\n');
    cin.ignore(100, '\n');
    cout << "Enter the topic: ";
    cin.get(temp_topic, SIZE, '\n');
    cin.ignore(100, '\n');
    cout << "Enter the video length: ";
    cin.get(temp_video_length, SIZE, '\n');
    cin.ignore(100, '\n');
    temp.video_name = temp_video_name;
    temp.teacher = temp_teacher;
    temp.topic = temp_topic;
    temp.video_length = temp_video_length;
    int response = 0;
    cout << "Do you need to enter required item? '1' for yes, '2' for no: ";
    cin >> response;
    if(response == 1)
    {
      cout << "Please type '1' for yes, and 2 for no for the following questions." << endl;
      cout << "Textbook: ";
      cin >> temp.needed.textbook;
      cout << "Computer: ";
      cin >> temp.needed.computer;
      cout << "Document Camera: ";
      cin >> temp.needed.document_camera;
      cout << "Drawing Pad: ";
      cin >> temp.needed.drawing_pad;
      cout << "Microphone: ";
      cin >> temp.needed.microphone;
      cout << "Camera: ";
      cin >> temp.needed.camera;
      cout << "Power Point Slides: ";
      cin >> temp.needed.power_point_slides;
      cout << "Lecture Nodes: ";
      cin >> temp.needed.lecture_notes;
    }
    else
    {
      temp.needed.textbook = 0;
      temp.needed.computer = 0;
      temp.needed.document_camera = 0;
      temp.needed.drawing_pad = 0;
      temp.needed.microphone = 0;
      temp.needed.camera = 0;
      temp.needed.power_point_slides = 0;
      temp.needed.lecture_notes = 0;
    }
    schedule sc;
    sc.add(temp);
    cout << "Enter another?" << endl;
    cout << "Enter 0 for yes, and 1 for no: ";
    cin >> choice;
    cin.ignore(100, '\n');
  }
  schedule schd;
  schd.display();

  return 0;
}
