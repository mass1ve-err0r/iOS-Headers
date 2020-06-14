//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccess/DATaskManager.h>

#import <DACoreDAVGlue/CoreDAVTaskManager-Protocol.h>

@class NSMutableSet, NSRunLoop, NSString;

@interface DACoreDAVTaskManager : DATaskManager <CoreDAVTaskManager>
{
    NSMutableSet *_applicationsShowingActivity;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRunLoop *workRunLoop;
- (void)coreDAVTaskDidFinish:(id)arg1;
- (void)coreDAVTaskEndModal:(id)arg1;
- (void)coreDAVTaskRequestModal:(id)arg1;
- (void)submitIndependentCoreDAVTask:(id)arg1;
- (void)submitQueuedCoreDAVTask:(id)arg1;
- (void)taskManagerWillRemoveTask:(id)arg1;
- (void)taskManagerDidAddTask:(id)arg1;
- (void)dealloc;
- (void)_updateSpinner:(_Bool)arg1;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

