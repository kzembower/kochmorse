#ifndef __KOCHMORSE_MAINWINDOW_HH__
#define __KOCHMORSE_MAINWINDOW_HH__

#include <QMainWindow>
#include <QTextEdit>
#include <QAction>
#include <QSlider>

#include "application.hh"


class MainWindow : public QMainWindow
{
  Q_OBJECT
public:
  explicit MainWindow(Application &app, QWidget *parent = 0);

protected slots:
  void onSessionFinished();
  void onCharSend(QChar ch);

  void onPlayToggled(bool play);
  void onPrefClicked();

protected:
  Application &_app;
  QTextEdit *_text;
  QAction *_play;
  QAction *_pref;
  QAction *_info;
  QSlider *_volume;
};

#endif // __KOCHMORSE_MAINWINDOW_HH__
