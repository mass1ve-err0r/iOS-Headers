//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCardSection.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFSocialMediaPostCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, SFCard, SFColor, SFImage, SFRichText, SFUserReportRequest;

@interface SFSocialMediaPostCardSection : SFCardSection <SFSocialMediaPostCardSection, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int canBeHidden:1;
        unsigned int hasTopPadding:1;
        unsigned int hasBottomPadding:1;
        unsigned int separatorStyle:1;
        unsigned int nameNoWrap:1;
    } _has;
    _Bool _canBeHidden;
    _Bool _hasTopPadding;
    _Bool _hasBottomPadding;
    _Bool _nameNoWrap;
    int _separatorStyle;
    NSArray *_punchoutOptions;
    NSString *_punchoutPickerTitle;
    NSString *_punchoutPickerDismissText;
    NSString *_type;
    SFColor *_backgroundColor;
    NSString *_name;
    NSNumber *_nameMaxLines;
    NSString *_handle;
    SFImage *_verifiedGlyph;
    SFImage *_profilePicture;
    SFRichText *_post;
    SFImage *_picture;
    NSString *_timestamp;
    NSString *_footnote;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) SFImage *picture; // @synthesize picture=_picture;
@property(retain, nonatomic) SFRichText *post; // @synthesize post=_post;
@property(retain, nonatomic) SFImage *profilePicture; // @synthesize profilePicture=_profilePicture;
@property(retain, nonatomic) SFImage *verifiedGlyph; // @synthesize verifiedGlyph=_verifiedGlyph;
@property(copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(copy, nonatomic) NSNumber *nameMaxLines; // @synthesize nameMaxLines=_nameMaxLines;
@property(nonatomic) _Bool nameNoWrap; // @synthesize nameNoWrap=_nameNoWrap;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) SFColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) _Bool hasBottomPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(nonatomic) _Bool canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasNameNoWrap;
- (_Bool)hasSeparatorStyle;
- (_Bool)hasHasBottomPadding;
- (_Bool)hasHasTopPadding;
- (_Bool)hasCanBeHidden;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *cardSectionId;
@property(copy, nonatomic) NSArray *commands;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hideDivider;
@property(retain, nonatomic) SFCard *nextCard;
@property(copy, nonatomic) NSArray *parameterKeyPaths;
@property(copy, nonatomic) NSString *resultIdentifier;
@property(readonly) Class superclass;
@property(retain, nonatomic) SFUserReportRequest *userReportRequest;

@end

