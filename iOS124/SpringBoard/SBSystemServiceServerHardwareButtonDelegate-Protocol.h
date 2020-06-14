//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBSystemServiceServerDelegate-Protocol.h"

@class NSString, SBSystemServiceServer;
@protocol FBSServiceFacilityClientHandle;

@protocol SBSystemServiceServerHardwareButtonDelegate <SBSystemServiceServerDelegate>
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 fetchHapticTypeForButtonKind:(long long)arg3 completion:(void (^)(long long))arg4;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setHapticType:(long long)arg3 buttonKind:(long long)arg4;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 setEventMask:(unsigned long long)arg3 buttonKind:(long long)arg4 priority:(long long)arg5;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 client:(id <FBSServiceFacilityClientHandle>)arg2 acquireAssertionOfType:(long long)arg3 forReason:(NSString *)arg4 withCompletion:(void (^)(BSAction *))arg5;
- (void)systemServiceServer:(SBSystemServiceServer *)arg1 clientDidDisconnect:(id <FBSServiceFacilityClientHandle>)arg2;
@end

