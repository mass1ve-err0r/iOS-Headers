//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTranscriptLabelCell.h>

@class NSAttributedString, UIButton;

@interface CKTranscriptStatusCell : CKTranscriptLabelCell
{
    BOOL _buttonAlignmentRelativeToContent;
    UIButton *_statusButton;
    double _prevBalloonWidth;
}

+ (void)transitionFromView:(id)arg1 toView:(id)arg2 duration:(double)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)zoomAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)statusButton;
@property(nonatomic) double prevBalloonWidth; // @synthesize prevBalloonWidth=_prevBalloonWidth;
@property(nonatomic) BOOL buttonAlignmentRelativeToContent; // @synthesize buttonAlignmentRelativeToContent=_buttonAlignmentRelativeToContent;
@property(retain, nonatomic) UIButton *statusButton; // @synthesize statusButton=_statusButton;
- (void).cxx_destruct;
- (void)clearFilters;
- (void)addFilter:(id)arg1;
@property(copy, nonatomic) NSAttributedString *attributedButtonText;
- (void)performRemoval:(CDUnknownBlockType)arg1;
- (void)performReload:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performInsertion:(CDUnknownBlockType)arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)setOrientation:(BOOL)arg1;
- (void)prepareForReuse;
- (void)configureForChatItem:(id)arg1;

@end

