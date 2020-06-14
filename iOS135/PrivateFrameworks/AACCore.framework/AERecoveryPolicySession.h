/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AACCore.framework/AACCore
 */

@interface AERecoveryPolicySession : NSObject <AEPolicySession> {
    <AEPerformancePrimitives> * _performancePrimitives;
    NSArray * _persistentDeactivations;
    <AEPolicyStore> * _policyStore;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) <AEPerformancePrimitives> *performancePrimitives;
@property (nonatomic, readonly, copy) NSArray *persistentDeactivations;
@property (nonatomic, readonly) <AEPolicyStore> *policyStore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)deactivateWithCompletion:(id /* block */)arg1;
- (void)deactivateWithRemainingPersistentDeactivations:(id)arg1 currentEvent:(long long)arg2 errors:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithPolicyStore:(id)arg1 performancePrimitives:(id)arg2 persistentDeactivations:(id)arg3;
- (id)performancePrimitives;
- (id)persistentDeactivations;
- (id)policyStore;
- (id)queue;

@end