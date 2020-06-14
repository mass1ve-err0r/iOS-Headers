//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFTitleCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, SFActionItem, SFColor, SFImage;

@protocol SFRichTitleCardSection <SFTitleCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *footnote;
@property(copy, nonatomic) NSArray *offers;
@property(nonatomic) int playActionAlign;
@property(retain, nonatomic) SFActionItem *playAction;
@property(retain, nonatomic) SFImage *imageOverlay;
@property(nonatomic) _Bool thumbnailCropCircle;
@property(nonatomic) _Bool titleNoWrap;
@property(copy, nonatomic) NSNumber *titleWeight;
@property(nonatomic) int titleAlign;
@property(nonatomic) _Bool hideVerticalDivider;
@property(copy, nonatomic) NSNumber *auxiliaryAlignment;
@property(nonatomic) int auxiliaryBottomTextColor;
@property(copy, nonatomic) NSString *auxiliaryBottomText;
@property(copy, nonatomic) NSString *auxiliaryMiddleText;
@property(copy, nonatomic) NSString *auxiliaryTopText;
@property(copy, nonatomic) NSArray *moreGlyphs;
@property(nonatomic) _Bool reviewNewLine;
@property(copy, nonatomic) NSString *reviewText;
@property(retain, nonatomic) SFImage *reviewGlyph;
@property(copy, nonatomic) NSString *ratingText;
@property(copy, nonatomic) NSNumber *rating;
@property(copy, nonatomic) NSString *descriptionText;
@property(nonatomic) _Bool isCentered;
@property(retain, nonatomic) SFImage *titleImage;
@property(copy, nonatomic) NSString *contentAdvisory;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) _Bool hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(nonatomic) _Bool canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
@end

