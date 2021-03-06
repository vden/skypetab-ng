#ifndef QINTERCEPT_H
#define QINTERCEPT_H
#include <QWidget>
namespace skypetab
{
	void AddSignalIntercept(const char* className,const char*signalName, QObject*target, const char* targetSlot, const char* targetSignal);
	extern QWidget*WindowCreationInitiator;
}
typedef void (QSystemTrayIcon::*setIconProto)(const QIcon&);
extern setIconProto realSetIcon;
#endif // QINTERCEPT_H
