/********
 **
 **  SPDX-License-Identifier: BSD-3-Clause
 **
 **  Copyright (c) 2017-2021 James M. Putnam <putnamjm.design@gmail.com>
 **
 **/

/********
 **
 **  user.h: user class
 **
 **/
#ifndef GYREUI_USER_H_
#define GYREUI_USER_H_

#include <QDir>
#include <QString>
#include <QSysInfo>
#include <QtGui>
#include <QtWidgets>

#include "libmu/libmu.h"

namespace gyreui {

class User {
 public:
  QString logname() { return userName; }
  QString aboutHost() { return hostName; }
  QString aboutCpu() { return cpuArch; }
  QString aboutSystem() { return systemInfo; }
  QString userdir() { return userDir; }

  User() {
    userName = QString(std::getenv("LOGNAME"));
    cpuArch = QSysInfo::buildCpuArchitecture();
    systemInfo = QSysInfo::prettyProductName();
    hostName = QSysInfo::machineHostName();
    userDir = QDir::homePath();
  }

 private:
  QString userDir;
  QString hostName;
  QString cpuArch;
  QString systemInfo;
  QString userName;
};

}  // namespace gyreui

#endif /* GYREUI_USER_H_ */
