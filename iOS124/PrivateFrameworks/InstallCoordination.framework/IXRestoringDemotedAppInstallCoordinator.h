//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InstallCoordination/IXAppInstallCoordinator.h>

#import <InstallCoordination/IXCoordinatorWithImportance-Protocol.h>
#import <InstallCoordination/IXCoordinatorWithUserDataPromise-Protocol.h>
#import <InstallCoordination/IXUserInitiatedCoordinator-Protocol.h>

@class NSString;

@interface IXRestoringDemotedAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithUserDataPromise, IXUserInitiatedCoordinator, IXCoordinatorWithImportance>
{
}

+ (void)enumerateCoordinatorsUsingBlock:(CDUnknownBlockType)arg1;
+ (_Bool)enumerateCoordinatorsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(_Bool)arg3 created:(_Bool *)arg4 error:(id *)arg5;
- (id)validInstallTypes;
- (id)userDataRestoreShouldBegin:(_Bool *)arg1;
@property(readonly, nonatomic) _Bool hasUserDataPromise;
- (id)userDataPromiseWithError:(id *)arg1;
- (_Bool)setUserDataPromise:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic, getter=isUserInitiated) _Bool userInitiated;

@end

