/*****************************************************************************
 * Copyright (c) 2011-2014 The FIMTrack Team as listed in CREDITS.txt        *
 * http://fim.uni-muenster.de                                             	 *
 *                                                                           *
 * This file is part of FIMTrack.                                            *
 * FIMTrack is available under multiple licenses.                            *
 * The different licenses are subject to terms and condition as provided     *
 * in the files specifying the license. See "LICENSE.txt" for details        *
 *                                                                           *
 *****************************************************************************
 *                                                                           *
 * FIMTrack is free software: you can redistribute it and/or modify          *
 * it under the terms of the GNU General Public License as published by      *
 * the Free Software Foundation, either version 3 of the License, or         *
 * (at your option) any later version. See "LICENSE-gpl.txt" for details.    *
 *                                                                           *
 * FIMTrack is distributed in the hope that it will be useful,               *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of            *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the              *
 * GNU General Public License for more details.                              *
 *                                                                           *
 *****************************************************************************
 *                                                                           *
 * For non-commercial academic use see the license specified in the file     *
 * "LICENSE-academic.txt".                                                   *
 *                                                                           *
 *****************************************************************************
 *                                                                           *
 * If you are interested in other licensing models, including a commercial-  *
 * license, please contact the author at fim@uni-muenster.de      			 *
 *                                                                           *
 *****************************************************************************/

#include "GUI/MainGUI.hpp"
#include <QApplication>

//bool QApplication::notify(QObject* receiver, QEvent* event)
//{
//    try 
//    {
//        return QApplication::notify(receiver, event);
//    } 
//    catch (std::exception &e) 
//    {
//        qFatal("Error %s sending event %s to object %s (%s)", 
//               e.what(), typeid(*event).name(), qPrintable(receiver->objectName()),
//               typeid(*receiver).name());
//    } 
//    catch (...) 
//    {
//        qFatal("Error <unknown> sending event %s to object %s (%s)", 
//               typeid(*event).name(), qPrintable(receiver->objectName()),
//               typeid(*receiver).name());
//    }        
    
//    // qFatal aborts, so this isn't really necessary
//    // but you might continue if you use a different logging lib
//    return false;
//}

int main(int argc, char *argv[])
{    
    QApplication a(argc, argv);
    a.addLibraryPath(QCoreApplication::applicationDirPath ()+"/plugins");
    
    MainGUI w;
    w.show();
    
    return a.exec();
}
