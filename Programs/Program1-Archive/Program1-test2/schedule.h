#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;

/* 
 * Justin Greever
 * 4/8/2020
 * CS163
 * Program #1
 *
 * TODO: Fill out upper part
 */

class video;
class video_detail;

struct node
{
  video * a_video;
  video_detail * a_detail;
  node * next;
};

class schedule
{
  public:
    schedule();
    ~schedule();
    int add(const node & new_node);
    int search();
    int remove();
    int display();
  private:
    node * head;
    node * tail;
};

int add();
int display();
int remove();
int search();
