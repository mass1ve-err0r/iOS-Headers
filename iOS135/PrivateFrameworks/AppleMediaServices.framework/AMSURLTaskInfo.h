/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSURLTaskInfo : NSObject {
    id /* block */  _completionBlock;
    NSMutableData * _data;
    NSError * _error;
    NSURLSessionTaskMetrics * _metrics;
    AMSURLRequestProperties * _properties;
    AMSURLAction * _receivedAction;
    NSURLResponse * _response;
    long long  _retryCount;
    AMSURLSession * _session;
    NSURLSessionTask * _task;
    NSObject<OS_dispatch_queue> * _taskQueue;
    NSMutableDictionary * _userInfo;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) NSMutableData *data;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSURLSessionTaskMetrics *metrics;
@property (nonatomic, retain) AMSURLRequestProperties *properties;
@property (nonatomic, retain) AMSURLAction *receivedAction;
@property (nonatomic, retain) NSURLResponse *response;
@property (nonatomic) long long retryCount;
@property (nonatomic, retain) AMSURLSession *session;
@property (nonatomic, retain) NSURLSessionTask *task;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *taskQueue;
@property (nonatomic, readonly) NSMutableDictionary *userInfo;

+ (id)createTaskInfoForTask:(id)arg1;
+ (void)removeTaskInfoForTask:(id)arg1;
+ (id)sharedTaskQueue;
+ (id)sharedTaskStore;
+ (id)taskInfoForTask:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (id)data;
- (id)error;
- (id)initWithTask:(id)arg1;
- (id)metrics;
- (void)migrateFromTaskInfo:(id)arg1;
- (id)properties;
- (id)receivedAction;
- (id)response;
- (long long)retryCount;
- (id)session;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setData:(id)arg1;
- (void)setError:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setReceivedAction:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setRetryCount:(long long)arg1;
- (void)setSession:(id)arg1;
- (void)setTask:(id)arg1;
- (id)task;
- (id)taskQueue;
- (id)userInfo;

@end