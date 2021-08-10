#pragma once

/**
 * @url http://www.nuonsoft.com/blog/2017/08/10/implementing-a-thread-safe-singleton-with-c11-using-magic-statics/
 */
template <typename T>
class CSingleton final
{
public:
    static T& GetInstance()
    {
        static T instance;
        return instance;
    }

private:
    CSingleton() = default;
    ~CSingleton() = default;

    CSingleton(const CSingleton&) = delete;
    CSingleton& operator=(const CSingleton&) = delete;
    CSingleton(CSingleton&&) = delete;
    CSingleton& operator=(CSingleton&&) = delete;
};
