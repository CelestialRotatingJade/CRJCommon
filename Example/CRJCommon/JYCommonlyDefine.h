//
//  JYCommonlyDefine.h
//  Pods
//
//  Created by zhuyuhui on 2020/3/20.
//

#import <UIKit/UIKit.h>
//#import <QuartzCore/QuartzCore.h>
//#import <objc/runtime.h>



// 输出日志 (格式: [时间] [哪个方法] [哪行] [输出内容])
#ifdef DEBUG
#define JYNSLog(format, ...)  printf("\n[%s] %s [第%d行] 💕 %s\n", __TIME__, __FUNCTION__, __LINE__, [[NSString stringWithFormat:format, ##__VA_ARGS__] UTF8String]);
#else

#define JYNSLog(format, ...)

#endif
// 打印方法
#define JYLogFunc JYNSLog(@"%s", __func__)
// 打印请求错误信息
#define JYLogError(error) JYNSLog(@"Error: %@", error)
// 销毁打印
#define JYDealloc JYNSLog(@"\n =========+++ %@  销毁了 +++======== \n",[self class])

#define JYLogLastError(db) JYNSLog(@"lastError: %@, lastErrorCode: %d, lastErrorMessage: %@", [db lastError], [db lastErrorCode], [db lastErrorMessage]);

/// Get main screen's scale.
CGFloat JYScreenScale(void);

/// Get main screen's size. Height is always larger than width.
CGSize JYScreenSize(void);

