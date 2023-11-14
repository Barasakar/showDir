# Define the compiler
CXX = clang++

# Define any compile-time flags
CXXFLAGS = -Wall -g -std=c++17

# Define any directories containing header files
INCLUDES = 

# Define any libraries to link into executable
LFLAGS = 

# Define the source files
SRCS = main.cpp dirStruct.cpp

# Define the object files 
OBJS = $(SRCS:.cpp=.o)

# Define the executable file 
MAIN = dirStruct

.PHONY: depend clean

all:    $(MAIN)
	@echo  Simple compiler named myprogram has been compiled

$(MAIN): $(OBJS) 
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS) $(LFLAGS)

# This is a suffix replacement rule for building .o's from .cpp's
# It uses automatic variables $<: the name of the prerequisite of
# the rule(a .cpp file) and $@: the name of the target of the rule (a .o file)
.cpp.o:
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $<  -o $@

clean:
	$(RM) *.o *~ $(MAIN)

depend: $(SRCS)
	makedepend $(INCLUDES) $^

# DO NOT DELETE THIS LINE -- make depend needs it
