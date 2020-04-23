#include "schedule.h"

/*
 * Justin Greever
 * 4/8/2020
 * CS163
 * Program #1
 * TODO: Fill out upper part
 */

class video
{
  public:
    video();
    ~video();
    int add();
    int display();
    int search();
    int remove();

  private:
    int date_to_watch;
    char * video_name;
    char * teacher;
    char * topic;
    int video_length;
};

int add();
int search();
int remove();
