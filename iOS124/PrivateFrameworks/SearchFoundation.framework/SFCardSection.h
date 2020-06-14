//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/SFCardSection-Protocol.h>
#import <SearchFoundation/SFJSONSerializable-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFCard, SFColor, SFUserReportRequest;

@interface SFCardSection : NSObject <SFJSONSerializable, SFCardSection, NSCopying>
{
    _Bool _hasBottomPadding;
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hideDivider;
    int _separatorStyle;
    NSString *_type;
    SFCard *_nextCard;
    NSArray *_commands;
    NSString *_punchoutPickerTitle;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerDismissText;
    NSArray *_parameterKeyPaths;
    NSString *_cardSectionId;
    SFColor *_backgroundColor;
    NSString *_resultIdentifier;
    SFUserReportRequest *_userReportRequest;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) SFUserReportRequest *userReportRequest; // @synthesize userReportRequest=_userReportRequest;
@property(copy, nonatomic) NSString *resultIdentifier; // @synthesize resultIdentifier=_resultIdentifier;
@property(retain, nonatomic) SFColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *cardSectionId; // @synthesize cardSectionId=_cardSectionId;
@property(copy, nonatomic) NSArray *parameterKeyPaths; // @synthesize parameterKeyPaths=_parameterKeyPaths;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(nonatomic) _Bool hasTopPadding; // @synthesize hasTopPadding=_hasTopPadding;
@property(nonatomic) _Bool canBeHidden; // @synthesize canBeHidden=_canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText; // @synthesize punchoutPickerDismissText=_punchoutPickerDismissText;
@property(copy, nonatomic) NSArray *punchoutOptions; // @synthesize punchoutOptions=_punchoutOptions;
@property(copy, nonatomic) NSString *punchoutPickerTitle; // @synthesize punchoutPickerTitle=_punchoutPickerTitle;
@property(copy, nonatomic) NSArray *commands; // @synthesize commands=_commands;
@property(nonatomic) _Bool hasBottomPadding; // @synthesize hasBottomPadding=_hasBottomPadding;
@property(retain, nonatomic) SFCard *nextCard; // @synthesize nextCard=_nextCard;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool hideDivider; // @synthesize hideDivider=_hideDivider;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

