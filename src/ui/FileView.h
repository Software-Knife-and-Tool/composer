/********
 **
 **  SPDX-License-Identifier: BSD-3-Clause
 **
 **  Copyright (c) 2017-2021 James M. Putnam <putnamjm.design@gmail.com>
 **
 **/

/********
 **
 **  FileView.h: FileView class
 **
 **/
#ifndef GYREUI_UI_FILEVIEW_H_
#define GYREUI_UI_FILEVIEW_H_

#include <QMainWindow>
#include <QMenu>

#include "MainWindow.h"

QT_BEGIN_NAMESPACE
class QAction;
class QActionGroup;
class QLabel;
class QMenu;
class QScrollArea;
class QTextEdit;
QT_END_NAMESPACE

namespace gyreui {

class MainWindow;

class FileView : public QMenu {
  Q_OBJECT

 public:
  void newFile();
  void openFile();
  void saveFile();
  void printFile();

  explicit FileView(QString, MainWindow*);

 private:
  QTextEdit* fileText;
  QScrollArea* scrollArea;
  MainWindow* mw;
};

} /* namespace gyreui */

#endif /* GYREUI_UI_FILEVIEW_H_ */
