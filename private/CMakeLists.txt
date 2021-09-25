add_library(log_impl SHARED LogImpl.cpp log_memory/LogMemory.h log_user/LogUser.h)
target_link_libraries(log_impl PUBLIC log_interface)