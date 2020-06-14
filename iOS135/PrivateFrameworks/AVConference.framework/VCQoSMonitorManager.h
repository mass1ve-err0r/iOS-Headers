/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCQoSMonitorManager : VCObject {
    NSMutableArray * _moitors;
    NSMutableArray * _monitors;
    long long  _reportingInterval;
    NSMutableDictionary * _sources;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

@property (nonatomic, readonly) NSMutableArray *moitors;

+ (id)sharedInstance;

- (void)dealloc;
- (void)deregisterBlocksForService;
- (bool)doesQoSSourceExistForStreamToken:(id)arg1;
- (id)init;
- (id)moitors;
- (void)registerBlocksForService;
- (void)registerQoSReportingSourceForToken:(long long)arg1;
- (void)unregisterQoSReportingSourceForToken:(long long)arg1;
- (void)updateQoSReport:(id)arg1 toClientsWithToken:(long long)arg2;

@end