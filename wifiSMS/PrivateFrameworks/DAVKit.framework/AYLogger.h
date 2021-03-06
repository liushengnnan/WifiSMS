/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */



@interface AYLogger : NSObject 
{
}

+ (void)initialize;
+ (void)_recalculateCacheWithMask:(NSInteger)arg1;
+ (void)addLogger:(id)arg1 forType:(id)arg2 mask:(NSInteger)arg3;
+ (void)removeLogger:(id)arg1 forType:(id)arg2 mask:(NSInteger)arg3;
+ (id)stderrStreamLogger;
+ (id)fileStreamLogger;
+ (id)urlToFileStreamLogger;
+ (void)logInFile:(char *)arg1 function:(const char *)arg2 line:(NSUInteger)arg3 withType:(id)arg4 level:(NSInteger)arg5 format:(id)arg6;

- (void)dumpLogInFile:(char *)arg1 function:(const char *)arg2 line:(NSUInteger)arg3 withType:(id)arg4 level:(NSInteger)arg5 message:(id)arg6;

@end
