//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlay/NSCopying-Protocol.h>
#import <CarPlay/NSSecureCoding-Protocol.h>

@class NSArray, NSUUID;

@interface CPRouteChoice : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_summaryVariants;
    NSArray *_selectionSummaryVariants;
    NSArray *_additionalInformationVariants;
    id _userInfo;
    NSUUID *_identifier;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSArray *additionalInformationVariants; // @synthesize additionalInformationVariants=_additionalInformationVariants;
@property(copy, nonatomic) NSArray *selectionSummaryVariants; // @synthesize selectionSummaryVariants=_selectionSummaryVariants;
@property(copy, nonatomic) NSArray *summaryVariants; // @synthesize summaryVariants=_summaryVariants;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSummaryVariants:(id)arg1 additionalInformationVariants:(id)arg2 selectionSummaryVariants:(id)arg3;
- (id)init;

@end

