#ifndef MAINWIN_HPP
#define MAINWIN_HPP

#include <QMainWindow>

#include <memory>

class MainWin : public QMainWindow
{
  Q_OBJECT
private:
  std::unique_ptr<QWidget> label;

public:
  MainWin (QWidget* parent = 0);
};

#endif
