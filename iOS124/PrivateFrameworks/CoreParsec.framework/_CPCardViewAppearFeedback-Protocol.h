//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _CPCardForFeedback;

@protocol _CPCardViewAppearFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *fbr;
@property(nonatomic) unsigned int level;
@property(retain, nonatomic) _CPCardForFeedback *card;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

