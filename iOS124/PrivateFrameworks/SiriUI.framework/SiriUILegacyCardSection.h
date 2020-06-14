//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriUI/CRCardSection-Protocol.h>

@class NSArray, NSString;
@protocol SFCardSection;

@interface SiriUILegacyCardSection : NSObject <CRCardSection>
{
    NSString *_cardSectionIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *cardSectionIdentifier; // @synthesize cardSectionIdentifier=_cardSectionIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSArray *actionCommands;
@property(readonly, nonatomic) id <SFCardSection> backingCardSection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasNextCard;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

