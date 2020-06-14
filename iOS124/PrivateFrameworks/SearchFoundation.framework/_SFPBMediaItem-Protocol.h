//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBImage, _SFPBMediaOffer, _SFPBPunchout, _SFPBText;

@protocol _SFPBMediaItem <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBImage *contentAdvisoryImage;
@property(copy, nonatomic) NSString *contentAdvisory;
@property(copy, nonatomic) NSArray *buyOptions;
@property(copy, nonatomic) NSArray *subtitleCustomLineBreakings;
@property(retain, nonatomic) _SFPBPunchout *punchout;
@property(copy, nonatomic) NSString *reviewText;
@property(retain, nonatomic) _SFPBImage *overlayImage;
@property(retain, nonatomic) _SFPBImage *reviewGlyph;
@property(retain, nonatomic) _SFPBImage *thumbnail;
@property(retain, nonatomic) _SFPBText *subtitleText;
@property(copy, nonatomic) NSString *title;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBMediaOffer *)buyOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)buyOptionsCount;
- (void)addBuyOptions:(_SFPBMediaOffer *)arg1;
- (void)clearBuyOptions;
- (NSString *)subtitleCustomLineBreakingAtIndex:(unsigned long long)arg1;
- (unsigned long long)subtitleCustomLineBreakingCount;
- (void)addSubtitleCustomLineBreaking:(NSString *)arg1;
- (void)clearSubtitleCustomLineBreaking;
@end

