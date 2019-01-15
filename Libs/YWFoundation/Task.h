//
//  Task.hpp
//  YWFoundation
//
//  Created by wangyanqing on 2019/1/11.
//  Copyright © 2019 FloyStudio. All rights reserved.
//

#ifndef Task_h
#define Task_h

#include <string>

namespace  YTask {
    /// base task interface
    class BaseTask
    {
    public:
        BaseTask(){}
        virtual ~BaseTask(){}
        
        virtual Run() = 0;
        virtual std::string GetName() const = 0;
        virtual void AddRef() = 0;
        virtual void RemoveRef() = 0;
        virtual int GetRef() const = 0;
        virtual void Release() = 0;
    };
}

#endif /* Task_h */
