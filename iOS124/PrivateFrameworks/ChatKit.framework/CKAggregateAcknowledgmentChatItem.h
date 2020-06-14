//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKAssociatedMessageChatItem.h>

@class NSArray, NSString, UIColor;

@interface CKAggregateAcknowledgmentChatItem : CKAssociatedMessageChatItem
{
    long long _latestAcknowledgmentType;
}

@property(readonly, nonatomic) long long latestAcknowledgmentType; // @synthesize latestAcknowledgmentType=_latestAcknowledgmentType;
- (struct UIEdgeInsets)contentInsets;
- (struct CGSize)loadSizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(out struct UIEdgeInsets *)arg2;
- (BOOL)transcriptOrientation;
@property(readonly, nonatomic) BOOL balloonOrientation;
@property(readonly) UIColor *acknowledgmentImageColor;
@property(readonly, copy) NSString *acknowledgmentImageName;
@property(readonly, copy, nonatomic) NSArray *acknowledgments;
@property(readonly, nonatomic) _Bool includesMultiple;
@property(readonly, nonatomic) _Bool latestIsFromMe;
@property(readonly, nonatomic) _Bool includesFromMe;
- (id)associatedChatItemGUID;
- (id)_imAggregateAcknowledgmentChatItem;
@property(readonly) Class balloonViewClass;
- (Class)cellClass;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;

@end

