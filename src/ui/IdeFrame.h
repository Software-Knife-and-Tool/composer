/*******
 **
 ** Copyright (c) 2017, James M. Putnam
 ** All rights reserved.
 **
 ** Redistribution and use in source and binary forms, with or without
 ** modification, are permitted provided that the following conditions are met:
 **
 ** 1. Redistributions of source code must retain the above copyright notice,
 **    this list of conditions and the following disclaimer.
 **
 ** 2. Redistributions in binary form must reproduce the above copyright
 **    notice, this list of conditions and the following disclaimer in the
 **    documentation and/or other materials provided with the distribution.
 **
 ** 3. Neither the name of the copyright holder nor the names of its
 **    contributors may be used to endorse or promote products derived from
 **    this software without specific prior written permission.
 **
 ** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 ** AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 ** IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 ** ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 ** LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 ** CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 ** SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 ** INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 ** CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 ** ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 ** POSSIBILITY OF SUCH DAMAGE.
 **
 *******/

/********
 **
 **  IdeFrame.h: IdeFrame class
 **
 **/
#ifndef _LOGICAIDE_SRC_UI_IDEFRAME_H_
#define _LOGICAIDE_SRC_UI_IDEFRAME_H_

#include <QFrame>
#include <QWidget>

#include "MainTabBar.h"
#include "MainWindow.h"
#include "TtyWidget.h"
#include "canon.h"
#include "user.h"

QT_BEGIN_NAMESPACE
class QLabel;
class QVBoxLayout;
class QWidget;
QT_END_NAMESPACE

namespace logicaide {

class MainTabBar;
  
class IdeFrame : public QFrame {

 Q_OBJECT

 public:
  explicit IdeFrame(QString, MainTabBar*);

  void log(QString msg) {
    // ttyWidget->writeTty(msg);
  }
  
  void setContextStatus(QString);

  void showEvent(QShowEvent*) override;

 protected:

 private:
  MainTabBar* tabBar;
  QString name;
  ConsoleFrame* console;
  QLabel* bannerLabel;
  QVBoxLayout* layout;
};

} /* logicaide namespace */

#endif  /* _LOGICAIDE_SRC_UI_IDEFRAME_H_ */
