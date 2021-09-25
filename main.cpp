#include <cstring>
#include "public/Log.h"

using namespace std;

int main() {
    Log current_log{};
    current_log.hello();
    current_log.log_date();
    current_log.log_hour();
    current_log.log_total_memory();
    current_log.log_used_memory();
    return 0;
}
