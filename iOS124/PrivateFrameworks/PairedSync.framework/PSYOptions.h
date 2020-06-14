//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PairedSync/NSSecureCoding-Protocol.h>

@class NSArray, NSURL;

@interface PSYOptions : NSObject <NSSecureCoding>
{
    _Bool _resumePendingJobs;
    _Bool _resetDeviceSyncState;
    _Bool _dryRun;
    NSURL *_activityInfoDirectory;
    unsigned long long _terminationJobCount;
    NSArray *_testInputs;
    NSArray *_jobs;
    unsigned long long _syncSessionType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long syncSessionType; // @synthesize syncSessionType=_syncSessionType;
@property(copy, nonatomic) NSArray *jobs; // @synthesize jobs=_jobs;
@property(copy, nonatomic) NSArray *testInputs; // @synthesize testInputs=_testInputs;
@property(nonatomic) unsigned long long terminationJobCount; // @synthesize terminationJobCount=_terminationJobCount;
@property(nonatomic) _Bool dryRun; // @synthesize dryRun=_dryRun;
@property(nonatomic, getter=shouldResetDeviceSyncState) _Bool resetDeviceSyncState; // @synthesize resetDeviceSyncState=_resetDeviceSyncState;
@property(copy, nonatomic) NSURL *activityInfoDirectory; // @synthesize activityInfoDirectory=_activityInfoDirectory;
@property(nonatomic, getter=shouldResumePendingJobs) _Bool resumePendingJobs; // @synthesize resumePendingJobs=_resumePendingJobs;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

