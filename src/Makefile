CXX = g++
CXXFLAGS = -std=c++17 -O3 -march=native -Wall -Wextra -Wno-unused-parameter -Wno-missing-field-initializers -I. -I./nnue -I./nnue/features -I./nnue/layers

SRCS = \
    nnue/nnue_misc.cpp \
    nnue/nnue_accumulator.cpp \
    nnue/network.cpp \
    nnue/features/half_ka_v2_hm.cpp

OBJS = $(SRCS:.cpp=.o)
TARGET = fairy-stockfish

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)