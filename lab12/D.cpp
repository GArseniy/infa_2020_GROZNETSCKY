/////////////////////////////////////////////////////////////
#include <string>
typedef int handle_t;
const handle_t kNullHandle = 0;
void raw_write(handle_t handle, const std::string& content);
void raw_close(handle_t handle);
/////////////////////////////////////////////////////////////


class IOWrapper{
public:
    handle_t handle;
public:

    IOWrapper() = delete;
    IOWrapper(IOWrapper& h) = delete;
    IOWrapper(IOWrapper&& h) {
        handle = h.handle;
        h.handle = kNullHandle;
    }
    IOWrapper(handle_t h) {
        handle = h;
    }
    ~IOWrapper(){
        if (handle != kNullHandle){
            raw_close(handle);
        }
    }
    IOWrapper& operator=(IOWrapper& h) = delete;
    IOWrapper& operator=(IOWrapper&& h) {
        if (this != &h){
            handle = h.handle;
            h.handle = kNullHandle;
        }
        return *this;
    }
    void Write(const std::string& content){
        raw_write(handle, content);
        return;
    }
};
