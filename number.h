#ifndef NUMBER_H
#define NUMBER_H


class number
{
public:
    double max;
    double min;
    double ground[100];
    int numberofground;
    double pingjunshu;
    void howtomaxandmin();
    void getnumberground();
    struct suzi
    {
      double bestnumber;
      int wherebestnumber;
    }min_,max_;
    number()
    {
        min_.wherebestnumber=1;
        max_.wherebestnumber=1;
        pingjunshu=0;
    }

};

#endif // NUMBER_H
