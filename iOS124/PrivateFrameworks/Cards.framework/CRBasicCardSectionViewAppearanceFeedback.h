//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Cards/CRCardSectionViewAppearanceFeedback-Protocol.h>

@class NSString, SFFeedback;
@protocol CRCardSection;

@interface CRBasicCardSectionViewAppearanceFeedback : NSObject <CRCardSectionViewAppearanceFeedback>
{
    id <CRCardSection> _cardSection;
}

@property(retain, nonatomic) id <CRCardSection> cardSection; // @synthesize cardSection=_cardSection;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, nonatomic) SFFeedback *backingFeedback;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

