JAVA_HOME=$(readlink -f /usr/bin/javac | sed "s:/bin/javac::")
g++ -lncursesw -I$JAVA_HOME/include/linux/ -I$JAVA_HOME/include/ -fPIC -shared -o libjnincurses.so JniNcurses.cpp

