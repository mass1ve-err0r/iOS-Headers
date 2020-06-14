//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IXSDataPromise.h"

#import "NSSecureCoding-Protocol.h"

@class IXOwnedDataPromiseSeed, NSString, NSURL;

@interface IXSOwnedDataPromise : IXSDataPromise <NSSecureCoding>
{
    NSString *_relativeStagedPath;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *stagedPath; // @dynamic stagedPath;
- (void)_internal_setStagedPath:(id)arg1;
@property(retain, nonatomic) NSString *relativeStagedPath; // @synthesize relativeStagedPath=_relativeStagedPath;
@property(readonly, nonatomic) NSURL *stagingBaseDir; // @dynamic stagingBaseDir;
- (void)decommission;
- (void)setComplete:(_Bool)arg1;
- (void)cancelForReason:(id)arg1 client:(unsigned long long)arg2;
- (void)reset;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeed:(id)arg1 error:(id *)arg2;
- (_Bool)_onQueue_initWithSeedWithError:(id *)arg1;
- (oneway void)_remote_getStagedPath:(CDUnknownBlockType)arg1;
- (oneway void)_remote_setStagedPath:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) IXOwnedDataPromiseSeed *clientSeed; // @dynamic clientSeed;
@property(retain, nonatomic) IXOwnedDataPromiseSeed *seed; // @dynamic seed;

@end

