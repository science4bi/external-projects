//===========================================
//  Lumina-DE source code
//  Copyright (c) 2012, Ken Moore
//  Available under the 3-clause BSD license
//  See the LICENSE file for full details
//===========================================
#ifndef _LUMINA_DESKTOP_GLOBALS_H
#define _LUMINA_DESKTOP_GLOBALS_H

class SYSTEM{
public:
	//Current Username
	static QString user(){ return QString(getlogin()); }
	//Current Hostname
	static QString hostname(){ 
	  char name[50];
	  gethostname(name,sizeof(name));
	  return QString(name);
	}
	//Shutdown the system
	static void shutdown(){ system("(shutdown -p now) &"); }
	//Restart the system
	static void restart(){ system("(shutdown -r now) &"); }
};

/*
class LUMINA{
public:
	static QIcon getIcon(QString iconname);
	static QIcon getFileIcon(QString filename);	
};
*/

#endif
