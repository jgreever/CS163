#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

/* 
 * Justin Greever
 * 4/8/2020
 * CS163
 * Program #1
 *
 * TODO: Fill out the upper part
 */

class video
{
  public:
    video();
    ~video();
    int add(int date_to_watch, char video_name[], char teacher[], char topic[], int video_length);
    int add(const video & new_video);
    //int add_subnode(const subnode & new_subnode);
    int display();
    int remove();
    int search();

  private:
    int date_to_watch;
    char * video_name;
    char * teacher;
    char * topic;
    int video_length;
};

int add();
//int add_subnode();
int display();
int remove();
int search();

