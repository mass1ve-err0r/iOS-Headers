//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSString;

@interface FCPersonalizationFeature : NSObject <NSCopying>
{
    NSString *_personalizationIdentifier;
    NSString *_fc_description;
    NSString *_tagID;
}

+ (id)featureObserver;
+ (id)featureForFreeValuedIdentifier:(id)arg1;
+ (id)featureForIdentifier:(id)arg1 allowFreeValued:(_Bool)arg2;
+ (id)featureForIdentifier:(id)arg1;
+ (id)featureFromTagID:(id)arg1;
+ (id)featuresFromTagIDs:(id)arg1;
+ (id)featuresFromTag:(id)arg1;
+ (id)featuresFromPersonalizingItem:(id)arg1;
+ (id)featuresFromTodayPersonalizationEvent:(id)arg1;
+ (id)featuresFromHeadline:(id)arg1;
+ (id)featuresFromIssue:(id)arg1;
@property(retain, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
@property(readonly, nonatomic) NSString *fc_description; // @synthesize fc_description=_fc_description;
@property(retain, nonatomic) NSString *personalizationIdentifier; // @synthesize personalizationIdentifier=_personalizationIdentifier;
- (void).cxx_destruct;
- (id)fr_description;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

