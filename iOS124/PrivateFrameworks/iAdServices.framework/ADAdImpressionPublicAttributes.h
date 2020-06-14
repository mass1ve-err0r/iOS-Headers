//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAdServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface ADAdImpressionPublicAttributes : NSObject <NSSecureCoding>
{
    _Bool _unbranded;
    _Bool _hasAction;
    _Bool _requiresMRAID;
    _Bool _adLibManagedVideo;
    NSString *_batchResponseIdentifier;
    NSString *_accessibilityLabel;
    double _skipThreshold;
    double _minimumIntervalBetweenPresentations;
    NSArray *_videoAssets;
    NSDictionary *_mediaAsset;
    NSString *_uniqueIdentifier;
    NSArray *_adSpecCreativeSizes;
    NSURL *_audioURL;
    NSURL *_staticImageURL;
    NSURL *_logoImageURL;
    NSString *_headlineForLCD;
    NSString *_descriptionForLCD;
    NSArray *_nativeMetadata;
    NSDictionary *_transparencyDetails;
    NSDictionary *_nativeMediaCreativeMetadata;
    double _portraitWidth;
    double _portraitHeight;
    double _landscapeWidth;
    double _landscapeHeight;
    NSURL *_contentURL;
    NSString *_contentString;
    double _containerWidth;
    double _containerHeight;
    long long _maximumPretapRequestCount;
    NSArray *_matchClauses;
    NSArray *_excludeTags;
    long long _adPrivacyMarkPosition;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long adPrivacyMarkPosition; // @synthesize adPrivacyMarkPosition=_adPrivacyMarkPosition;
@property(retain, nonatomic) NSArray *excludeTags; // @synthesize excludeTags=_excludeTags;
@property(retain, nonatomic) NSArray *matchClauses; // @synthesize matchClauses=_matchClauses;
@property(nonatomic) _Bool adLibManagedVideo; // @synthesize adLibManagedVideo=_adLibManagedVideo;
@property(nonatomic) long long maximumPretapRequestCount; // @synthesize maximumPretapRequestCount=_maximumPretapRequestCount;
@property(nonatomic) _Bool requiresMRAID; // @synthesize requiresMRAID=_requiresMRAID;
@property(nonatomic) double containerHeight; // @synthesize containerHeight=_containerHeight;
@property(nonatomic) double containerWidth; // @synthesize containerWidth=_containerWidth;
@property(retain, nonatomic) NSString *contentString; // @synthesize contentString=_contentString;
@property(retain, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(nonatomic) double landscapeHeight; // @synthesize landscapeHeight=_landscapeHeight;
@property(nonatomic) double landscapeWidth; // @synthesize landscapeWidth=_landscapeWidth;
@property(nonatomic) double portraitHeight; // @synthesize portraitHeight=_portraitHeight;
@property(nonatomic) double portraitWidth; // @synthesize portraitWidth=_portraitWidth;
@property(retain, nonatomic) NSDictionary *nativeMediaCreativeMetadata; // @synthesize nativeMediaCreativeMetadata=_nativeMediaCreativeMetadata;
@property(retain, nonatomic) NSDictionary *transparencyDetails; // @synthesize transparencyDetails=_transparencyDetails;
@property(retain, nonatomic) NSArray *nativeMetadata; // @synthesize nativeMetadata=_nativeMetadata;
@property(copy, nonatomic) NSString *descriptionForLCD; // @synthesize descriptionForLCD=_descriptionForLCD;
@property(copy, nonatomic) NSString *headlineForLCD; // @synthesize headlineForLCD=_headlineForLCD;
@property(retain, nonatomic) NSURL *logoImageURL; // @synthesize logoImageURL=_logoImageURL;
@property(retain, nonatomic) NSURL *staticImageURL; // @synthesize staticImageURL=_staticImageURL;
@property(retain, nonatomic) NSURL *audioURL; // @synthesize audioURL=_audioURL;
@property(nonatomic) _Bool hasAction; // @synthesize hasAction=_hasAction;
@property(retain, nonatomic) NSArray *adSpecCreativeSizes; // @synthesize adSpecCreativeSizes=_adSpecCreativeSizes;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSDictionary *mediaAsset; // @synthesize mediaAsset=_mediaAsset;
@property(retain, nonatomic) NSArray *videoAssets; // @synthesize videoAssets=_videoAssets;
@property(nonatomic) double minimumIntervalBetweenPresentations; // @synthesize minimumIntervalBetweenPresentations=_minimumIntervalBetweenPresentations;
@property(nonatomic) double skipThreshold; // @synthesize skipThreshold=_skipThreshold;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(copy, nonatomic) NSString *batchResponseIdentifier; // @synthesize batchResponseIdentifier=_batchResponseIdentifier;
@property(nonatomic) _Bool unbranded; // @synthesize unbranded=_unbranded;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

