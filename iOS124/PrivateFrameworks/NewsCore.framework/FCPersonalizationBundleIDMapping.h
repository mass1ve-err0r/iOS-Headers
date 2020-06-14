//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCJSONEncodableObjectProviding-Protocol.h>
#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NTPBBundleIDMapping;

@interface FCPersonalizationBundleIDMapping : NSObject <NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding>
{
    NTPBBundleIDMapping *_pbBundleIDMapping;
    NSDictionary *_bundleIDMapping;
}

+ (_Bool)supportsSecureCoding;
+ (id)decendingSpecificityBundleIDsForBundleID:(id)arg1;
@property(retain, nonatomic) NSDictionary *bundleIDMapping; // @synthesize bundleIDMapping=_bundleIDMapping;
- (void).cxx_destruct;
- (id)jsonEncodableObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)tagScoresForBundleID:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;
- (id)initWithPBBundleIDMapping:(id)arg1;

@end

