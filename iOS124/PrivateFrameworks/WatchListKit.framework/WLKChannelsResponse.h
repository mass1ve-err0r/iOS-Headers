//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary;

@interface WLKChannelsResponse : NSObject
{
    _Bool _isValid;
    NSArray *_orderedChannels;
    NSDictionary *_channels;
    NSDate *_expirationDate;
}

+ (id)parseChannelsFromPayload:(id)arg1;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(retain, nonatomic) NSDictionary *channels; // @synthesize channels=_channels;
@property(retain, nonatomic) NSArray *orderedChannels; // @synthesize orderedChannels=_orderedChannels;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 expirationDate:(id)arg2;

@end

