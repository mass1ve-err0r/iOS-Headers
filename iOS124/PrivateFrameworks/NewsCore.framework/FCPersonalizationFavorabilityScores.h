//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NTPBPublisherFavorabilityScores;

@interface FCPersonalizationFavorabilityScores : NSObject <NSSecureCoding>
{
    NTPBPublisherFavorabilityScores *_pbFavorabilityScores;
    NSDictionary *_tagIDToScores;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *tagIDToScores; // @synthesize tagIDToScores=_tagIDToScores;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)scoreForTagID:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;
- (id)initWithPBFavorabilityScores:(id)arg1;

@end

