#ifndef EVENT_H
#define EVENT_H

class Event {
 private:
  const int originDay, originMonth, originYear;
  int day, month, year;
  string name, desc;
 public:
  void print();
  void printDates();
  int changeDates();
  Event();
};

#endif
