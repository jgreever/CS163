#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;

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
const int SIZE = 51; //TODO: for testing

struct items //nested node within struct node()
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

struct node //our beautiful node!
{
  char *video_name;
  char *teacher;
  char *topic;
  char *video_length;
  items needed; //ptr to the items subnode
  node * next; //ptr to next
};

class schedule
{
  public:
    schedule();
    ~schedule();
    int add(const node & new_node);
    int display();
    int remove();
    int search();

  private:
    node *head, *tail;
};

int add();
int display();
int remove();
int search();

