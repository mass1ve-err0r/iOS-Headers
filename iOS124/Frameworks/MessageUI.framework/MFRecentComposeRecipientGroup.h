//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/MFComposeRecipientGroup.h>

@class CRRecentContact;

@interface MFRecentComposeRecipientGroup : MFComposeRecipientGroup
{
    CRRecentContact *_recentContact;
}

@property(readonly, retain, nonatomic) CRRecentContact *recentContact; // @synthesize recentContact=_recentContact;
- (id)unlocalizedLabel;
- (id)placeholderName;
- (id)label;
- (void)dealloc;
- (id)initWithChildren:(id)arg1 displayString:(id)arg2 recentContact:(id)arg3;

@end

