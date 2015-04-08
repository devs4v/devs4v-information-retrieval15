
INCLUDES=['/usr/lib/jvm/java-7-openjdk-amd64/include', '/usr/lib/jvm/java-7-openjdk-amd64/include/linux']
CFLAGS=['-fno-strict-aliasing', '-Wno-write-strings']
DEBUG_CFLAGS=['-O0', '-g', '-DDEBUG']
LFLAGS=['-L/usr/lib/jvm/java-7-openjdk-amd64/jre/lib/amd64', '-ljava', '-L/usr/lib/jvm/java-7-openjdk-amd64/jre/lib/amd64/server', '-ljvm', '-Wl,-rpath=/usr/lib/jvm/java-7-openjdk-amd64/jre/lib/amd64:/usr/lib/jvm/java-7-openjdk-amd64/jre/lib/amd64/server']
IMPLIB_LFLAGS=[]
SHARED=True
VERSION="2.20"
