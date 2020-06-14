//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

@class NSArray, NSNumber, NSString, WBSParsecImageRepresentation;

@interface WBSParsecRichText : WBSParsecModel
{
    WBSParsecImageRepresentation *_contentAdvisoryImage;
    NSString *_text;
    NSNumber *_maximumLines;
    NSArray *_formattedTextList;
    NSArray *_moreGlyphRepresentations;
    NSString *_contentAdvisoryString;
}

+ (id)schema;
@property(readonly, nonatomic) NSString *contentAdvisoryString; // @synthesize contentAdvisoryString=_contentAdvisoryString;
@property(readonly, nonatomic) NSArray *moreGlyphRepresentations; // @synthesize moreGlyphRepresentations=_moreGlyphRepresentations;
@property(readonly, nonatomic) NSArray *formattedTextList; // @synthesize formattedTextList=_formattedTextList;
@property(readonly, nonatomic) NSNumber *maximumLines; // @synthesize maximumLines=_maximumLines;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)moreGlyphsWithSession:(id)arg1;
- (id)contentAdvisoryImageWithSession:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

