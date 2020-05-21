#include "mainwin.hpp"

#include <QLabel>

MainWin::MainWin (QWidget *parent)
  : QMainWindow (parent),
    label (std::make_unique<QLabel> ("Hello world"))
{
  setWindowTitle ("Hello world");
  setFixedSize (500, 200);
  setCentralWidget (label.get ());
}
