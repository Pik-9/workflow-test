#include <QApplication>

#include "mainwin.hpp"

int main (int argc, char *argv[])
{
  QApplication app (argc, argv);
  MainWin mw;
  mw.show ();
  return app.exec ();
}
