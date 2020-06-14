//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Cards/NSObject-Protocol.h>
#import <Cards/NSSecureCoding-Protocol.h>

@class NSArray, NSString, SFCard, SFColor, SFUserReportRequest;

@protocol SFCardSection <NSSecureCoding, NSObject>
@property(retain, nonatomic) SFUserReportRequest *userReportRequest;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(copy, nonatomic) NSString *resultIdentifier;
@property(copy, nonatomic) NSString *cardSectionId;
@property(copy, nonatomic) NSArray *parameterKeyPaths;
@property(copy, nonatomic) NSArray *commands;
@property(retain, nonatomic) SFCard *nextCard;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) _Bool hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(nonatomic) _Bool canBeHidden;
@property(nonatomic) _Bool hideDivider;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
@end

