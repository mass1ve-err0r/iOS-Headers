//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKDiscoveryWebServiceResponse.h>

@class PKDiscoveryManifest;

@interface PKDiscoveryManifestResponse : PKDiscoveryWebServiceResponse
{
    PKDiscoveryManifest *_manifest;
}

@property(readonly, nonatomic) PKDiscoveryManifest *manifest; // @synthesize manifest=_manifest;
- (void).cxx_destruct;
- (id)initWithManifest:(id)arg1;
- (id)initWithData:(id)arg1;

@end

