//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcutsUI/CRCommandHandling-Protocol.h>
#import <VoiceShortcutsUI/CRKEventResponding-Protocol.h>
#import <VoiceShortcutsUI/CRKFeedbackDelegate-Protocol.h>

@protocol CRCard, CRKCardSectionViewSourcing, CRKCardViewControllerDelegate;

@protocol CRKCardViewControlling <CRKEventResponding, CRKFeedbackDelegate, CRCommandHandling>
@property(nonatomic) __weak id <CRKCardViewControllerDelegate> cardViewControllerDelegate;
@property(retain, nonatomic) id <CRKCardSectionViewSourcing> cardSectionViewSource;
@property(retain, nonatomic) id <CRCard> card;
- (double)contentHeightForWidth:(double)arg1;
@end

