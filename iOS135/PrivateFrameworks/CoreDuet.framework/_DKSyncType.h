/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncType : NSObject <NSSecureCoding> {
    bool  _didActivatePeer;
    bool  _didAddSyncedEvents;
    bool  _didDeleteSyncedEvents;
    bool  _didReceivePush;
    bool  _forceSync;
    bool  _isInitialSync;
    bool  _isPeriodicSync;
    bool  _isSingleDevice;
    bool  _isTriggeredSync;
    double  _periodicSyncInterval;
    unsigned long long  _urgency;
    NSObject<OS_xpc_object> * _xpcActivity;
}

@property (nonatomic) bool didActivatePeer;
@property (nonatomic) bool didAddSyncedEvents;
@property (nonatomic) bool didDeleteSyncedEvents;
@property (nonatomic) bool didReceivePush;
@property (nonatomic) bool forceSync;
@property (nonatomic) bool isInitialSync;
@property (nonatomic) bool isPeriodicSync;
@property (nonatomic, readonly) bool isSingleDevice;
@property (nonatomic) bool isTriggeredSync;
@property (nonatomic) double periodicSyncInterval;
@property (nonatomic) unsigned long long urgency;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcActivity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (bool)didActivatePeer;
- (bool)didAddSyncedEvents;
- (bool)didDeleteSyncedEvents;
- (bool)didReceivePush;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceSync;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsSingleDevice:(bool)arg1;
- (bool)isEqualToSyncType:(id)arg1;
- (bool)isInitialSync;
- (bool)isPeriodicSync;
- (bool)isSingleDevice;
- (bool)isTriggeredSync;
- (void)mergeType:(id)arg1;
- (double)periodicSyncInterval;
- (void)setDidActivatePeer:(bool)arg1;
- (void)setDidAddSyncedEvents:(bool)arg1;
- (void)setDidDeleteSyncedEvents:(bool)arg1;
- (void)setDidReceivePush:(bool)arg1;
- (void)setForceSync:(bool)arg1;
- (void)setIsInitialSync:(bool)arg1;
- (void)setIsPeriodicSync:(bool)arg1;
- (void)setIsTriggeredSync:(bool)arg1;
- (void)setPeriodicSyncInterval:(double)arg1;
- (void)setUrgency:(unsigned long long)arg1;
- (void)setXpcActivity:(id)arg1;
- (unsigned long long)urgency;
- (id)xpcActivity;

@end
