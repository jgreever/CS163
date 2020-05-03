#include "schedule.h"

/*
 * Justin Greever
 * 4/8/2020
 * CS163
 * Program #1
 *
 * TODO: Fill out upper part
 */

class video_detail
{
  public:
    video_detail();
    ~video_detail();
    int add();
    int display();
    int search();
    int remove();

  private:
    int textbook;
    int computer;
    int document_camera;
    int drawing_pad;
    int microphone;
    int camera;
    int power_point_slides;
    int lecture_notes;
};

int add();
int display();
int search();
int remove();

