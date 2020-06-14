//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface PRSRankingItemCollection : NSObject
{
    NSArray *_arrayOfRankingItems;
    unsigned long long _countOfVisibleResults;
    NSString *_bundleIdentifier;
    NSDictionary *_mapResultIdToProtectionClass;
}

@property(retain) NSDictionary *mapResultIdToProtectionClass; // @synthesize mapResultIdToProtectionClass=_mapResultIdToProtectionClass;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property unsigned long long countOfVisibleResults; // @synthesize countOfVisibleResults=_countOfVisibleResults;
@property(retain) NSArray *arrayOfRankingItems; // @synthesize arrayOfRankingItems=_arrayOfRankingItems;
- (void).cxx_destruct;
- (id)description;

@end

