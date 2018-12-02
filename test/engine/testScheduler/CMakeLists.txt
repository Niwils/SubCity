	CXXTEST_ADD_TEST(testScheduler mainTestScheduler.cpp 
                    ${CMAKE_CURRENT_LIST_DIR}/TestScheduler.hpp ${CMAKE_CURRENT_LIST_DIR}/TestScheduler.cpp)
	target_link_libraries(testScheduler engine ${SDL2_LIBRARY})
