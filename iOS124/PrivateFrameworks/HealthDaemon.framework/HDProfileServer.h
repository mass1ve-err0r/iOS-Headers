//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSubserver.h>

#import <HealthDaemon/HDProfileServerInterface-Protocol.h>

@class NSString;

@interface HDProfileServer : HDSubserver <HDProfileServerInterface>
{
}

- (void)remote_setDisplayName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_getAllProfilesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_deleteProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_createProfileOfType:(long long)arg1 displayName:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

