######################################
#
#
######################################
  
#target you can change test to what you want

TARGET  := libdfttest.so 
#compile and lib parameter
CC      := g++
LIBS    :=-lopencv_objdetect -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_dnn -lopencv_photo -lopencv_imgcodecs  -lthread_db
LDFLAGS :=-L/usr/local/include/lib/

INCLUDE :=-I/usr/local/include/opencv 

CFLAGS  := -g -fPIC -std=c++11 -Wall  -O3 $(DEFINES) $(INCLUDE)
CXXFLAGS:= $(CFLAGS) -DHAVE_CONFIG_H 
SHARE   := -fPIC -shared -o
  
#i think you should do anything here

  
#source file

SOURCE  := $(wildcard *.c) $(wildcard *.cpp)
OBJS    := $(patsubst %.c,%.o,$(patsubst %.cpp,%.o,$(SOURCE)))
  
.PHONY : everything objs clean veryclean rebuild
  
everything : $(TARGET)
  
all : $(TARGET)
  
objs : $(OBJS)
  
rebuild: veryclean everything
                
clean :
	rm -fr *.o
    
veryclean : clean
	rm -fr $(TARGET)
  
$(TARGET) : $(OBJS)
	$(CC) $(CXXFLAGS) $(SHARE) $@ $(OBJS) $(LDFLAGS) $(LIBS)
