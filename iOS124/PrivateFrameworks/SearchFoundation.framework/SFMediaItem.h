//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFMediaItem-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFImage, SFPunchout, SFText;

@interface SFMediaItem : NSObject <SFMediaItem, NSSecureCoding, NSCopying>
{
    NSString *_title;
    SFText *_subtitleText;
    SFImage *_thumbnail;
    SFImage *_reviewGlyph;
    SFImage *_overlayImage;
    NSString *_reviewText;
    SFPunchout *_punchout;
    NSArray *_subtitleCustomLineBreaking;
    NSArray *_buyOptions;
    NSString *_contentAdvisory;
    SFImage *_contentAdvisoryImage;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) SFImage *contentAdvisoryImage; // @synthesize contentAdvisoryImage=_contentAdvisoryImage;
@property(copy, nonatomic) NSString *contentAdvisory; // @synthesize contentAdvisory=_contentAdvisory;
@property(copy, nonatomic) NSArray *buyOptions; // @synthesize buyOptions=_buyOptions;
@property(copy, nonatomic) NSArray *subtitleCustomLineBreaking; // @synthesize subtitleCustomLineBreaking=_subtitleCustomLineBreaking;
@property(retain, nonatomic) SFPunchout *punchout; // @synthesize punchout=_punchout;
@property(copy, nonatomic) NSString *reviewText; // @synthesize reviewText=_reviewText;
@property(retain, nonatomic) SFImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(retain, nonatomic) SFImage *reviewGlyph; // @synthesize reviewGlyph=_reviewGlyph;
@property(retain, nonatomic) SFImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) SFText *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

