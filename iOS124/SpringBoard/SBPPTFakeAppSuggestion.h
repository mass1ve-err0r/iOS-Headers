//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBBestAppSuggestion.h"

@class NSString, NSUUID;

@interface SBPPTFakeAppSuggestion : SBBestAppSuggestion
{
    NSUUID *_uuid;
    NSString *_bundleIdentifier;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)bundleIdentifier;
- (id)uniqueIdentifier;
- (id)initWithBundleIdentifier:(id)arg1;

@end
