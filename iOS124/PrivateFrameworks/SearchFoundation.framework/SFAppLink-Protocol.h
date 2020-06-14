//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, SFImage, SFPunchout;

@protocol SFAppLink <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) int imageAlign;
@property(retain, nonatomic) SFImage *image;
@property(retain, nonatomic) SFPunchout *appPunchout;
@property(copy, nonatomic) NSString *title;
@end

