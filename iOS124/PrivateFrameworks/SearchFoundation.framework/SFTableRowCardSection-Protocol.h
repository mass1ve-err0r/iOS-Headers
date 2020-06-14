//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFColor, SFTableAlignmentSchema;

@protocol SFTableRowCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) _Bool alignRowsToHeader;
@property(nonatomic) int verticalAlign;
@property(nonatomic) _Bool reducedRowHeight;
@property(copy, nonatomic) NSString *tabGroupIdentifier;
@property(nonatomic) _Bool isSubHeader;
@property(copy, nonatomic) NSArray *data;
@property(retain, nonatomic) SFTableAlignmentSchema *alignmentSchema;
@property(copy, nonatomic) NSString *tableIdentifier;
@property(copy, nonatomic) NSArray *richData;
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

