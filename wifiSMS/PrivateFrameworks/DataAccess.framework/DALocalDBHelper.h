/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;



@interface DALocalDBHelper : NSObject 
{
    void *_abDB;
    NSInteger _lastSavedABSequenceNumber;
    NSInteger _abConnectionCount;
    struct CalDatabase { } *_calDB;
    NSInteger _calConnectionCount;
    NSString *_fakedOutABDBDir;
    NSString *_fakedOutCalDBDir;
    id _calUnitTestCallbackObject;
    SEL _calUnitTestCallbackSelector;
}

+ (id)sharedInstanceForAccountType:(id)arg1 creatingClass:(Class)arg2;

- (void*)abDB;
- (NSInteger)abLastSavedSequenceNumber;
- (void)abOpenDB;
- (BOOL)abSaveDB;
- (BOOL)abCloseDBAndSave:(BOOL)arg1;
- (id)abConstraintPlistPath;
- (struct CalDatabase { }*)calDB;
- (void)calOpenDB;
- (BOOL)calSaveDB;
- (BOOL)calCloseDBAndSave:(BOOL)arg1;
- (void)abSetTestABDBDir:(id)arg1;
- (id)abTestABDBDir;
- (void)calSetTestCalDBDir:(id)arg1;
- (id)calTestCalDBDir;
- (void)calUnitTestsSetCallbackObjectForSave:(id)arg1 callbackSelector:(SEL)arg2;

@end
