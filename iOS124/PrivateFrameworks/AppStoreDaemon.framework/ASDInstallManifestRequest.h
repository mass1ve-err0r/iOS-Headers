//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDEphemeralRequest.h>

@class ASDInstallManifestRequestOptions;

@interface ASDInstallManifestRequest : ASDEphemeralRequest
{
}

+ (long long)requestType;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) ASDInstallManifestRequestOptions *options; // @dynamic options;

@end

