all : $(TARGET)
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $@
 
$(TARGET) :$(CXX) $(CXXFLAGS) -c $< -o $@

run :./$(EXECUTABLE)

clean :rm -f $(OBJECTS) $(EXECUTABLE)
	