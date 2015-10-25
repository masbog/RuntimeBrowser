/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFTask : NSObject {
    int _cd_rc;
    void *_task;
    void *arguments;
    struct _opaque_pthread_cond_t { 
        long __sig; 
        BOOL __opaque[24]; 
    } condition;
    int isFinishedFlag;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } lock;
}

+ (int)getNumActiveProcessors;
+ (unsigned long long)getPhysicalMemory;
+ (double)getProcessorSpeed;

- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)dealloc;
- (void)finalize;
- (id)initWithFunction:(int (*)arg1 withArgument:(void*)arg2 andPriority:(int)arg3;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;

@end
