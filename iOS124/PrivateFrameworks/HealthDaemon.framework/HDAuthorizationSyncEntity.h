//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDNanoSyncEntity-Protocol.h>
#import <HealthDaemon/HDSyncEntity-Protocol.h>

@class NSString;

@interface HDAuthorizationSyncEntity : NSObject <HDNanoSyncEntity, HDSyncEntity>
{
}

+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (long long)nextSyncAnchorWithSession:(id)arg1 predicate:(id)arg2 startSyncAnchor:(long long)arg3 profile:(id)arg4 error:(id *)arg5;
+ (void)didGenerateCodableSourceAuthorizationsForSyncSession:(id)arg1;
+ (_Bool)generateSyncObjectsForSession:(id)arg1 predicate:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange)arg3 maxEncodedBytesPerMessage:(long long)arg4 profile:(id)arg5 error:(id *)arg6 handler:(CDUnknownBlockType)arg7;
+ (id)syncEntityIdentifier;
+ (id)createCodableSourceAuthorizationWithSource:(id)arg1 syncSession:(id)arg2;
+ (_Bool)companionDidChangeForProfile:(id)arg1 error:(id *)arg2;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (int)nanoSyncObjectType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

