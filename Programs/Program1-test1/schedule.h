#include "video.h"

/* 
 * Justin Greever
 * 4/8/2020
 * CS163
 * Program #1
 *
 * TODO: Fill out the upper part
 */

struct video
{
  char * date_to_watch;
  char * video_name;
  char * teacher;
  char * topic;
  int video_length;
};

struct subnode
{
  int textbook;
  int computer;
  int document_camera;
  int drawing_pad;
  int microphone;
  int camera;
  int power_point_slides;
  int lecture_notes;
};

struct node
{
  video a_video;
  subnode a_subnode;
  node * next;
};

class schedule
{
  public:
    schedule();
    ~schedule();
    int add(const node & new_node);
    int display();
  private:
    node * head;
    node * tail;
};

int add();
int display();

