# CrashDemo
这是一个Qt项目生成崩溃日志的Demo，包括Msvc与Mingw的应用。
编译环境的切换在pro文件中调整

## MingW
pro文件中打开
```
QMAKE_CFLAGS_RELEASE += -g
QMAKE_CXXFLAGS_RELEASE += -g
QMAKE_CFLAGS_RELEASE -= -O2
QMAKE_CXXFLAGS_RELEASE -= -O2
QMAKE_LFLAGS_RELEASE = -mthreads -W
```
编译运行后界面点击crash，生成crash.log,使用Qt的addr2line工具，具体参考[链接](https://blog.csdn.net/w54a3teg64c7bd/article/details/108993208)


## Msvc
```
CONFIG += force_debug_info
CONFIG += separate_debug_info
```
编译运行后见面点击crash,生成Exception.dmp，使用vs打开调试即可