//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBImage, _SFPBPunchout;

@protocol _SFPBAppLink <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int imageAlign;
@property(retain, nonatomic) _SFPBImage *image;
@property(retain, nonatomic) _SFPBPunchout *appPunchout;
@property(copy, nonatomic) NSString *title;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

