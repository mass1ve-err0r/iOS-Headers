//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAWorkerJob.h>

#import <PhotoAnalysis/PHAGraphRegistration-Protocol.h>

@class NSDate, NSObject, NSString, PHAGraphManager;
@protocol OS_os_transaction;

@interface PHAGraphServiceWorkerGraphUpdateJob : PHAWorkerJob <PHAGraphRegistration>
{
    _Bool _finished;
    _Bool _isChangeProcessingJob;
    float _completionScore;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _completionBlock;
    NSString *_label;
    NSDate *_creationDate;
    NSObject<OS_os_transaction> *_transaction;
    PHAGraphManager *_graphManager;
}

+ (id)graphUpdateJobWithLibrary:(id)arg1 scenario:(unsigned long long)arg2 label:(id)arg3 updateBlock:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) PHAGraphManager *graphManager; // @synthesize graphManager=_graphManager;
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy) NSString *label; // @synthesize label=_label;
@property _Bool isChangeProcessingJob; // @synthesize isChangeProcessingJob=_isChangeProcessingJob;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(nonatomic) float completionScore; // @synthesize completionScore=_completionScore;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
- (void).cxx_destruct;
- (void)onGraphUpdateComplete;
- (void)graphUpdateDidStop;
- (void)graphUpdateIsConsistent;
- (void)graphUpdateMadeProgress:(double)arg1;
- (_Bool)wantsGraphUpdateNotifications;
- (_Bool)wantsLiveGraphUpdates;
- (void)updateCompletionScore:(float)arg1;
- (void)markAsFinishedWithCompletionScore:(float)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)stopProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (_Bool)startProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 label:(id)arg3 library:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

