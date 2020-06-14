//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBLogoutProgressDataSource-Protocol.h"
#import "SBTestRecipe-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, SBLogoutProgressAlertViewController;

@interface SBLogoutProgressTestRecipe : NSObject <SBLogoutProgressDataSource, SBTestRecipe>
{
    NSMutableArray *_tasks;
    SBLogoutProgressAlertViewController *_logoutProgressAlert;
    NSArray *_remainingApplications;
    NSDictionary *_remainingBlockingTasks;
}

+ (id)title;
@property(retain, nonatomic) NSDictionary *remainingBlockingTasks; // @synthesize remainingBlockingTasks=_remainingBlockingTasks;
@property(copy, nonatomic) NSArray *remainingApplications; // @synthesize remainingApplications=_remainingApplications;
@property(retain, nonatomic) SBLogoutProgressAlertViewController *logoutProgressAlert; // @synthesize logoutProgressAlert=_logoutProgressAlert;
- (void).cxx_destruct;
- (id)_defaultPendingApplications;
- (id)_defaultBlockingTasks;
- (id)debugBlockingTasksForLogoutProgressAlertViewController:(id)arg1;
- (id)pendingApplicationsForLogoutProgressAlertViewController:(id)arg1;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

