//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXResource.h>

#import <Silex/SXEmbedResource-Protocol.h>

@class NSDate, NSString, NSURL;

@interface SXEmbedResource : SXResource <SXEmbedResource>
{
}

+ (id)typeString;
- (id)expirationDateWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *HTML; // @dynamic HTML;
@property(readonly, nonatomic) NSURL *URL; // @dynamic URL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly) Class superclass;

@end

