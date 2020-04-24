#include "video.h"

/*
 * Justin Greever
 * 4/8/2020
 * CS163
 * Program #1
 *
 * TODO: Fill out the upper part
 */

/*
video::video()
{
  date_to_watch = 0;
  video_name = NULL;
  teacher = NULL;
  topic = NULL;
  video_length = 0;
}

video::~video()
{
  if(date_to_watch) delete [] date_to_watch;
  if(video_name) delete [] video_name;
  if(teacher) delete [] teacher;
  if(topic) delete [] topic;
  video_name = teacher = topic = NULL;
}

int video::add(char date_to_watch_to_add[], char video_name_to_add[], char teacher_to_add[], char topic_to_add[], int video_length_to_add)
{
  if(!video_name_to_add || !teacher_to_add) return 0;

  date_to_watch = new char[strlen(date_to_watch_to_add) +1];
  strcpy(date_to_watch, date_to_watch_to_add);
  video_name = new char[strlen(video_name_to_add) + 1];
  strcpy(video_name, video_name_to_add);
  teacher = new char[strlen(teacher_to_add) + 1];
  strcpy(teacher, teacher_to_add);
  topic = new char[strlen(topic_to_add) + 1];
  strcpy(topic, topic_to_add);
  video_length = video_length_to_add;
  return 1;
}

int video::add(const video & new_video)
{
  return add(new_video.date_to_watch, new_video.video_name, new_video.teacher, new_video.topic, new_video.video_length);
}


int video::add_subnode(const subnode & new_subnode)
{
  
}


int video::display()
{
  cout << "Date to watch: " << date_to_watch << endl;
  cout << "Video name: " << video_name << endl;
  cout << "Teacher: " << teacher << endl;
  cout << "Topic: " << topic << endl;
  cout << "Video length: " << video_length << endl;
  return 1;
}

int video::remove()
{
  return 1;
}

int video::search()
{
  return 1;
}
 */
