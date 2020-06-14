//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSParsecSearchMapsResultFeedbackSenderClient-Protocol.h>
#import <SafariShared/WBSParsecSearchResultPresentedInCard-Protocol.h>

@class NSNumber, NSString, UIImage;
@protocol WBSParsecSearchSession;

@protocol WBSParsecSearchSimpleResult <WBSParsecSearchResultPresentedInCard, WBSParsecSearchMapsResultFeedbackSenderClient>
@property(readonly, nonatomic) _Bool hasSingleLineDescriptionAndTitle;
@property(readonly, nonatomic) NSString *footnote;
@property(readonly, nonatomic) _Bool descriptionTextCanWrap;
@property(readonly, nonatomic) NSNumber *descriptionMaximumNumberOfLines;
@property(readonly, nonatomic) NSString *descriptionLeadInText;
@property(readonly, nonatomic) NSNumber *titleMaximumNumberOfLines;
- (UIImage *)titleGlyphWithSession:(id <WBSParsecSearchSession>)arg1;
@end

