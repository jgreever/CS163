#include "video.h"

/* 
 * Justin Greever
 * 4/8/2020
 * CS163
 * Program #1
 *
 * TODO: Fill out the upper part
 */

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
    int add(const video & new_video, const subnode & new_subnode);
    int display();
  private:
    node * head;
    node * tail;
};

int add();
int display();

