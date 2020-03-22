#include <stdio.h>  
#include <stdlib.h>
#include <dlfcn.h>  

struct LibLoader {
    LibLoader(const char* name) {
        handle = dlopen(name, RTLD_LAZY);
        if (!handle) {  
            fprintf (stderr, "dlopen: %s", dlerror());  
            exit(1);  
        }        
    }

    void* find(const char* symbol) const {
        void* t = dlsym(handle, symbol); 
        if (auto error = dlerror())  {  
            fprintf (stderr, "dlsym: %s", error);  
            exit(1);  
        }
        return t;
    }

    ~LibLoader() {
        if (handle != nullptr) {
            dlclose(handle);
        }
    }

private:
    void* handle = nullptr;
};

int main(int argc, char **argv) {
    LibLoader loader("libvalue.so");

    using get_value_t = int (*)();
    using set_value_t = void (*)(int);  

    auto get_value = (get_value_t)loader.find("get_value");
    auto set_value = (set_value_t)loader.find("set_value");  
    
    printf("get_value: %d\n", get_value());  
    set_value(6);
    printf("get_value: %d\n", get_value()); 

    return 0;
}
