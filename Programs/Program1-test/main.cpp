#include "schedule.h"

/* 
 * Justin Greever
 * 4/8/2020
 * CS163
 * Program #1
 *
 * TODO: Fill out the upper part
 */

int main()
{
  int date_to_watch;
  char video_name[51];
  char teacher[31];
  char topic[51];
  int video_length;
  video new_video;
  subnode new_subnode;
  //TODO: Remove, only for testing
  new_subnode.textbook = 0;
  new_subnode.computer = 0;
  new_subnode.document_camera = 0;
  new_subnode.drawing_pad = 0;
  new_subnode.microphone = 0;
  new_subnode.camera = 0;
  new_subnode.power_point_slides = 0;
  new_subnode.lecture_notes = 0;

  cout << "Please enter the date to watch the video as follows (MMDDYY, 012720 = Jan 27th 2020): ";
  cin >> date_to_watch;
  cin.ignore(100, '\n');
  cout << "Please enter the video name: ";
  cin.get(video_name, 51, '\n');
  cin.ignore(100, '\n');
  cout << "Please enter the Teachers name: ";
  cin.get(teacher, 31, '\n');
  cin.ignore(100, '\n');
  cout << "Please enter the topic: ";
  cin.get(topic, 51, '\n');
  cin.ignore(100, '\n');
  cout << "Please enter the video length as follows (HHMM, 0130 = 1 hour 30 minutess): ";
  cin >> video_length;

  new_video.add(date_to_watch, video_name, teacher, topic, video_length);
  new_video.display();

  schedule new_schedule;
  new_schedule.add(new_video, new_subnode);
  new_schedule.add(new_video, new_subnode);
  new_schedule.display();

  return 0;
}

