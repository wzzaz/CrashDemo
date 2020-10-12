#ifndef CCRASHSTACK_H
#define CCRASHSTACK_H

#include <windows.h>
#include <QString>
#include <dbghelp.h>

class CCrashStack
{
private:
    PEXCEPTION_POINTERS m_pException;

private:
    QString GetModuleByRetAddr(PBYTE Ret_Addr, PBYTE & Module_Addr);
    QString GetCallStack(PEXCEPTION_POINTERS pException);
    QString GetVersionStr();
    bool GetHardwareInaformation(QString &graphics_card, QString &sound_deivce);
    void CreateDumpFile(LPCWSTR lpstrDumpFilePathName);

public:
    CCrashStack(PEXCEPTION_POINTERS pException);

    QString GetExceptionInfo();
};

#endif // CCRASHSTACK_H
